#include <stdio.h>
#include <math.h>                  
int main()
{
int sign=1,count=0;
double pi=0.0,n=1.0,term=1.0:              			
while(fabs(term)>=1e-8)         
{
pi=pi+term;                   
n=n+2;                          
sign=-sign;                     
count++;                        
}
pi=pi*4;                         
printf("count=%d\n",count);      
return 0;
}

