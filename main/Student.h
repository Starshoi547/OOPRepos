#pragma once
#include <iostream>
#include <string>


using namespace std;

class Student {
public:
	string name;
	int age;

	string getInfo() {
		return name + ": age = " + to_string(age);
	}
};