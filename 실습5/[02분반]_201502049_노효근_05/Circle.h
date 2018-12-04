#define CIRCLE_H_

#include "Point.h"

class Circle
{

private:

	Point center;
	int radius;

public:
	void Circle_InitMembers(int xpos, int ypos, int radius);

	void Circle_ShowRingInfo(void);


};