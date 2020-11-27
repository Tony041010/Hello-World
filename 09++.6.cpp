#include<iostream>
#include<string>
using namespace std;
int main(){
	string a;
	string b;
	while(getline(cin,a)){
		getline(cin,b);
		string c=b;
		for(int i=-26;i<=26;i++){
			for(int q=0;q<b.length();q++)
				c[q]=char(int(b[q])+i);	
			if(string::npos != c.find(a)){
				cout<<i<<' '<<c<<endl;
				break;				
			}
		}
	}
	return 0;
}
