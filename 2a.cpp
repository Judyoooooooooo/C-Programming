//
//  main.cpp
//  0513205_2a.cpp
//
//  Created by Judy Ou on 2017/4/3.

#include <iostream>
using namespace std;

int main ()
{
    int i, j,num;
    for  (i = 1; i<=7; i++)           /* 外層迴圈決定哪一列要印星號 */
    {
        for(num=1;num<=i;num++)
        {
            cout<<num;
        }
        for(j=6;j>=i;j--)  //for(j=i;i<=6;j++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    
    return 0;
}
