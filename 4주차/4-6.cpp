#include <iostream>
using namespace std;

int main() {
	int score = 96;
	bool flag = true;
	double average = 3.5;

	cout << "蔼: " << score << " , 农扁 : " << sizeof(score) << " , 林家: " << &score << endl;
	cout << "蔼: " << flag << " , 农扁 : " << sizeof(flag) << " , 林家: " << &flag << endl;
	cout << "蔼: " << average << " , 农扁 : " << sizeof(average) << " , 林家: " << &average << endl;
	return 0;
}