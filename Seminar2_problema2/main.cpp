#include "Student.h"
#include "Comparatii.h"
#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>

Student s3;
Student s4;
int main()
{
	s3.set_name("Marcel Popescu");
	s3.set_Math(8);
	s3.set_History(5);
	s3.set_English(10);
	s4.set_name("Ionela Sandu");
	s4.set_Math(7);
	s4.set_History(9);
	s4.set_English(10);

	std::cout << cmpNume(s3, s4)<<" "<<cmpMath(s3,s4)<<" "<<cmpHistory(s3,s4)<<" "<<cmpEnglish(s3,s4)<<" "<<cmpAverage(s3,s4);
	
}
