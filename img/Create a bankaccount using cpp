
#include <iostream>
using namespace std;

class BankAccount{
private:
  long int accountNumber;
   long int balance;
  static int interestRate;

  public:
    BankAccount(int acc = 0, int bal = 0) {
      accountNumber = acc;
      balance = bal;
    }

    void deposit(int value) {
      cout << "balance before deposit: " << balance << endl;
      balance += value;
      cout << "balance after deposit " << balance << endl << endl;
    }

    void withdraw(int value) {
      cout << "balance before withdraw: " << balance << endl;
      balance -= value;
      cout << "balance after withdraw " << balance << endl;
    }

    void calculateInterest(int time) {
      double interest;
      interest = (balance * interestRate * time)/100;
      cout << "The interest is for " << time << " years " << "with rate of " << interestRate << " is " << interest << endl;
    }

    static void setInterest(int value) {
      interestRate = value;
    }
	friend void balance(BankAccount B);
};

int BankAccount::interestRate = 0;
  void balance(BankAccount B)
  {
  	  int value;
  	  long int balance;
      cout << "balance before withdraw: " << B.balance << endl;
      balance -= value;
      cout << "balance after withdraw " << B.balance << endl;
    
  }
int main()
{
 	BankAccount BA1(123, 1000);
 	BA1.deposit(1000);
  	balance(BA1);

  	BA1.setInterest(10);

	BA1.calculateInterest(2);
	
	return 0;
}
