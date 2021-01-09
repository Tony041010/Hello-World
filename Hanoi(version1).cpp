#include<bits\stdc++.h>
using namespace std;
void Hanoi(int,int,int);
int plates; //�]�w�@�ӥ����ܼ� plates �N��o�Ӫe���𦳴X�ӽL�l 

/*�ϥΪ��[��:�p�G�ڭn����A�L�l�A�q�Ĥ@�ڬW�l(0,from)��ĤT�ڬW�l(2,to)�A�h�ڭn��A�L�l�W�����Ҧ��L�l
����@�Ӥ��~��(3-(from+to),mid)�A�A��A����to�A�̫���L�L�l�qmid����to*/

/*�e����B��W�h:�C���@�ʤ@�ӽL�l�A�p�G���ʨ�ӬW�l���̤W�h(�Yindex ==plates)
�N��ӬW�l�W���L�l���Q�����F�A���ɨ禡����A���p�G�٨S�����A�h�̷ӳW�h�B�z�A�çⲾ�ʪ��L�{�L�X��*/
void Hanoi(int index , int from , int to ){
	if( index == plates ) return;
	int mid = 3 - ( from + to );
	Hanoi( index + 1 , from , mid );
	cout << "�q" << (char)( from + 'A' ) << "�h��" << (char)( to + 'A' ) << endl;
	Hanoi( index + 1 , mid , to ); 
}

int main(){
	while( cin >> layer ){
		Hanoi( 0 , 0 , 2 );
	}
}


