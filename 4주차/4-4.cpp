#include <iostream>
using namespace std;

int main() {
	const int NUMBER_TOTAL_SIZE = 2;
	int number[NUMBER_TOTAL_SIZE] = { 2,1 };
	int temp;
	temp = number[0];
	number[0] = number[1];
	number[1] = temp;

	for (int i = 0; i < NUMBER_TOTAL_SIZE; i++) 
		cout << number[i] << " ";

	return 0;
}