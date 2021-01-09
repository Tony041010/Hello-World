#include<bits\stdc++.h>
using namespace std;
void Hanoi(int,int,int);
int plates; //設定一個全域變數 plates 代表這個河內塔有幾個盤子 

/*使用的觀念:如果我要移動A盤子，從第一根柱子(0,from)到第三根柱子(2,to)，則我要把A盤子上面的所有盤子
移到一個中繼站(3-(from+to),mid)，再把A移到to，最後把其他盤子從mid移到to*/

/*河內塔運算規則:每次一動一個盤子，如果移動到該柱子的最上層(即index ==plates)
代表該柱子上的盤子都被移走了，此時函式中止，那如果還沒結束，則依照規則處理，並把移動的過程印出來*/
void Hanoi(int index , int from , int to ){
	if( index == plates ) return;
	int mid = 3 - ( from + to );
	Hanoi( index + 1 , from , mid );
	cout << "從" << (char)( from + 'A' ) << "搬到" << (char)( to + 'A' ) << endl;
	Hanoi( index + 1 , mid , to ); 
}

int main(){
	while( cin >> layer ){
		Hanoi( 0 , 0 , 2 );
	}
}


