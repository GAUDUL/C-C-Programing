#include <iostream>
using namespace std;

//int main() {
//	char dog[8] = { 'm','y',' ','d','o','g',' ','i' }; //NULL�� �� �ٿ��ָ� ������ ����!
//	char cat[8] = { 'm','y',' ','c','a','t',' ','\0' };
//
//	cout << dog << endl;
//	cout << cat << endl;
//	return 0;
//}

int main() {
	char dog[] = "My dog is a poodle.";
	char cat[7] = "my cat";

	cout << dog << " , size = " << sizeof(dog) << endl;
	cout << cat << endl;
}