#ifndef POINT_H_
#define POINT_H_

class Point
{
private: 
	int x;
	int y;

public:
	/*�Ӽ� �ʱ�ȭ*/
	void Point_initMembers(int xpos, int ypos);

	/*x,y��ǥ ���*/
	void Point_ShowPointinfo(void);


	void Point_setX(int xpos);
	void Point_setY(int ypos);

	int Point_getX(void);
	int Point_getY(void);


};
#endif // !POINT_H_
