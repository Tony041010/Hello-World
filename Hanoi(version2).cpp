#include<bits\stdc++.h>
using namespace std;
void Hani(int ,char,char,char);
/*�ϥΪ��[�� : �T�ڬW�l���O��ABC�A����A�W�l���̩��h�H�~���L�l�qA����B�A
�A��̫�@������C�A�̫��W�誺�L�l�̱qB����C�C
�p�G�ӬW�l�u���@���L�l�A�h�����qA����C�Y�i*/
void Hanoi( int plates , char A , char B , char C ){
	if( plates == 1 ){
		cout << "�q " << A << " �h�� " << C << endl ; 
	}
	else{
		Hanoi( plates-1 , A , C, B );
		Hanoi( 1 , A , B , C );
		Hanoi( plates-1 , B , A , C );
	}
}

int main(){
	int layer;
	while( cin >> layer ){
		Hanoi( layer , 'A' , 'B' , 'C' );
	}
	return 0;
}

