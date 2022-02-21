#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	ifstream fin("_1.txt");
	int depth = 0;
	int dist = 0;
	for(int _ = 0; _ < 1000; _++) {
		string s;
		int c;
		fin >> s >> c;
		if(s[0] == 'f') {
			dist += c;
		} 
		if(s[0] == 'u') {
			depth -= c;
		}
		if(s[0] == 'd') {
			depth += c;
		}
		// cout << s << " " << c << endl;
		// cout << depth * dist << endl;
	}

	cout << depth * dist << endl;
}