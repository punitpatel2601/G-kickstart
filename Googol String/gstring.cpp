#include<bits/stdc++.h>
using namespace std;
int foo(long long len, long long pos)
{
    if(pos==1||len==1)
        return 0;
    long long int mid = len/2;
    if(pos<=mid)
        return foo(mid,pos);
    if(pos==mid+1)
        return 0;
    return !foo(mid,len-pos+1);
}
int main()
{
    int t,tcase;
    cin>>tcase;
    for(t=1;t<=tcase;t++)
    {
        long long int k,len;
        cin>>k;
        while(len<=k)
            len=2*len+1;
        cout<<"Case #"<<t<<": ";
        cout<<foo(len,k)<<endl;
    }
    return 0;
}
