#include "Numclass.h"
#include <stdio.h>
#include <math.h>

int pw(int n, int m) // pow function
{
    int num = n;
    for (int i = 1; i < m; i++)
    {
        num = num *n;
    }
    return num;
}
int isPl(int n, int end){
    int r;
    if (n!= 0){
        r = n % 10;
        end = (end * 10) + r;
        return isPl((n/ 10),end); 
    }
    return end;
}
int isPalindrome(int n){
    int flag=0;
    int pl = isPl(n,0);
    if (n == pl){
        flag =1;
       // return flag;
     } 
    return flag;
}







int isArmstrong(int n){
    if(n==0)
    {
        return 0;
    }
    int num=sumOfDigit(n);
    int sum=n, flag=0;
    return isArmstrong1(num,n,sum,flag);
}

int isArmstrong1(int num,int n,int sum,int s){
int flag=0,n1=n;
 if(n==0&&sum!=s){
    return flag;
}
if(n==0&&sum==s){
    flag=1;
    return flag;
}
else{
int temp=n1%10;
s=s+pw(temp,num);
return isArmstrong1(num,n1/10,sum,s);

}
}

int sumOfDigit(int n){
    int c=0;
    for(int i=n;i>0;i=i/10){
        c++;
    }
    return c;
}

