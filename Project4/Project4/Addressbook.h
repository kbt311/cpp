#pragma once
#include <iostream>
#include <string>
using namespace std;
#define MAX 1000

struct Person {
	string m_Name;
	int m_Sex;
	int m_Age;
	string m_Phone;
	string m_Address;
};
struct Addressbooks {
	Person personarray[MAX];
	int m_Size;
	void showmenu();
	void addPerson();
	void showPerson();
	int isExist(string name);
	void deletePerson();
	void findPerson();
	void modifyPerson();
	void clearPerson();
};