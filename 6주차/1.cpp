#include "Student.h"


int Student::getStudentNumber() {
	return this->studentNumber;
}

void Student::printStudentInfo() {
	cout << "Student Name: " << this->name << endl;
	cout << "Student Number: " << this->studentNumber << endl;
	cout << "Student Social Number: " << this->socialNumber << endl;
	cout << "Student Address: " << this->address << endl;
}

int main() {
	char name[20] = "Elin";
	Student student(name, 20231234567, 2012124407123);
	student.printStudentInfo();

	return 0;
}