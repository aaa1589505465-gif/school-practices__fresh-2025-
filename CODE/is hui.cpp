#include <iostream>
using namespace std ;

 bool ishui(int num){
 	int j=0 ;
	int i = num ; 
	while (i > 0){
		j = j* 10 +i%10 ;
		
		i/=10 ;
	} 
    return  j==num ;
    
} 


 int main (){
    int k,h,m,c= 0;
    scanf("%d",&m);
	for (k = 1 ; k*m < 100000 && k*m >9999; k++){ 
    if (ishui (k*m))
	 {c++ ;}
	 }
printf ("%d %d",m,c);
return 0;		 

 }
