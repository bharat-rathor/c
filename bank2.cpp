#include<iostream>
#include<ctime>
#include<string>
using namespace std;

class bank {
public:
    float balance = 2000;
    int pin = 12345;
    string name = "bharat", city = "ahmedabad", state = "gujarat";
    int choice;
    char ch;
    float deposite_amt;
    float withdraw_amt;

    bank() {
        cout << "================WELCOME TO ATM=========================\n";
        time_t now = time(0);
        char *dt = ctime(&now);
        cout << endl;
        cout << "Current Time and Date : " << dt;
        cout << "========================================================\n";
    }

    void start_menu() {
        cout << "Press 1 and Then Press Enter to access Your Account Via Pin number\n";
        cout << "Press 2 and Press Enter to view ATM info\n";
        cout << "Press 0 and Press Enter to Exit\n";
        cout << "Enter Choice : ";
        cin >> choice;

        if (choice == 1) {
            // handled in main after object creation
            return;
        } else if (choice == 2) {
            cout << "================ATM ACCOUNT STATUS===================\n";
            cout << "You must have the correct pin number to access this account.\n";
            cout << "See your bank representative for assistance.\n";
            cout << "Thank you for your choice today!!\n";
            cout << "=====================================================\n";
        } else {
            cout << "================== THANK YOU =================\n";
            cout << "You have exited the ATM. Goodbye!\n";
            cout << "=====================================================\n";
        }
    }

    void deposite() {
        cout << "\nName of the Account Holder : " << name << endl;
        cout << "Address : " << state << endl;
        cout << "Branch location : " << city << endl;
        cout << "Account number : 5678\n";

        cout << "Present available balance : Rs. " << balance << endl;
        cout << "Enter the amount to deposit Rs. ";
        cin >> deposite_amt;

        balance += deposite_amt;
        cout << "Your new available balance is Rs. " << balance << endl;
        cout << "=============== THANK YOU =================\n";
    }

    void withdraw() {
        cout << "\nName of the Account Holder : " << name << endl;
        cout << "Address : " << state << endl;
        cout << "Branch location : " << city << endl;
        cout << "Account number : 5678\n";

        cout << "Enter Amount To Withdraw : ";
        cin >> withdraw_amt;
        if (balance < withdraw_amt) {
            cout << "Insufficient available balance in your account.\n";
            cout << "=========== Sorry!! ===========\n";
        } else {
            balance -= withdraw_amt;
            cout << "Withdraw amount : " << withdraw_amt << endl;
            cout << "Current balance : " << balance << endl;
        }
    }

    void balance_inquiry() {
        cout << "\nYour available balance : Rs. " << balance << endl;
    }
};

int main() {
    bank b;      // constructor will show welcome + time
    b.start_menu();

    if (b.choice == 1) {
        int user_pin;
        cout << "\nEnter your PIN: ";
        cin >> user_pin;

        if (user_pin == b.pin) {
            cout << "\nPIN Matched Successfully!\n";
            char ch;
            int choice;

            do {
                cout << "\n================== ATM MENU ==================\n";
                cout << "Enter [1] To Deposit Cash\n";
                cout << "Enter [2] To Withdraw Cash\n";
                cout << "Enter [3] To Balance Inquiry\n";
                cout << "Enter [0] To Exit ATM\n";
                cout << "==============================================\n";
                cout << "Enter choice : ";
                cin >> choice;

                switch (choice) {
                    case 1:
                        b.deposite();
                        break;
                    case 2:
                        b.withdraw();
                        break;
                    case 3:
                        b.balance_inquiry();
                        break;
                    case 0:
                        cout << "\nThank you for using our ATM. Goodbye!\n";
                        break;
                    default:
                        cout << "Invalid choice! Try again.\n";
                }

                if (choice != 0) {
                    cout << "\nPress Y to go back to main menu or any other key to exit: ";
                    cin >> ch;
                } else {
                    ch = 'n';
                }
            } while (ch == 'y' || ch == 'Y');
        } else {
            cout << "\nIncorrect PIN! Access Denied.\n";
        }
    }

    return 0;
}

