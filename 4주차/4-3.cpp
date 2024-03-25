#include <iostream>
#include <string>
#include <cstring>
using namespace std;

//int main() { // getline() -> 개행 문자(Enter)를 입력의 끝으로 간주
//	char dogName[20];
//	char dogColor[10];
//	cout << "Please enter your dog's name: \n";
//	cin.getline(dogName,20);
//	cout << "Please enter your dog's fur color : \n";
//	cin.getline(dogColor, 10);
//	cout << "The color of " << dogName << " is " << dogColor << "\n ";
//
//	string catName;
//	string catColor = "white";
//	cin >> catName;
//	cout << "The color of " << catName << " is " << catColor << ".\n";
//}

int main() {
	char charTest1[10] = "char Test";
	char charTest2[10];

	//charTest2 = charTest1;

	strcpy_s(charTest2, charTest1);

	char charTest3[20] = " . . .";
	strcat_s(charTest3, charTest2);

	cout << charTest1 << ", " << charTest2 << ", " << charTest3 << ", size =" << strlen(charTest3) << endl;
	return 0;
}