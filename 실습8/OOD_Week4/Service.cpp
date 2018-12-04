
#include "Service.h"

void	Service::bookCreate()
{

	Dao book;
	/* ���� ������ �Է� �޴� ����*/

	int index = bookAllCheck();

	if (index == -1) {
		std::cout << "�� ������ �����ϴ�." << std::endl;
	} 
	else {
		std::cout << "å ������ �Է��� �ּ��� : ";
		//std::cin >> book.title;
		std::cin.getline(book.title,500);

		std::cout << "���ڸ� �Է��� �ּ��� : ";
		//std::cin >> book.name;
		std::cin.getline(book.name, 100);
		
		std::cout << "���� �⵵�� �Է��� �ּ��� : ";
		//std::cin >> book.year;
		std::cin.getline(book.year, 100);
		
		books[index] = book;
	}
}

void	Service::bookRead()
{
	
	for (int i = 0; i < sizeof(books)/sizeof(*books) ; i++) {
		Dao book = books[i];

		if (strcmp("", book.title) == 0) {
			std::cout << i + 1 << ") " << "�� ���� �Դϴ�." << std::endl;			
		}
		else {
			std::cout << i + 1 << ") ";
			book.print_bookInfo();
		}
	}
}

void	Service::bookUpdate(int index)
{

	Dao book;
	/* ���� ������ �Է� �޴� ����*/
	
	if (bookOneCheck(index)) {
		std::cout << index << ") ��ġ�� " << "�� �����̹Ƿ� ������ �� �����ϴ�." << std::endl;
	}
	else {
		
		std::cout << "(����)å ������ �Է��� �ּ��� : ";
		//std::cin >> book.title;
		std::cin.getline(book.title, 500);

		std::cout << "(����)���ڸ� �Է��� �ּ��� : ";
		//std::cin >> book.name;
		std::cin.getline(book.name, 100);

		std::cout << "(����)���� �⵵�� �Է��� �ּ��� : ";
		//std::cin >> book.year;
		std::cin.getline(book.year, 100);

		books[index-1] = book;
	}
}

void	Service::bookDelete(int index)
{

	Dao book;
	char name[10] = { 0, };	
	char title[100] = { 0, };
	char year[100] = { 0, };
	book = books[index-1];

	if (bookOneCheck(index)) {
		std::cout << index << ") ��ġ�� " << "�� �����̹Ƿ� ������ �� �����ϴ�." << std::endl;
	}
	else {

		strcpy_s(book.name, name);	// char �迭�� ("=")�� ���� ������ �ȵǱ� ������ strcpy_s ���
		strcpy_s(book.title, title);
		strcpy_s(book.year, year);

		books[index - 1] = book;

		std::cout << index << ") ��ġ�� ������ �����߽��ϴ�." << std::endl;
	}
}

int		Service::bookAllCheck() {

	int index = -1;
	/* ���� ������ ������ ���� index Ȯ�� */

	for (int i = 0; i < sizeof(books) / sizeof(*books); i++) {
		Dao checkBook = books[i];

		if (strcmp("", checkBook.title) == 0) {
			index = i;
			break;
		}
	}

	return index;
}

bool	Service::bookOneCheck(int index)
{
	Dao book;
	book = books[index-1];

	if (strcmp("",book.title) == 0) {	// ���� ��� 0 ��ȯ, �� �������� �˷���
		return true;
	}
	else {
		return false;
	}
}
