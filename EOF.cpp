//
//  main.cpp
//  EOF
//
//  Created by Judy Ou on 2017/4/9.
//  Copyright © 2017年 Judy Ou. All rights reserved.
//

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int grade=0;
    int a=0,b=0,c=0,d=0,e=0,eee=0,i;
    cout<<"請入0到100的成績\n用EOF終止";
    cin>>grade;
    while(!cin.eof())
    {
        if(0<=grade&&grade<=100)
        {
            if(0<=grade&&grade<=20)
            {
                a++;
            }
            if(20<grade&&grade<=40)
            {
                b++;
            }
            if(40<grade&&grade<=60)
            {
                c++;
            }
            if(60<grade&&grade<=80)
            {
                d++;
            }
            if(80<grade&&grade<=100)
            {
                e++;
            }
            
        }
        else
        {
            eee++;
        }
        cin>>grade;
    }
    i=0;
    cout<<"0~20:";
    while(i<a)
    {
        cout<<"*";
        i++;
    }
    i=0;
    cout<<"\n20~40:";
    while(i<b)
    {
        cout<<"*";
        i++;
    }
    i=0;
    cout<<"\n40~60:";
    while(i<c)
    {
        cout<<"*";
        i++;
    }
    i=0;
    cout<<"\n60~80:";
    while(i<d)
    {
        cout<<"*";
        i++;
    }
    i=0;
    cout<<"\n80~100:";
    while(i<e)
    {
        cout<<"*";
        i++;
    }	
    for(i=0;i<eee;i++)
    {
        cout<<"*";
    }	
    
}
