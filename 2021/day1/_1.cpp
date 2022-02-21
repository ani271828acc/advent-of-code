#include <fstream>
#include <iostream>
using namespace std;

int main() {
	ifstream fin("_1.txt");
	int prev = 100000000;
	int s;
	int ct = 0;
	cout << "here" << endl;
	while(fin >> s) {
		ct += (s > prev);
		prev = s;
		cout << ct << endl;
	}
}