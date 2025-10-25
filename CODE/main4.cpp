#include <iostream>
using namespace std;

bool isprime (int count ){
	for (int i =2;i< count ; i++){
		if (count % i== 0){
		return  false;} 
	}
	if(count <=1){
		return false; 
	}
    return true ;}
	
int main (){
	int a = 0;
	int b=0 ;
	int sum = 0;
	scanf ("%d %d",&a,&b);
	int num =0;
	int count = 0;
	while (1){
	num++ ;
	if (isprime(num)){
        count++ ;	
		if (a <= count && count<= b){
			sum+=num;
			
		} 
	}
	if (count >b){
		break;
	}
	f
};
  printf("%d",&sum);
return 0;	
}	 
