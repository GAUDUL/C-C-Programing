#include <iostream>
using namespace std;

template<typename T>

void Swap(T& t1, T& t2) {
	T temp;
	temp = t1;
	t1 = t2;
	t2 = temp;
	return;
}

template<> void Swap<int>(int& t1, int& t2) { t1++; t2++; }

int main() {
	int n1 = 1, n2 = 2;
	char c1 = 'a', c2 = 'b';
	string s1 = "abc", s2 = "def";

	cout << "before" << endl;
	cout << "n1 : " << n1 << " n2 : " << n2 << endl;
	cout << "c1 : " << c1 << " c2 : " << c2 << endl;
	cout << "s1 : " << s1 << " s2 : " << s2 << endl;
	Swap(n1, n2);
	Swap(c1, c2);
	Swap(s1, s2);
	cout << "after" << endl;
	cout << "n1 : " << n1 << " n2 : " << n2 << endl;
	cout << "c1 : " << c1 << " c2 : " << c2 << endl;
	cout << "s1 : " << s1 << " s2 : " << s2 << endl;
}

