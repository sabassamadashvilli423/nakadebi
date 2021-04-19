#include <iostream>
#include<fstream>
#include"User.h"
#include<vector>
int main()
{
	ifstream fin("users.txt");
	ofstream fout("users.txt");
	int n,u,k=0;
	fin >> n;
	User* p;
	User t;
	vector<User>  a(n);
	cout << "sheitanet ricxvi tu ramdeni momxmareblis saxels sheitant" << endl;
	cin >> u;
	vector<User> f(u);
	for (int i = 0; i < n; i++) {
		p = new User(fin);
		a[i].name = p->name;
		a[i].lname = p->lname;
		a[i].email = p->email;
		a[i].uname = p->uname;
		a[i].password = p->password;
	}
	for (int i = 0; i < n; i++) {
		cin >> t.name >> t.lname >> t.email >> t.uname >> t.password;
		f.push_back(t);
	}
	for (int i = 0; i < f.size(); i++) {
		for (int j = 0; j < a.size(); j++) {
			if (f[i].printUser() != a[j].printUser()) {
				k++;
			}
		}
		if (k = a.size()) {
			fout << f[i].printUser();
		}
	}
}