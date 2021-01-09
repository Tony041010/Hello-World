#include<bits\stdc++.h>
#include<windows.h>
using namespace std;
string pillar[3];//以一個陣列存下三根柱子的狀態，以字串表示

/*使用的觀念 : 三根柱子分別為ABC，先把A柱子中最底層以外的盤子從A移到B，
再把最後一片移到C，最後把上方的盤子們從B移到C。
如果該柱子只有一片盤子，則直接從A移到C即可*/
 
void Hanoi( int pieces , char A , char B , char C ){
	if( pieces == 1 ){
		
		cout << "從 " << A << " 搬到 " << C << endl ;
/*char x : 那個即將被移動的盤子，位於A柱子最上方，利用substr把該盤子代表的字元剪下 
再把它移到C柱子上*/ 
		char x = pillar[A-'A'][d[A-'A'].length()-1];
		pillar[A-'A'] = pillar[A-'A'].substr(0,pillar[A-'A'].length() - 1 );
		pillar[C-'A'] = pillar[C-'A'] + x ;
		
//把目前三根柱子的狀態印出 
		for( int i = 0 ; i <= 2 ; i++ ){
			cout << pillar[i] << endl ;
		} 
//隔一秒再顯示下一步，增加神秘感 
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

//每次使用前先初始化三根柱子的狀態 
		for( i = 0 ; i < 3 ; i++ ){
			pillar[i]="";
		}
		char x[10];
		
/*因為代表盤子的數字由上到下會越來越大， 
所以在初始化柱子時，要先塞大數字進去*/
		for( i = plates ; i >= 1 ; i-- ){
			pillar[0] = itoa(i,x,10) + d[0] ;
		}
		
//先印出三根柱子初始化後的原始狀態 
		for( int i = 0 ; i <= 2 ; i++ ){
			cout << pillar[i] << endl ;
		}
		Hanoi( plates , 'A' , 'B' , 'C' ) ; 
	}
	return 0;
}
