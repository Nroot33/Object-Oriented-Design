
#include "Dao.h"
#include "Service.h"

int main()
{

	char cmd[100] = { 0, };
	/* ��ɾ �Է¹޴� ����, ��ɾ �ش����� �ʴ� ������ �� */

	Service service;
	/* ���� ���� ���� ��ü */

	while (1)
	{

		std::cout << "�߰�[0] �˻�[1] ����[2] ����[3] ����[-1] : ";

		std::cin.getline(cmd, 100);
		//std::cin >> cmd;
		int index = 0;

		if (strcmp("0", cmd) == 0)
		{
			service.bookCreate();
		} 
		else if (strcmp("1", cmd) == 0)
		{
				service.bookRead();
		}
		else if (strcmp("2", cmd) == 0)
		{
			service.bookRead();
			std::cout << "���� ���� �� �����Ϸ��� ���� ��ġ�� �����ּ���. : ";
			std::cin >> index;
			service.bookUpdate(index);
		}
		else if (strcmp("3", cmd) == 0)
		{
			service.bookRead();
			std::cout << "���� ���� �� �����Ϸ��� ���� ��ġ�� �����ּ���.: ";
			std::cin >> index;
			service.bookDelete(index);
		}
		else if (strcmp("-1", cmd) == 0)
		{
			break;
		}

	}
}