#include<bits\stdc++.h>
using namespace std;

int main(int argc, char *argv[]){
	if(argc < 3){
		cout << "请输入文件路径" << endl;
		return 0;
	}
	
	ifstream in;
	in.open(argv[1]);
	if(!in){
		cout << "打开文件失败" << endl;
		return 0;
	}

	ofstream out;
	out.open(argv[2]);
	if(!out){
		cout << "打开文件失败" << endl;
		return 0;
	}
	if(argc == 3){
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
	}
	else{
		string s, tem;
		string res = "";
		int len = strlen(argv[3]);
		for(int i = 0; i < len; i++) res += argv[3][i];
		out << res << endl;
		while(in >> s){
			getline(in, tem);
			tem = tem.substr(1);
			if(s == res){
				if(tem == "待明确地区	0")  continue;
				out << tem << endl;
			}
		}
		in.close();
		out.close();
	}
	return 0;
}
