// Section 9
// Switch with enumeration

#include <iostream>

using namespace std;

int main() {
    
    enum Direction { // Basically a list of constants
        left, right, up, down
    };
    
    Direction heading {up};
    
    switch (heading) {
        case left:
            cout << "Going left" << endl;
            break;
        case right:
            cout << "Going right" << endl; // I used going left in the video by mistake
            break;
        default:
            cout << "OK" << endl;
    }
    
    cout <<  endl;
    return 0;
}

