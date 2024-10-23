// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, side;
    string s;
    cin>>t;
    bool found;
    while(t--){
        cin>>side>>s;
        if(int(sqrt(side)) != sqrt(side)) {
            cout<< "No"<<endl;
            continue;
        }
        found = false;
        for(int i=1;i<sqrt(side)-1;i++){
            for(int j=1;j<sqrt(side)-1;j++) {
                if(s[i*sqrt(side)+j]!='0') {
                    cout<< "No"<<endl;
                    found = true;
                    break;
                }
            }
            if(found) break;
        }
        if(!found) cout<< "Yes"<<endl;
    }
    return 0;
}