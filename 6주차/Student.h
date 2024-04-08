#pragma once
#include <iostream>
using namespace std;

class Student {
private:
	char name[20] = "";
	int studentNumber = 0;
	int socialNumber = 0;
	char address[50] = "";

public:
	Student(char* _name, int _studentNumber, int _socialNumber) {
		strcpy_s(this->name, 20, _name);
		this->studentNumber = _studentNumber;
		this->socialNumber = _socialNumber;
		cout << "This is Student Constructor" << endl;
	}
	int getStudentNumber();
	void printStudentInfo();

	~Student() { // ~ Àº ¼Ò¸êÀÚ
		cout << "This is Student Destrutor" << endl;
	}
};

