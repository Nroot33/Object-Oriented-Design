#include "Service.h"

void Service::bookCreate() {
	if (bookAllCheck() == -1) {
		std::cout << "�� �̻� ���� �� �� �����ϴ�." << std::endl;
	}
	else {
		int index = bookAllCheck();

		std::cout << "å ������ �Է����ּ��� : ";
		std::cin.getline(books[index].title, 500);

		std::cout << "���ڸ� �Է����ּ��� : ";
		std::cin.getline(books[index].name, 100);

		std::cout << "���� �⵵�� �Է����ּ��� : ";
		std::cin.getline(books[index].year, 100);
	}
	//�߰�
}

void Service::bookRead() {
	int i;
	for (i = 0; i < 10; i++) {
		if (bookOneCheck(i))
			std::cout << i + 1 << " ] �� �����Դϴ�. " << std::endl;
		else {
			std::cout << i + 1 << " ] ";
			books[i].print_bookinfo();
		}
	}
//�˻�
}

void Service::bookUpdate(int index) {
	if (bookOneCheck(index - 1)) {
		std::cout << "�� �����Դϴ�." << std::endl;
	}
	else {
		int index = bookAllCheck();

		std::cout << "���� �� å ������ �Է����ּ��� : ";
		std::cin.getline(books[index].title, 500);

		std::cout << "���� �� ���ڸ� �Է����ּ��� : ";
		std::cin.getline(books[index].name, 100);

		std::cout << "���� �� ���� �⵵�� �Է����ּ��� : ";
		std::cin.getline(books[index].year, 100);
	}
//����
}

void Service::bookDelete(int index) {	
	if (bookOneCheck(index - 1))
		std::cout << index << " ] �� �����Դϴ�." << std::endl;

	else
	{
		books[index - 1].print_bookinfo();
		books[index - 1] = Dao();
		std::cout << index << " ] ��ġ ���� ���� " << std::endl;
	}
//����
}

int Service::bookAllCheck() {
	int i;
	for (i = 0; i < 10; i++) {
		if (bookOneCheck(i)) {
			return i;
		}
	}
	return (-1);
}

bool Service::bookOneCheck(int index){
	Dao empty;
	if (strcmp(empty.title, books[index].title) == 0) {
		if (strcmp(empty.name, books[index].name) == 0) {
			if (strcmp(empty.year, books[index].year) == 0) {
				return true;
			}
		}
	}
	else
			return false;
//Ư����ġ ����� �˻�
}

