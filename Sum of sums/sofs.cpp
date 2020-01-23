#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin>>t;
    for (int x = 1; x <= t; x++) {
        ll int n, q;
        cin >> n>>q;
        ll int ar[n];
        for (int i = 0; i < n; i++) {
            cin >> ar[i];
        }
        ll int tot;
        tot = (n * (n + 1)) / 2;
        ll int narr[tot];
        for (int i = 0; i < tot; i++) {
            narr[i] = 0;
        }
        int z = 0;
        for (int k = 0; k < n; k++) {
            for (int i = k; i < n; i++) {
                for (int j = k; j <= i; j++) {
                    narr[z] += ar[j];
                }
                z++;
            }
        }
        for (int i = 0; i < tot; i++) {
            ll int temp;
            for (int j = 0; j < tot - i - 1; j++) {
                if (narr[j] > narr[j + 1]) {
                    temp = narr[j];
                    narr[j] = narr[j + 1];
                    narr[j + 1] = temp;
                }
            }
        }
        int l[q], r[q];
        for (int i = 0; i < q; i++) {
            cin >> l[i] >> r[i];
        }
        cout << "\nCase #" << x << ": " << endl;
        for (int j = 0; j < q; j++) {
            ll int sum = 0;
            for (int i = l[j] - 1; i <= r[j] - 1; i++) {
                sum += narr[i];
            }
            cout << sum << endl;
        }
    }
    return 0;
}
