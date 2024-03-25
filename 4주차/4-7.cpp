#include <iostream>
using namespace std;

int main() {
	int score = 95;
	int* pScore = &score;

	cout << "score 값" << score << ", 메모리 위치" << &score << endl;
	cout << "pScore 값" << pScore << ", 메모리 위치" << &pScore << endl;

	return 0;
}