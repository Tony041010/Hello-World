#include<bits\stdc++.h>
using namespace std;
void Hani(int ,char,char,char);
/*使用的觀念 : 三根柱子分別為ABC，先把A柱子中最底層以外的盤子從A移到B，
再把最後一片移到C，最後把上方的盤子們從B移到C。
如果該柱子只有一片盤子，則直接從A移到C即可*/
void Hanoi( int plates , char A , char B , char C ){
	if( plates == 1 ){
		cout << "從 " << A << " 搬到 " << C << endl ; 
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

