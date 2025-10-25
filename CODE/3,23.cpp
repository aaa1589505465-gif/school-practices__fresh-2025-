
#include <iostream>


int main (){
	int a[4]={0};
	
	int m = -10000;
	
	for (int i = 0 ; i<4; i++ )
	{
		scanf("%d",&a[i]); 
		
	}
   	for (int i = 0 ; i< 4; i++ )
	{
    m = m> a[i]? m :a[i];
		
	}
	printf("%d",m);
	
	return 0;
} 
