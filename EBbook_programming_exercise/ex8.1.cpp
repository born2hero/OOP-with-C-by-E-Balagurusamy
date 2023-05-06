/*
Assume that a bank maintains two kinds of accounts for customers, one called as
savings and the other as current account. The savings account provides compound interest
and withdrawal facilities but no cheque book facility. The current account provides cheque
book facility but no interest. Current account holders should also maintain a minimum
balance and if the balance falls below this level a service charge is imposed.

Create a class account that stores customer name, account number and type of account.
From this derive the classes cur_acct and sav_acct to make them more specific to their
requirements. Include necessary member functions in order to achieve the following tasks:
    (a) Accept the deposit from a customer and update the balance.
    (b) Display the balance.
    (c) Compute and deposit interest.
    (d) Permit withdrawal and update the balance.
    (e) Check for the minimum balance, impose penalty, necessary and update the balance.
Do not use any constructors. Use member functions to initialize class members.
*/

/*
plan-
    1-class accounts
    2-accounts to saving - no cheque book but interest
    3-accounts to current -  no interest but cheque book
    4-current account should a minimum balance if low service charge should be there
    5-class account-
        - customer name
        - account number
        - type of account
    classes-
        -cur_acct
        -sav_acct
    6-member functions
        - accept the deposit from customer and update
        - display balance
        - compute and deposit interest
        - withdrawl and update
        - check min, impose penalty, necessary and update balance
*/

#include <iostream>
#define MINIMUM_BALANCE 500
#define SERVICE_CHARGE 100
#define RATE 0.15

class Accounts
{
private:
    std::string accountHolderName;
    unsigned int accountNumber;
    std::string typeOfAccount;
    // unsigned int balance;

public:
    // void acceptAccount()
    // {
    //     std::cout << "Enter the account number: ";
    //     std::cin >> accountNumber;
    //     std::cout << "Enter the account holder name: ";
    //     std::cin >> accountHolderName;
    //     std::cout << "Enter the type of account: ";
    //     std::cin >> typeOfAccount;
    //     // std::cout << "Enter the balance: ";
    //     // std::cin >> balance;
    // }
    // void displayAccount()
    // {
    //     std::cout << "Account number: " << accountNumber;
    //     std::cout << "Account holder name: " << accountHolderName;
    //     std::cout << "Type of account: " << typeOfAccount;
    //     std::cout << "Balance: " << typeOfAccount;
    // }
    void createAccount(std::string);

    // unsigned int getAccountNumber() const { return accountNumber; }
    void setAccountNumber(unsigned int accountNumber_) { accountNumber = accountNumber_; }

    // std::string getTypeOfAccount() const { return typeOfAccount; }
    void setTypeOfAccount(const std::string &typeOfAccount_) { typeOfAccount = typeOfAccount_; }

    // std::string getAccountHolderName() const { return accountHolderName; }
    void setAccountHolderName(const std::string &accountHolderName_) { accountHolderName = accountHolderName_; }

    // unsigned int getBalance() const { return balance; }
    // void setBalance(unsigned int balance_) { balance = balance_; }
};

void Accounts::createAccount(std::string type)
{
    std::cout << "Enter account number: ";
    std::cin >> accountNumber;
    std::cout << "Enter account holder name: ";
    std::cin >> accountHolderName;
    // std::cout << "Enter account type: ";
    // std::cin >> typeOfAccount;
    typeOfAccount = type;
}

class CurrentAccount : public Accounts
{
private:
    // std::string chequeBook;
    float balance;

public:
    // std::string getChequeBook() const { return chequeBook; }
    // void setChequeBook(const std::string &chequeBook_) { chequeBook = chequeBook_; }

    void deposit(float);
    void withdraw(float);
    void display();
};

void CurrentAccount::deposit(float balanceDeposit)
{
    balance = balanceDeposit;
}

void CurrentAccount::withdraw(float balanceWithdraw)
{
    if (balance < balanceWithdraw)
    {
        std::cout << "\nSorry your balance is less than withdrawl ammount.\n";
    }
    else
    {
        balance -= balanceWithdraw;
        if (balance < MINIMUM_BALANCE)
        {
            std::cout << "\nYour current balance is: " << balance << " which is less than " << MINIMUM_BALANCE << "\nYour account is charged by " << SERVICE_CHARGE << "\n";
            std::cout << "\nDo you want to withdraw? ";
            int test;
            std::cin >> test;
            if (test == 0)
            {
                balance += balanceWithdraw;
            }
        }
    }
}

void CurrentAccount::display()
{
    std::cout << "\nCurrent balance: " << balance;
}

class SavingsAccount : public Accounts
{
private:
    float balance;
    int date;
    int month;
    int year;

public:
    void withdraw(float);
    void deposit(float);
    void interest();
    void display();

    // int getDate() const { return date; }
    void setDate(int date_) { date = date_; }

    // int getMonth() const { return month; }
    void setMonth(int month_) { month = month_; }

    // int getYear() const { return year; }
    void setYear(int year_) { year = year_; }
};

void SavingsAccount::deposit(float depositBalance)
{
    int d, m, y;
    std::cout << "Enter today's date: ";
    std::cin >> d >> m >> y;

    setDate(d);
    setMonth(m);
    setYear(y);
}

void SavingsAccount::withdraw(float withdrawBalance)
{
    if (balance < withdrawBalance)
    {
        balance -= withdrawBalance;
        if (balance < MINIMUM_BALANCE)
        {
            std::cout << "Your current balance is: " << balance << " which is less than " << MINIMUM_BALANCE << "\nYour account is charged by " << SERVICE_CHARGE << "\n";
            std::cout << "Do you want to withdraw? ";
            int test;
            std::cin >> test;
            if (test == 0)
            {
                balance += withdrawBalance;
            }
        }
    }
}

void SavingsAccount::display()
{
    std::cout << "Current balance: " << balance;
}

void SavingsAccount::interest()
{
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int today_date, today_month, today_year;
    std::cout << "Enter today's date: ";
    std::cin >> today_date >> today_month >> today_year;
    int initialDay, finalDay;
    initialDay = date;
    finalDay = today_date;
    for (int i = 0; i < today_month; i++)
    {
        finalDay += days[i];
    }
    for (int i = 0; i < month; i++)
    {
        initialDay += days[i];
    }
    int tday;
    tday = finalDay - initialDay;
    float total_year;
    total_year = float(tday) / 365 + today_year - year;
    float interest;
    interest = total_year * RATE * balance;
    std::cout << " Interest is : " << interest << "\n";
    balance += interest;
}

int main()
{
    SavingsAccount saving1;
    saving1.createAccount("SAVINGS");
    float deposit;
    std::cout << "Enter Deposit amount: ";
    std::cin >> deposit;
    saving1.deposit(deposit);
    saving1.display();
    int t;
    std::cout << "\n press 1 to see your interest : \n"
              << " press 0 to skip : ";
    std::cin >> t;
    if (t == 1)
        saving1.interest();
    std::cout << "\n Enter your withdrawal amount :";
    float w;
    std::cin >> w;
    saving1.withdraw(w);
    saving1.display();
    return 0;
}