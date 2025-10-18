#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int w; // width of the building.
    int h; // height of the building.
    cin >> w >> h; cin.ignore();
    int n; // maximum number of turns before game over.
    cin >> n; cin.ignore();
    int x0;
    int y0;
    cin >> x0 >> y0; cin.ignore();

    int x(x0), y(y0);
    int highX(w - 1), lowX(0), highY(h - 1), lowY(0);

    // game loop
    while (1) {
        string bomb_dir; // the direction of the bombs from batman's current location (U, UR, R, DR, D, DL, L or UL)
        cin >> bomb_dir; cin.ignore();

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;
	    if (bomb_dir.find('D') != string::npos) lowY = y + 1;
            
        if (bomb_dir.find('U') != string::npos) highY = y - 1;

	    if (bomb_dir.find('R') != string::npos) lowX = x + 1;

	    if (bomb_dir.find('L') != string::npos) highX = x - 1;

        x = lowX + (highX - lowX) / 2;
        y = lowY + (highY - lowY) / 2;
        
        // the location of the next window Batman should jump to.
        cout << x << " " << y << endl;
    }
}