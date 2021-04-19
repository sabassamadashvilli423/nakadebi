#pragma once
#include<iostream>
#include<fstream>
using namespace std;
class River
{
public:
	River();
	River(ifstream &ifs);
	string name, start, end;
    int length, count;
	void printRiver();
};

