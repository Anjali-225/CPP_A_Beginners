// Section 13
// Accessing Class Members
#include <iostream>
#include <string>

using namespace std;

class Player {
public:
    // attributes
    string name;
    int health;
    int xp;
    
    // methods
    void talk(string text_to_say) { 
        cout << name << " says " << text_to_say << endl;  
    }
    bool is_dead();
};

class Account {
public:
    // attributes
    string name;
    double balance;
    
    // methods
    bool deposit(double bal) {
        balance += bal; cout << "In deposit" << endl; 
    }
    bool withdraw(double bal) {
        balance -= bal; cout << "In withdraw" << endl; 
    }
    
};

int main() {
    Account bunny_account;
    bunny_account.name = "Bunny's account";
    bunny_account.balance = 5000.0;
    
    bunny_account.deposit(1000.0);
    bunny_account.withdraw(500.0);
        
    Player bunny;
    bunny.name = "Bunny";
    bunny.health = 100;
    bunny.xp = 12;
    bunny.talk("Hi there");
    
    Player *enemy = new Player;
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy->xp = 15;
    
    enemy->talk("I will destroy you!");  

    return 0;
}

