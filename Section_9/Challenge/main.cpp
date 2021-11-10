// Section 9
// Challenge
/*    
    This challenge is about using a collection (list) of integers and allowing the user
    to select options from a menu to perform operations on the list.
    
    Your program should display a menu options to the user as follows:
    
    P - Print numbers
    A - Add a number
    M - Display mean of the numbers
    S - Display the smallest number
    L - Display the largest number
    Q - Quit

    Enter your choice:
    
The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options should be
displayed again.


If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
If the list is empty you should display "[] - the list is empty"
If the list is not empty then all the list element should be displayed inside square brackets separated by a space. 
For example, [ 1 2 3 4 5 ]
      
If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list 
which you will add to the list and then display it was added. For example, if the user enters 5
You should display, "5 added".
Duplicate list entries are OK

If the user enters 'M' or 'm'  you should calculate the mean or average of the elements in the list and display it.
If the list is empty you should display, "Unable to calculate the mean - no data"

If the user enters 'S' or 's' you should display the smallest element in the list.
For example, if the list contains [2 4 5 1],  you should display, "The smallest number is 1"
If the list is empty you should display, "Unable to determine the smallest number - list is empty"

If the user enters 'L' or 'l' you should display the largest element in the list
For example, if the list contains [2 4 5 1], you should display, "The largest number is 5"
If the list is empty you should display, "Unable to determine the largest number - list is empty"

If the user enters 'Q' or 'q' then you should display 'Goodbye" and the program should terminate.

Before you begin. Write out the steps you need to take and decide in what order they should be done.
Think about what loops you should use as well as what you will use for your selection logic.

This exercise can be challenging! It may likely take a few attempts before you complete it -- that's OK!

Finally, be sure to test your program as you go and at the end.

Hint: Use a vector!

Additional functionality if you wish to extend this program.

- search for a number in the list and if found display the number of times it occurs in the list
- clearing out the list (make it empty again) (Hint: the vector class has a .clear() method)
- don't allow duplicate entries
- come up with your own ideas!

Good luck!

*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    char selection{};
    vector<int> numbers{1,2,3};    
    do {
        cout << "\n---------------------" << endl;
        cout << "Make a choice : Select out of:" << endl;
        cout << "P - To Print the Numbers" << endl;
        cout << "A - To Add a Number" << endl;
        cout << "M - To display the Mean of the numbers" << endl;
        cout << "S - To display the Smallest number" << endl;
        cout << "L - To display the Largest number" << endl;
        cout << "Q - To Quit" << endl;
        
        cout << "\nEnter your selection: ";
        cin >> selection;
        
        if (selection == 'P' || selection == 'p') {
            if (numbers.size() == 0) {
               cout << "[] - the list is empty"; 
            } else {
                cout << "The list of numbers are: [ ";                
                for (auto num : numbers) {
                    cout << num << " ";
                }
                cout << "]" << endl;
            }
            
        } else if (selection == 'A' || selection == 'a') {
            int add_num {};
            cout << "\nEnter a number: ";
            cin >> add_num;
            numbers.push_back(add_num);
            cout << "\n" << add_num << " was added!";
            
        } else if (selection == 'm' || selection == 'M') {
             if (numbers.size() == 0) {
               cout << "\nUnable to calculate the mean - no data"; 
            } else {
                double average{0.0};
                double total{};
                for (auto num:numbers) {
                    total += num;
                }
                average = total / numbers.size();
//                 cout << fixed << setprecision(1);
                cout << "\nThe average of the numbers is: " << average;
            }
            
        } else if (selection == 's' || selection == 'S') {
            if (numbers.size() == 0) {
                cout << "\nUnable to determine the smallest number - list is empty"; 
            } else {
                int small_num = numbers[0];
                for (auto num:numbers){
                    if (small_num > num) {
                        small_num = num;
                    } else {
                        small_num = small_num;
                    }
                }
                cout << "\nThe smallest number is: " << small_num;
            }            
        } else if (selection == 'l' || selection == 'L') {
            if (numbers.size() == 0) {
                cout << "\nUnable to determine the largest number - list is empty"; 
            } else {
                int large_num = numbers[0];
                for (auto num:numbers){
                    if (large_num < num) {
                        large_num = num;
                    } else {
                        large_num = large_num;
                    }
                }
                cout << "\nThe largest number is: " << large_num;
            }            
        } 
        
    } while (selection != 'q' && selection != 'Q');
    








    return 0;
}

