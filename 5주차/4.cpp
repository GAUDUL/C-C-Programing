#include <iostream>
using namespace std;

void add(int a);

int main() {
	cout << "Test " << endl;

	for (int i = 0; i < 5; i++) {
		add(i);
	}
	return 0;
}

void add(int a) {
	static int totalSum = 0; //�ѹ��� �ʱ�ȭ��
	totalSum += a;
	cout << totalSum << endl;
}