#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        string de[n],ar[n];
        for(int j=0;j<n;j++)
        {
            cin>>de[j];
            cin>>ar[j];
        }
        string st;
        int ctr[n];
        for(int p=0;p<n;p++)
        {
            ctr[p]=0;
            for(int q=0;q<n;q++)
            {
                if(ar[q]==de[p])
                    continue;
                else
                    ctr[p]++;
            }
        }
        int max=ctr[0];
        cout<<"\nCase #"<<i<<": ";
        for(int j=0;j<n;j++)
        {
            if(ctr[j]>=max)
                {
                    max=ctr[j];
                    st=de[j];
                }
        }
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                if(de[k]==st)
                {
                    cout<<de[k]<<"-"<<ar[k]<<" ";
                    st=ar[k];
                }
            }
        }
    }
    return 0;
}
