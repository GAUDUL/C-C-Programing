#include <iostream>
using namespace std;

int main() {
	int score = 95;
	int* pScore = &score;

	cout << "score ��" << score << ", �޸� ��ġ" << &score << endl;
	cout << "pScore ��" << pScore << ", �޸� ��ġ" << &pScore << endl;

	return 0;
}