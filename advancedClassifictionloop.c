#include "Numclass.h"
#include <math.h>
#include <stdio.h>


 int pw (int n, int m);// pow function
//palindrome
int isPalindrome(int n){
  int r,end=0,start;  
  int flag =0;     
start=n;    
while(start!=0){    
r=start%10;    
end=(end*10)+r;    
start=start/10;    
}    
if(end==n){
    flag =1;
}    
return flag;  
}   
//isARMSTRONG
int pw(int n, int m) // pow function
{
    int num = n;
    for (int i = 1; i < m; i++)
    {
        num = num *n;
    }
    return num;

 int isArmstrong(int n){
   int  n2, n1, countpow = 0;
   int flag=0;
   float sum = 0.0;
   n2 = n;
   for (n2 = n; n2!= 0; ++countpow) {//cheaking the num of digits
       n2= n2/ 10;
   }
   for (n2 = n; n2!=0; n2 /= 10) {
       n1 = n2 % 10;      
      sum = sum +pw(n1, countpow);
   }
   if ((int)sum == n){
    flag=1;
}
return flag;
}   
}
