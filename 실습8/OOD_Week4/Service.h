
#ifndef SERVICE_H_
#define SERVICE_H_

#include "Dao.h"

class Service
{

public:

	Dao books[10];
	/* 10개의 도서 정보를 저장할 수 있음 */
	
	void	bookCreate();
	/* 도서 정보 생성 함수 */
	
	void	bookRead();
	/* 도서 정보 검색 함수 */

	void	bookUpdate(int index);
	/* 도서 정보 수정 함수 */

	void	bookDelete(int index);
	/* 도서 정보 삭제 함수 */

	int		bookAllCheck();
	/* (전체) 빈 공간 여부 체크  함수 */

	bool	bookOneCheck(int index);
	/* (특정 위치) 빈 공간 여부 체크  함수 */
};
#endif