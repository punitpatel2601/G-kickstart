#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    for(long int p=1;p<=t;p++)
    {
        long int f,l,cnt=0;
        cin>>f>>l;
        cout<<"Case #"<<p;
        while(f<=l)
        {
            long int num=f;
            long int sm=0,ctr=0,flag=0;
            while(num>0)
            {
                long int rem=num%10;
                sm=sm+rem;
                num=num/10;
                if(rem==9 && flag==0)
                {
                    ctr++;
                    flag=-1;
                }
            }
            if(sm%9==0 && flag==0)
                ctr++;
            if(ctr==0)
                cnt++;
            f++;
        }
        cout<<": "<<cnt<<endl;
    }
    return 0;
}
