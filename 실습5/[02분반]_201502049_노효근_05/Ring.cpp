#include "Ring.h"
#include <iostream>

bool Ring::Ring_InitMembers(int in_x, int in_y, int in_r, int out_x, int out_y, int out_r) {

	if (in_x == out_x && in_y == out_y) {
		if (in_r < out_r) {
			return true;
		}
	}
	else
		return false;
}
