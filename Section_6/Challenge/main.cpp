
// Section 6
// Challenge

/* 
    Frank's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they would like cleaned
    and provide an estimate such as:
     
Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost : $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days
*/

#include <iostream>

using namespace std;



int main() {
    int nr_small_rooms {0};
    int nr_big_rooms {0};
    
    const double small_rooms {25.0};
    const double big_rooms {35.0};
    const double tax_rate {0.06};
    
    cout << "Estimate for carpet cleaning services" << endl;
    cout << "Number of small rooms to be cleaned: ";
    cin >> nr_small_rooms;
    
    cout << "Number of large rooms to be cleaned: ";
    cin >> nr_big_rooms;
    
    cout << "Price per small room: " << small_rooms << endl;
    cout << "Price per large room: " << big_rooms << endl;
    
    double small_total {0.0};
    small_total = small_rooms * nr_small_rooms;
    double big_total {0.0};
    big_total = big_rooms * nr_big_rooms;
    double total {0.0};
    total = small_total + big_total;
    double tax_amount {0.0};
    tax_amount = total * tax_rate;
    double grand_total {0.0};
    grand_total = total + tax_amount;
    
    cout << "Cost: $" << total << endl;
    cout << "Tax: $" << tax_amount << endl;
    cout << "===============================\n";
    cout << "Total estimate: $" << grand_total << endl;
    cout << "This estimate is valid for 30 days" << endl;
    
    cout << endl;
    return 0;
}

