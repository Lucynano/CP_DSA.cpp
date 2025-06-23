#include <iostream>

using namespace std;

int main() {
        int t;
        cin >> t;
        int a, b, c, x, y;
        while(t--) {
                cin >> a >> b >> c;
                x = c + b - (2 * a);
                y = c + a - (2 * b);
                if(x>=0 && y>=0 && (x+y)/3>=1 && (x+y)/3<=c && x%3==0 && y%3==0)
                        cout << "YES\n";
                else
                        cout << "NO\n";
        }
        return 0;
}