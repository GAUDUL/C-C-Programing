#include <iostream>
using namespace std;

int main() {
	const int Line_SIZE = 4;
	int rectangle[Line_SIZE] = { 10,5 };
	cout << rectangle[0] << " , " << rectangle[1] << " , " << rectangle[2] << " , " << rectangle[3] << endl;

	float f_rectangle[Line_SIZE] = { 0,0 };
	cout << f_rectangle[0] << " , " << f_rectangle[1] << " , " << f_rectangle[2] << " , " << f_rectangle[3] << endl;
	return 0;
}