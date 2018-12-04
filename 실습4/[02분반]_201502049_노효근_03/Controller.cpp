#include "Dao.h"
#include "Service.h"

int main() 
{

	char cmd[100] = {0, };

	Service service;

	while (1) 
	{
	
		std::cout << "추가[0] 검색[1] 수정[2] 삭제[3] 종료[-1] : ";
		std::cin.getline(cmd, 100);

		int index = 0;

		if (strcmp("0", cmd) == 0)
		{
			service.bookCreate();
		}

		if (strcmp("1", cmd) == 0)
		{
			service.bookRead();
		}

		if (strcmp("2", cmd) == 0)
		{
			service.bookRead();
			std::cout << "위의 정보 중 수정하려는 도서 위치를 적어주세요 : ";
			std::cin >> index;
			service.bookUpdate(index);
		}

		if (strcmp("3", cmd) == 0)
		{
			service.bookRead();
			std::cout << "위의 정보 중 삭제하려는 도서 위치를 적어주세요 : ";
			std::cin >> index;
			service.bookDelete(index);
		}

		if (strcmp("-1", cmd) == 0)
		{
			break;
		}
	}

}