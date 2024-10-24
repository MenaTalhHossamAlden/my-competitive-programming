#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, l, r, increment, res;
    cin>>t;
    while(t--) {
        cin>>l>>r;
        increment = 0;
        res = 0;
        for(int i=l;i<=r;i+=increment) {
            res++;
            increment++;
        }
        cout<<res<<endl;
    }
    return 0;
}