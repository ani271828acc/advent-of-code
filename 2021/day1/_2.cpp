#include <fstream>
#include <iostream>
using namespace std;

int main() {
	ifstream fin("_1.txt");
	int prev = 300000000;
	int s[3] = {100000000, 100000000, 100000000};
	int i = 0;
	int ct = 0;
	
	while(fin >> s[i++]) {
		i = i % 3;
		int cur = 0;
		for(int j = 0; j < 3; j++) {
			cur += s[j];
		}
		if(cur > prev) {
			ct ++;
		}
		prev = cur;
		cout << ct << endl;
	}
}