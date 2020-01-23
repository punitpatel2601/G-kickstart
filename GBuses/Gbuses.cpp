#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int k=0;k<t;k++){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i]>>b[i];
        }
        int no;
        cin>>no;
        int c[no];
        for(int i=0;i<no;i++){
            cin>>c[i];
        }
        cout<<"Case #"<<k+1<<": ";
        for(int i=0;i<no;i++){
            int ctr=0;
            for(int j=0;j<n;j++){
                if(a[j]<=c[i]&&b[j]>=c[i])
                    ctr++;
            }
            cout<<"  "<<ctr;
        }
        cout<<"\n";
    }
}
