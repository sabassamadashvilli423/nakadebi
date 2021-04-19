#include <iostream>
#include"River.h"
#include<fstream>
using namespace std;
int main()
{
  ifstream fin("rivers.txt");
  int n;
  fin >> n;
  River* p;
  for (int i = 0; i < n; i++) {
	  p = new River(fin);
	  if (p->count > n) {
		  p->printRiver();
	  }
  }
}