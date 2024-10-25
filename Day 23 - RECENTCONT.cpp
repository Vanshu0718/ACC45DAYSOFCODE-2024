#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> arr(n); 
        int count = 0;
        int VAR = 0;
        for (int i=0; i<n; i++) {
            cin >>arr[i];
        }

        for (int i=0; i<arr.size(); i++) { 
            if (arr[i] == "START38") { 
                count=count + 1;
            }
            else if (arr[i]=="LTIME108") { 
                VAR=VAR + 1;
            }
        }
        
        cout << count << " " << VAR << endl;
    }
    return 0;
}

