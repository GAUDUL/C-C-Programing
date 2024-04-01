#include <iostream>
using namespace std;

void addValue(int);

int main() {
	int num = 3;
	cout << num << endl;
	addValue(num);
	cout << "함수 호출 후 " << num << endl;
}

void addValue(int val) {
	val++;
	cout << "함수 내부 " << val << endl;
	return;
}