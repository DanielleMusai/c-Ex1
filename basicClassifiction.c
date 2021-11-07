#include "Numclass.h"
 #include <stdio.h>
 

// PRIME
int isPrime(int n) {
  // 0 is false
  // 1 is true 
  int i;
  int flag=0;  
 if(n==1){
  return 1;
 }
for(i=2;i<=n/2;i++)    
{    
if(n%i==0)    {    
flag=0;    
break;    
}    
}    
if(flag==1) 
return 0;  
 }    

//IS STRONG
 int assem(int n) {  
    int count=1;  
    for(int i=1;i<=n;i++){  
        count=count*i;  
    }  
    return count;  
      
}  
    int isStrong(int n){ 
      int flag=0; 
     int k=n;  
     int r, sum=0;  
     while(k!=0){  
        r=k%10;  
        int f=assem(r);  
        k=k/10;  
       sum=sum+f;  
    }  
    if(sum==n) {
      flag=1;
    }
    return flag;  
}  
