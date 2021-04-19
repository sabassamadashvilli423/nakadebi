#include "User.h"
#include<iostream>
using namespace std;
User::User() {
	cout << "created" << endl;
}
User::User(ifstream& ifs) {
	ifs >> name >> lname >> email >> uname >> password;
}

void User::printUser() {
	cout << name << " " << lname << " " << email << " " << uname << " " << password << endl;
}
