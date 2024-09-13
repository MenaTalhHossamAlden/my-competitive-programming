#include <iostream> 
using namespace std;
int main() {
    int testCases;
    cin>>testCases;
    for(int i=0;i<testCases;i++) {
        int A, B;
        cin>>A>>B;
        cout << ((A%2 || (B%2 && A==0)) ? "NO" : "YES") << endl;
    }
}