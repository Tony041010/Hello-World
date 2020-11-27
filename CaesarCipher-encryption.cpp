#include<iostream>
#include<string>
using namespace std;
int main(){
	int L;
	cin>>L;
	string a;
	while(getline(cin,a)){
		for(int i=0;i<a.size();i++){
			cout<<char(int(a[i])+L);
		}
		cout<<endl;
	}
	return 0;
}
