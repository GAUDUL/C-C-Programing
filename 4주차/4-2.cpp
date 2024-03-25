#include <iostream>
using namespace std;

//int main() {
//	char dog[8] = { 'm','y',' ','d','o','g',' ','i' }; //NULL을 안 붙여주면 오류가 난다!
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