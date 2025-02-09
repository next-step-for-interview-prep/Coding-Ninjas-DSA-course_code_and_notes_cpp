#include <iostream>
using namespace std;
#include "Student.cpp"

int main() {
	
	Student s1(10, 1001);
	Student s2(20, 2001);

	Student *s3 = new Student(30, 3001);

	s2 = s1;

	*s3 = s1;

	s2 = *s3;

	delete s3;



	/*
	Student s1(10, 1001);
	cout << "S1 : ";
	s1.display();

	Student s2(s1);
	cout << "S2 : ";
	s2.display();

	Student *s3 = new Student(20, 2001);
	cout << "S3 : ";
	s3 -> display();

	Student s4(*s3);

	Student *s5 = new Student(*s3);
	Student *s6 = new Student(s1);
	*/

}

