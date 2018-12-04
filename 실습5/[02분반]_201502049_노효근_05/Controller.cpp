#include "Ring.h"
#include <iostream>
using namespace std;

int main(void) {
	Ring ring;
	bool result;
	
	result = ring.Ring_InitMembers(1,1,4, 1,1, 9);

	if (result)
		cout << "Make Perfect ring!" << endl;
	else
		cout << "Doesn't Make ring!" << endl;
		
	return 0;

}