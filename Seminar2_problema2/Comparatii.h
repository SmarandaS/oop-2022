#pragma once
#include "Student.h"
#define _CRT_SECURE_NO_WARNINGS
#include <cstring>


int cmpNume(Student s1, Student s2)
{
	return strcmp(s1.name, s2.name);
}

int cmpMath(Student s1, Student s2)
{
	if (s1.Math > s2.Math)
		return 1;
	if (s1.Math < s2.Math)
		return -1;
	else
		return 0;
}

int cmpHistory(Student s1, Student s2)
{
	if (s1.History > s2.History)
		return 1;
	if (s1.History < s2.History)
		return -1;
	else
		return 0;
}

int cmpEnglish(Student s1, Student s2)
{
	if (s1.English > s2.English)
		return 1;
	if (s1.English < s2.English)
		return -1;
	else
		return 0;
}

int cmpAverage(Student s1, Student s2)
{
	if (s1.avg(s1.English, s1.History, s1.Math) > s2.avg(s2.English, s2.History, s2.Math))
		return 1;
	if (s1.avg(s1.English, s1.History, s1.Math) < s2.avg(s2.English, s2.History, s2.Math))
		return -1;
	else
		return 0;
}
