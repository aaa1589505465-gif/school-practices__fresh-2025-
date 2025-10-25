#include  <iostream>






 int isget(int num)
{   int sum = 0;
	while (num > 0)
	{   
		sum+=num%10;
		 num=num/10;
	}
	return sum ;
 } 









int main ()
{
	
	
	
  int nums[100]={};
  int get , sum  ;
  int i,j;
  int n = 0;
  sum = 0;
  scanf ("%d",&n);
  for (i=0;i<n;i++)
  {  
  	scanf("%d",&nums[i]);
  }
  for (i=0;i<n;i++)
  {
   
  	if (isget(nums[i]) > sum  )
  	{    get = nums[i] ;
  		sum=isget(nums[i]) ;
	  }
    
  	 
  	if (isget(nums[i]) == sum  )
  	{   
  	
  	   get = nums[i] ;
	  }
	
  }
printf("%d",get);
return 0 ;	
}



