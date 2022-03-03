#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

long long toint(string s) {
	long long res=0;
	for(int i=0;i<s.size();i++) {
		res+=(s[s.size()-1-i]-'0')*(1LL<<i);
	}
	return res;
}

int main() {
	ifstream fin("_1.txt");
	int ct = 0;
	string line;
	vector<string> inp;

	while(getline(fin, line)) {
		inp.push_back(line);
	}
	
	vector<bool> oxy(inp.size(),true);
	vector<bool> co2(inp.size(),true);
	string _oxy, _co2;

	for(int bit=0;bit<inp[0].size();bit++) {
		vector<int> ct(2,0);
		for(int i=0;i<inp.size();i++) {
			if(oxy[i])
				ct[inp[i][bit]-'0'] ++;
		}
		char del=(ct[0]>ct[1]?'1':'0');
		int c = 0;
		for(int i=0;i<inp.size();i++) {
			if(inp[i][bit]==del)
				oxy[i]=false;
			c+=oxy[i];
			if(oxy[i])
				_oxy=inp[i];
		}
		if(c==1)
			break;
	}

	for(int bit=0;bit<inp[0].size();bit++) {
		vector<int> ct(2,0);
		for(int i=0;i<inp.size();i++) {
			if(co2[i])
				ct[inp[i][bit]-'0'] ++;
		}
		char del=(ct[0]>ct[1]?'0':'1');
		int c = 0;
		for(int i=0;i<inp.size();i++) {
			if(inp[i][bit]==del)
				co2[i]=false;
			c+=co2[i];
			if(co2[i])
				_co2=inp[i];
		}
		if(c==1)
			break;
	}

	cout<<toint(_oxy)*toint(_co2)<<endl;
}