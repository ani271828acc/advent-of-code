#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	ifstream fin("_1.txt");
	int ct = 0;
	string line;
	vector<int> bits;
	bool setup = false;

	while(getline(fin, line)) {
		if(!setup) {
			bits = vector<int>(line.size(), 0);
			setup = true;
		}
		for(int _i = 0; _i < line.size(); _i++) {
			bits[_i] += line[_i] - '0';
		}
		ct ++;
	}

	long long gamma = 0;
	for(int _i = 0; _i < bits.size(); _i++) {
		gamma += (1ll << _i) * (bits[bits.size() - 1 - _i] > ct/2);
	}
	
	cout << (gamma * (gamma ^ ((1ll << bits.size()) - 1))) << endl;
}