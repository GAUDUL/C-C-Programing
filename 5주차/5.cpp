#include <iostream>
using namespace std;

template<typename T1, typename T2>

auto sum(T1 a, T2 b) -> decltype(a + b) {
	return a + b;
}

int main() {
	cout << "sum(2, 3.4) = " << sum(2, 3.4) << endl;
	cout << "sum(3, 'a') = " << sum(3, 'a') << endl;
}