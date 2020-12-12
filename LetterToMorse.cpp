#include<iostream>
#include<string>

using namespace std;
int main(){
	string sen; //sentenses
	while(cin>>sen){
		string morse[26] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.",
		 "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-",
		  ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
		for(int i=0;i<sen.size();i++){
			if(int(sen[i])>=65 && int(sen[i])<=90)
				cout<<morse[int(sen[i]-65)]<<endl; //ASCII
			else
				cout<<morse[int(sen[i])-97]<<endl; //ASCII
		}
	}
	return 0;
}
