#include "Student.h"
#define _CRT_SECURE_NO_WARNINGS
#include <cstring>


void Student::init() 
{
	
	this->Math = 0;
	this->History = 0;
	this->English = 0;
	this->name[0] = '\0';
}

void Student::set_name(const char* name)
{
	strcpy(this->name, name);
}

void Student::set_Math(float Math)
{
	this->Math = Math;
}

void Student::set_History(float History)
{
	this->History = History;
}

void Student::set_English(float English)
{
	this->English = English;
}

const char* Student::get_name() const
{
	return this->name;
}

float Student::get_Math() const
{
	return this->Math;
}

float Student::get_History() const
{
	return this->History;
}

float Student::get_English() const
{
	return this->English;
}

float Student::avg(float Math, float History, float English)
{
	return ((English + History + Math) / 3);
}