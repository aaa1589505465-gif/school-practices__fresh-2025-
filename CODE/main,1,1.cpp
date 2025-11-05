#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int n;
	scanf("%d",&n);
	
	int list[100]={0};
	int i ;
	
	
	for (i=0;i<n ;i++)
	{
		scanf("%d",&list[i]);
	}
	int count = 0;
	
	for(i=0;i<n-2 ;i++)
	{
		
		if((list[i+1]-list[i])*(list[i+1]-list[i+2])>0)
		
		count++;
		
	}
	
	printf("%d",count);
	return 0;
}
