#ifndef RING_H_
#define RING_H_

#include "Circle.h"

class Ring
{
private:
	Circle circle;

public:
	bool Ring_InitMembers(int in_x, int in_y, int in_r, int out_x, int out_y, int out_r);

};
#endif // !RING_H_

