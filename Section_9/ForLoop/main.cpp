// Section 9
// For Loop
#include <iostream>
#include <vector>

using namespace std;

int main() {

//    for (int i{1} ; i <=10 ; ++i)
//        cout << i << endl;
    
    cout << "==========================\n";
        
//    for (int i{2} ; i <=10 ; i+=2)
//        cout << i << endl;
        
    cout << "==========================\n";
//    for (int i {10}; i > 0; --i)
//        cout << i << endl;
//    cout << "Blastoff!" << endl;
    
    cout << "==========================\n";
    
//    for (int i{10}; i<=100; i+=10) {
//        if (i % 15 == 0) 
//            cout << i << endl;
//    }

    cout << "==========================\n";
    
//    for (int i{1}, j{5} ; i<=5 ; ++i, ++j)
//        cout << i << " + " << j << " = " << (i+j) << endl;

    cout << "==========================\n";
    
//    for ( int i{1}; i<=100; ++i) {
//        cout << i;
//        if (i % 5 == 0)
//            cout << endl;
//        else 
//            cout << " ";
//    }
    
    cout << "==========================\n";
    // Using the Conditional Operator
//  for ( int i{1}; i<=100; ++i) {
//        cout << i << ( (i % 10 ==0) ? "\n" : " ");
//    }
       
    cout << "==========================\n";
    
    vector<int> nums { 10,20,30,40,50};
    for (unsigned i{0}; i< nums.size(); ++i)
        cout << nums[i] << endl;

    cout << "==========================\n";    

    cout << endl;
    return 0;
}


