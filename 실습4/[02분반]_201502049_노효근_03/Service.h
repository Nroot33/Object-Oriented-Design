#ifndef SERVICE_H_
#define SERVICE_H_

#include "Dao.h"

class Service
{
public:
	Dao books[10];

	void bookCreate();
	void bookRead();
	void bookUpdate(int index);
	void bookDelete(int index);
	int bookAllCheck();
	bool bookOneCheck(int index);
};
#endif 
