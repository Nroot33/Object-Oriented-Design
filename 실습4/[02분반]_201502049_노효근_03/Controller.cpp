#include "Dao.h"
#include "Service.h"

int main() 
{

	char cmd[100] = {0, };

	Service service;

	while (1) 
	{
	
		std::cout << "�߰�[0] �˻�[1] ����[2] ����[3] ����[-1] : ";
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
			std::cout << "���� ���� �� �����Ϸ��� ���� ��ġ�� �����ּ��� : ";
			std::cin >> index;
			service.bookUpdate(index);
		}

		if (strcmp("3", cmd) == 0)
		{
			service.bookRead();
			std::cout << "���� ���� �� �����Ϸ��� ���� ��ġ�� �����ּ��� : ";
			std::cin >> index;
			service.bookDelete(index);
		}

		if (strcmp("-1", cmd) == 0)
		{
			break;
		}
	}

}