#include <iostream>
using namespace std;

void addValue(int);

int main() {
	int num = 3;
	cout << num << endl;
	addValue(num);
	cout << "�Լ� ȣ�� �� " << num << endl;
}

void addValue(int val) {
	val++;
	cout << "�Լ� ���� " << val << endl;
	return;
}