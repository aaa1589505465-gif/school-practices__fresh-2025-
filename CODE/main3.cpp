#include <iostream>
using namespace std;

bool isguo(int num) {
    if (num % 7 == 0 ||num % 10 ==7 ||num/10 % 10 == 7 || num / 100 == 7) {
        return true;
    }
    return false;
}

int main (){
	int ci1 = 0 ;
	int ci2 = 0 ;
	int ci3 = 0;
	int count = 1;
	int turn = 1;
	int n =0;
    int num = 0;
	scanf("%d",&n);
    while (num < n){
       if  (isguo(count)){
	    
         if (turn== 1){
            ci1++ ;}
         if (turn== 2){
            ci2++; }   
    	if (turn== 3){
		
            ci3++ ;}
	}
	    else {
		 num ++;      }   
	turn= turn%3+1 ;
    count ++ ;

    
}   
   
    printf("%d %d %d",ci1,ci2,ci3); 

    return 0;
}
