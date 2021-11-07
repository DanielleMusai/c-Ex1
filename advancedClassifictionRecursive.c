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
    int temp =n;
    if(temp==0)
    {
        return 0;
    }
    int size=Count(n);
    int x=n;
    int w=0;
    return isArmstrong1(size,n,x,w);
}

int isArmstrong1(int size,int n,int x,int s){
int b=0;
int v=n;
int t;
if(n==0&&x==s){
    b=1;
    return b;
}else if(n==0&&x!=s){
    return b;
}else{
t=v%10;
s=s+pw(t,size);
return isArmstrong1(size,v/10,x,s);

}
}

int Count(int n){
    int count=0;
    int i;
    for(i=n;i>0;i=i/10){
        count++;
    }
    return count;
}

// int isArmstrong(int n){
//     if()
// }
//  int isArmstrong11(int n){
//     int flag = 0, countpow, n1, result;
//     int n2 = n;
//     int t;
//     if (n2!=0)
//     {
//         flag=1;
//         n2 = n2 /10;
//     }
    
//     if (n < 0)
//     {
//         return 0;
//     }
//     if (n == 0 && n1 == result)
//     {
//         flag = 1;
       
//     }
//     else
//     {
//         t = n2 % 10;
//         result = result + pw(t, countpow);
//         return isArmstrong(n2 / 10);
//     }
// }

