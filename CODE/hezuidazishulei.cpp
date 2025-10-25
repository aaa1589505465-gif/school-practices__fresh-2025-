#include <iostream>
#include<vector>
using namespace std;


int main (){
	int n,w,m,a,sum,max;
	int const A[]= {};
	scanf("%d",&n);
	max = 0;
	sum=0;
	
    int i;
	 for (i=0;i<n;i++){
	 	scanf("%d",&A[w]);
	 }
	
	for(w=1;w<=n;w++)
	{
		 
		for (m=w ; m <= n ;w++){
		
			 sum+=A[m];
			 
			}
		max=sum > max? sum : max ;
		}
	
printf("%d",sum);
return 0;
}
