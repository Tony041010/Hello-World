#include<bits\stdc++.h>
#include<windows.h>
using namespace std;
string pillar[3];//�H�@�Ӱ}�C�s�U�T�ڬW�l�����A�A�H�r����

/*�ϥΪ��[�� : �T�ڬW�l���O��ABC�A����A�W�l���̩��h�H�~���L�l�qA����B�A
�A��̫�@������C�A�̫��W�誺�L�l�̱qB����C�C
�p�G�ӬW�l�u���@���L�l�A�h�����qA����C�Y�i*/
 
void Hanoi( int pieces , char A , char B , char C ){
	if( pieces == 1 ){
		
		cout << "�q " << A << " �h�� " << C << endl ;
/*char x : ���ӧY�N�Q���ʪ��L�l�A���A�W�l�̤W��A�Q��substr��ӽL�l�N���r���ŤU 
�A�⥦����C�W�l�W*/ 
		char x = pillar[A-'A'][d[A-'A'].length()-1];
		pillar[A-'A'] = pillar[A-'A'].substr(0,pillar[A-'A'].length() - 1 );
		pillar[C-'A'] = pillar[C-'A'] + x ;
		
//��ثe�T�ڬW�l�����A�L�X 
		for( int i = 0 ; i <= 2 ; i++ ){
			cout << pillar[i] << endl ;
		} 
//�j�@��A��ܤU�@�B�A�W�[�����P 
		Sleep(1000);
	}
	else{
		Hanoi( pieces - 1 , A , C , B );
		Hanoi( 1 , A , B , C );
		Hanoi( pieces - 1 , B , A , C );
	}
}

int main(){
	
	int plates;
	while( cin >> plates ){
		int i;

//�C���ϥΫe����l�ƤT�ڬW�l�����A 
		for( i = 0 ; i < 3 ; i++ ){
			pillar[i]="";
		}
		char x[10];
		
/*�]���N��L�l���Ʀr�ѤW��U�|�V�ӶV�j�A 
�ҥH�b��l�ƬW�l�ɡA�n����j�Ʀr�i�h*/
		for( i = plates ; i >= 1 ; i-- ){
			pillar[0] = itoa(i,x,10) + d[0] ;
		}
		
//���L�X�T�ڬW�l��l�ƫ᪺��l���A 
		for( int i = 0 ; i <= 2 ; i++ ){
			cout << pillar[i] << endl ;
		}
		Hanoi( plates , 'A' , 'B' , 'C' ) ; 
	}
	return 0;
}
