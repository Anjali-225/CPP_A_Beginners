#include <iostream>
#include <string>

int main() {
    std::cout << "Please input a string: ";
    std::string user_input;
    std::getline(std::cin, user_input); // Using getline() to preserve the option to include whitespace
    std::string padding (user_input.length(), ' '); // How many spaces to center?
    
    for (int center {0}; center < user_input.length(); ++center) {
        std::cout << padding; // Pad with spaces
        
        // Print letters left of center, if any
        for (int left {0}; left < center; ++left) {
            std::cout << user_input.at(left);
        }
        
        // Print center letter
        std::cout << user_input.at(center);
        
        // Print letters right of center, if any
        for (int right {center - 1}; right >= 0 && right < center; --right) {
            std::cout << user_input.at(right);
        }
        
        std::cout << std::endl; // Newline
        padding.pop_back(); // Remove a space for next run
    }
}
