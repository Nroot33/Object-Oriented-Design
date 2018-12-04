#include "Service.h"

void Service::bookCreate() {
	if (bookAllCheck() == -1) {
		std::cout << "더 이상 저장 할 수 없습니다." << std::endl;
	}
	else {
		int index = bookAllCheck();

		std::cout << "책 제목을 입력해주세요 : ";
		std::cin.getline(books[index].title, 500);

		std::cout << "저자를 입력해주세요 : ";
		std::cin.getline(books[index].name, 100);

		std::cout << "출판 년도를 입력해주세요 : ";
		std::cin.getline(books[index].year, 100);
	}
	//추가
}

void Service::bookRead() {
	int i;
	for (i = 0; i < 10; i++) {
		if (bookOneCheck(i))
			std::cout << i + 1 << " ] 빈 공간입니다. " << std::endl;
		else {
			std::cout << i + 1 << " ] ";
			books[i].print_bookinfo();
		}
	}
//검색
}

void Service::bookUpdate(int index) {
	if (bookOneCheck(index - 1)) {
		std::cout << "빈 공간입니다." << std::endl;
	}
	else {
		int index = bookAllCheck();

		std::cout << "수정 할 책 제목을 입력해주세요 : ";
		std::cin.getline(books[index].title, 500);

		std::cout << "수정 할 저자를 입력해주세요 : ";
		std::cin.getline(books[index].name, 100);

		std::cout << "수정 할 출판 년도를 입력해주세요 : ";
		std::cin.getline(books[index].year, 100);
	}
//수정
}

void Service::bookDelete(int index) {	
	if (bookOneCheck(index - 1))
		std::cout << index << " ] 빈 공간입니다." << std::endl;

	else
	{
		books[index - 1].print_bookinfo();
		books[index - 1] = Dao();
		std::cout << index << " ] 위치 도서 삭제 " << std::endl;
	}
//삭제
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
//특정위치 빈공간 검색
}

