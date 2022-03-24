// Section 14
// Challenge - Solution 2
// Non-Member methods
#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {
      
    cout << boolalpha << endl;
    Mystring a {"Bunny"};
    Mystring b {"Bunny"};
    cout << (a==b) << endl;         // true
    cout << (a!=b) << endl;          // false
    
    b = "george";
    cout << (a==b) << endl;         // false
    cout << (a!=b) << endl;          // true
     cout << (a<b) << endl;         // true
    cout << (a>b) << endl;          // false
    
    Mystring s1 {"Bunny"};
    s1 = -s1;       
    cout << s1 << endl;             // Bunny              

    s1 = s1 + "*****";
    cout << s1 << endl;             // Bunny*****       
    
    s1 += "-----";                      // Bunny*****-----
    cout << s1 << endl;
    
    Mystring s2{"12345"};
    s1 = s2 * 3;
    cout << s1 << endl;           // 123451234512345
    
    Mystring s3{"abcdef"};  
    s3 *= 5;
    cout << s3 << endl;             // abcdefabcdefabcdefabcdefabcdef
    
    Mystring repeat_string;
    int repeat_times;
    cout << "Enter a string to repeat: " << endl;
    cin >> repeat_string;
    cout << "How many times would you like it repeated? " << endl;
    cin >> repeat_times;
    repeat_string *= repeat_times;
    cout << "The resulting string is: " << repeat_string << endl;
    
    cout << (repeat_string * 12) << endl;
    
    repeat_string = "RepeatMe";
    cout << (repeat_string + repeat_string + repeat_string) << endl;
    
    Mystring s = "Bunny";
    ++s;
    cout << s << endl;                  // Bunny
    
    s = -s; 
    cout << s << endl;                  // Bunny
    Mystring result;
    result = ++s;                           
    cout << s << endl;                  // Bunny
    cout << result << endl;           // Bunny
    
    s = "Bunny";
    s++;
    cout << s << endl;                  // Bunny
    
    s = -s;
    cout << s << endl;                  // Bunny
    result = s++;
    cout << s << endl;                  // Bunny
    cout << result << endl;           // Bunny
    return 0;
}

