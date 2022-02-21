#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	ifstream fin("_1.txt");
	long long depth = 0;
	long long dist = 0;
	long long aim = 0;
	for(int _ = 0; _ < 1000; _++) {
		string s;
		long long c;
		fin >> s >> c;
		if(s[0] == 'f') {
			dist += c;
			depth += aim * c;
		} 
		if(s[0] == 'u') {
			aim -= c;
		}
		if(s[0] == 'd') {
			aim += c;
		}
	}

	cout << depth * dist << endl;
}