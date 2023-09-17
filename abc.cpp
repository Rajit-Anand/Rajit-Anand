#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPossible(int n,int k)
{
    int m=0,f=0;
    for(int x=n; x>=0; x>=10?(x*=0.9):x=x){
        m+=k;
        x-=k;
        f+=0.1*x;
    }
    if(f<=n/2)
    return 1;
    else
    return 0;
    
}

int main()
{
   int n;
   cin>>n;
   long arr[n+1];
   for(long i=0;i<=n;i++)
   {
       arr[i]=i;
   }
   
   long store;
   long e,s;
   e=n;
   s=0;
   long k;
   while(e>=s)
   {
       k=s+(e-s)/2;
       if(isPossible(n,k))
       {
           e=k-1;
           store=k;
           
       }
       else
       {
           s=k+1;
       }
       
   }
   
   cout<<store;
}


