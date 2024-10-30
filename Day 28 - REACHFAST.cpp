#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        
        int demo= abs(n - m);
        int steps = demo / k; 
        if (demo% k!= 0) {
            steps++;
        }
        
        cout<<steps<<endl;
    }
    return 0;
}
