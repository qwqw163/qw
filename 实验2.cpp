#include<bits\stdc++.h>
using namespace std;

int main(){
	ifstream in("C:\\Users\\ASUS\\Desktop\\软件工程实验报告\\第二次作业\\yq_in.txt");
	ofstream out("C:\\Users\\ASUS\\Desktop\\软件工程实验报告\\第二次作业\\yq_out.txt");
	string s, tem;
	while(in >> s){
		if(s != tem){
			if(tem.length()) out << endl;
			tem = s;
			out << s << endl;
		}
		getline(in, s);
		s = s.substr(1);
		if(s == "待明确地区	0") continue;
		out << s << endl;
	}
	in.close();
	out.close();
    return 0;
}
