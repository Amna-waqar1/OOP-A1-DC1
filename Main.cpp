#include"Student.h"

//main function
int main() {


	//object s1 have user defined details
	Student s1;
	Student s2;

	//s3 uses default details
	Student s3;
	cout << "Enter Student Detail" << endl;

	s1.getDetails();
	cout << "------------Student Information System------------" << endl;
	s1.showDetails();
	s2.setDetails("Aryan", 19, 35, 3.57);
	s2.showDetails();
	s3.showDetails();
	return 0;
}