#include <iostream>
using namespace std;

int main() {
    cout << "Please input a string: ";
    string user_input.;
    getline(cin, user_input);
    string padding (user_input.length(), ' ');
    
    for (int center {0}; center < user_input.length(); ++center) {
        cout << padding;
        for (int left {0}; left < center; ++left) {
            cout << user_input.at(left);
        }
        cout << user_input.at(center);
        for (int right {center -1}; right >= 0 && right < center; --right) {
            cout << user_input.at(right);
        }
        cout << endl;
        padding.pop_back();
    }
}