#include<iostream>
#include<vector>
using namespace std;

class BankAccount{
    private:
        string accountNumber;
        double balance;
    
    public:
        BankAccount(string accNum, double initialBalance){
            accountNumber = accNum;
            balance = initialBalance;
        }

        // getter 
        double getBalance() const{
            return balance;
        }

        // Method to deposit money
        void deposit(double amount){
            if(amount > 0){
                balance += amount;
                cout << "Deposited " << amount << endl;
            }else {
                cout << "Invalid deposit amount";
            }
        }

        // Method to dithdral money
        void withdrew(double amount){
            if(amount > 0 && amount <= balance){
                balance -= amount;
            }else {
                cout << "Invalid withdrawn amount" << endl;
            }
        }
};

int main(){
    BankAccount myAccount("1739249234", 500);
    cout << myAccount.getBalance() << endl;

    // deposit money
    myAccount.deposit(1000);
    cout << "Total balance after deposit money: " <<myAccount.getBalance() << endl;

    // Withdraw money
    myAccount.withdrew(299);
    cout << "Total balance after withdraw money: " <<myAccount.getBalance() << endl;
    
    return 0;
}