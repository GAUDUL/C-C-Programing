#include <iostream>
using namespace std;

struct student {
	char studentName[20];
	int studentAge;
	int studentID;
	char studentAddress[100];
};

int main() {
	//struct studnet cnu;
	student cbnuS[5];

	student cbnuS_ce = { "홍길동", 20, 1, "청주시" };
	student cbnuS_ce2 { "안혜영", 20, 2, "청주시" };
	student cbnuS_ce3 {};

	cout << cbnuS_ce.studentName << " 학생은 " <<
		cbnuS_ce.studentAge << " 살 이고, 학번은 " <<
		cbnuS_ce.studentID << " 이며, " <<
		cbnuS_ce.studentAddress << "에 산다" << endl;

	return 0;
}