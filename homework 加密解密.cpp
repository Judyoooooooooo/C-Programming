//
//  main.cpp
//  homework 加密解密
//
//  Created by Judy Ou on 2017/4/7.
//  Copyright © 2017年 Judy Ou. All rights reserved.
//

#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

bool distinct_prime(int p,int q)
{
    
    if(p<=1 || q<=1)return false;
    else if(p%q==0 || q%p==0)return false;
    
    for(int i=2;i*i<=p && i*i<=q;i++)
    {
        if(p%i==0 && q%i==0)return false;
    }
    return true;
}


int decrypt(int number, int n, int d)
{
    int ans = 1;
    for(int i=0;i<d;i++)
    {
        ans = (ans * number)%n;
    }
    return ans;
}


int encrypt(int number, int n, int e)
{
    int ans = 1;
    for(int i=0;i<e;i++)
    {
        ans = (ans * number)%n;
    }
    return ans;
    
}


int main()
{
    int p,q;
    cout<<"Please input two integers: "<<endl;
    while(cin>>p>>q)
    {
        if(distinct_prime(p,q))break;
        else cout<<"Please re-enter two integers "<<endl;
    }
    //compute n,e,d
    int n = p * q, r = (p-1)*(q-1);
    int e,d;
    for(e=2;e<r;e++)
    {
        if(distinct_prime(e,r))
        {
            for(d=2;d<r;d++)
            {
                if((e*d)%r==1)
                    break;
            }
            if(d<r)break;
        }
    }
    
    printf("n = %d, e = %d, d = %d\n",n,e,d);
    //input "d number" to decrypt
    //input "e number" to encrypt
    //input "c" to exit
    char x;
    int b;
    while(cin>>x)
    {
        if(x=='c')break;
        else if(x=='d')
        {
            cin>>b;
            if(b>n)cout<<"ERROR!\n";
            else cout<<decrypt(b,n,d)<<endl;
        }
        else if(x=='e')
        {
            cin>>b;
            if(b>n)cout<<"ERROR!\n";
            else cout<<encrypt(b,n,e)<<endl;
        }
        else cout<<"GG\n";
    }
    
}
