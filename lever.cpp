#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        short n;
        cin >> n;
        
        vector<short> a(n), b(n);

        for(short i = 0; i < n; i++) cin >> a[i];
        for(short i = 0; i < n; i++) cin >> b[i];

        short nbrOfIterations(0);
        bool stop(false);

        while(!stop) {
            for(short i = 0; i < n; i++) {
                if(a[i] > b[i]) {
                    a[i]--;
                    break;
                } 

                if(i == n - 1) stop = true;
                
            }

            for(short i = 0; i < n; i++) {
                if(a[i] < b[i]) {
                    a[i]++;
                    break;
                }
            }
            
            nbrOfIterations++;

        }

        cout << nbrOfIterations << "\n";
    }
    
    return 0;
}