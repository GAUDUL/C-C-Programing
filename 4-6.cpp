#include <iostream>
using namespace std;

int main() {
	int score = 96;
	bool flag = true;
	double average = 3.5;

	cout << "��: " << score << " , ũ�� : " << sizeof(score) << " , �ּ�: " << &score << endl;
	cout << "��: " << flag << " , ũ�� : " << sizeof(flag) << " , �ּ�: " << &flag << endl;
	cout << "��: " << average << " , ũ�� : " << sizeof(average) << " , �ּ�: " << &average << endl;
	return 0;
}