#pragma once

class Student
{
public:
	char name[100];
	float Math;
	float History;
	float English;
	

public:
	void init();
	void set_name(const char* name);
	void set_Math(float Math);
	void set_History(float History);
	void set_English(float English);
	const char* get_name() const;
	float get_Math() const;
	float get_History() const;
	float get_English() const;
	float avg(float Math, float History, float English);
};
