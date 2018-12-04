
#include "Service.h"

void	Service::bookCreate()
{

	Dao book;
	/* 도서 정보를 입력 받는 변수*/

	int index = bookAllCheck();

	if (index == -1) {
		std::cout << "빈 공간이 없습니다." << std::endl;
	} 
	else {
		std::cout << "책 제목을 입력해 주세요 : ";
		//std::cin >> book.title;
		std::cin.getline(book.title,500);

		std::cout << "저자를 입력해 주세요 : ";
		//std::cin >> book.name;
		std::cin.getline(book.name, 100);
		
		std::cout << "출판 년도를 입력해 주세요 : ";
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
			std::cout << i + 1 << ") " << "빈 공간 입니다." << std::endl;			
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
	/* 도서 정보를 입력 받는 변수*/
	
	if (bookOneCheck(index)) {
		std::cout << index << ") 위치는 " << "빈 공간이므로 수정할 수 없습니다." << std::endl;
	}
	else {
		
		std::cout << "(수정)책 제목을 입력해 주세요 : ";
		//std::cin >> book.title;
		std::cin.getline(book.title, 500);

		std::cout << "(수정)저자를 입력해 주세요 : ";
		//std::cin >> book.name;
		std::cin.getline(book.name, 100);

		std::cout << "(수정)출판 년도를 입력해 주세요 : ";
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
		std::cout << index << ") 위치는 " << "빈 공간이므로 수정할 수 없습니다." << std::endl;
	}
	else {

		strcpy_s(book.name, name);	// char 배열은 ("=")로 대입 연산이 안되기 때문에 strcpy_s 사용
		strcpy_s(book.title, title);
		strcpy_s(book.year, year);

		books[index - 1] = book;

		std::cout << index << ") 위치의 도서를 삭제했습니다." << std::endl;
	}
}

int		Service::bookAllCheck() {

	int index = -1;
	/* 도서 정보를 저장할 공간 index 확보 */

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

	if (strcmp("",book.title) == 0) {	// 같은 경우 0 반환, 빈 공간임을 알려줌
		return true;
	}
	else {
		return false;
	}
}
