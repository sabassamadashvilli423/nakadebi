#include "River.h"
#include<iostream>
using namespace std;
River::River() {
	cout << "created" << endl;
}
River::River(ifstream& ifs) {
	ifs >> name >> length >> start >> end >> count;
}
void River::printRiver() {
	cout << name << " " << length << " " << start << " " << end << " " << count << endl;
}
