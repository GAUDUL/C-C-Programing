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

	student cbnuS_ce = { "ȫ�浿", 20, 1, "û�ֽ�" };
	student cbnuS_ce2 { "������", 20, 2, "û�ֽ�" };
	student cbnuS_ce3 {};

	cout << cbnuS_ce.studentName << " �л��� " <<
		cbnuS_ce.studentAge << " �� �̰�, �й��� " <<
		cbnuS_ce.studentID << " �̸�, " <<
		cbnuS_ce.studentAddress << "�� ���" << endl;

	return 0;
}