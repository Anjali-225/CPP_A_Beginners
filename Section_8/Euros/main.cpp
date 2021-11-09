// Section 8
// Convert EUR to USD
// EXTRA Rand to USD

#include <iostream>

using namespace std;

int main() {
  
//    const double usd_per_eur {1.19};
//    
//    cout << "Welcome to the EUR to USD converter" << endl;
//    cout << "Enter the value in EUR : ";
//    
//    double euros {0.0};
//    double dollars {0.0};
//    
//    cin >> euros;
//    dollars = euros * usd_per_eur;
//    
//    cout << euros << " euros is equivalent to " << dollars << " dollars" << endl;
//
//    cout  << endl;
//    return 0;

    const double rand_per_usd {15.45};
    
    cout << "Welcome to the Rand to USD converter" << endl;
    cout << "Enter the value in Rand : ";
    
    double rand {0.0};
    double dollars {0.0};
    
    cin >> rand;
    dollars = rand / rand_per_usd;
    
    cout << rand << " rands is equivalent to " << dollars << " dollars" << endl;

    cout  << endl;
    return 0;
}

