//
//  main.cpp
//  0513205_1b.cpp
//
//  Created by Judy Ou on 2017/4/3.
//  Copyright © 2017年 Judy Ou. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int N;
    double div1;
    double div2;
    int val1;
    int val2;
    
    
    cout<<"N"<<"\t"<<"N/20"<<"\t"<<"N/5"<<"\t"<<"N*5"<<"\t"<<"N*15"<<endl;
    for(N=1;N<=10;N++)
    {
        div1=(static_cast<double>(N)/20);
        div2=(static_cast<double>(N)/5);
        val1=N*5;
        val2=N*15;
        
        cout<<N<<"\t"<<setprecision(2)<<fixed<<div1<<"\t"<<setprecision(2)<<fixed<<div2<<"\t"<<val1<<"\t"<<val2<<endl;    }
    return 0;
}
