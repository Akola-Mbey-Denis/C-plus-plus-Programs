    #ifndef BANKACCOUNT_H
    #define BANKACCOUNT_H
    #include<iostream>
    #include<string>
    using namespace std;

    class bankAccount
    {
        public:
            void setAccount(string fname,string lname,long accountN,double amount);

            //this function sets the account's name,and the account number.
            bankAccount(string first,string last,long accountNum,double amount);
           virtual void printAccount()const;
           //void printBaseAccount()const;
            //It displays the account information
            string getAccountHoldersName() const;
    //double getAmountInAccount() const;

            //it returns the name of the account holder
            long getAccountNumber() const;
            //it returns the account number;
            void withdrawAmount(double amount) ;
            //it allows the owner to enter an amount he wants to withdraw from the account;
            void depositMoney(double amount);

            //to deposit
           double getAccountBalance() const;
            //fetches the account's balance;
            void setBalance(double amount);
            double getInterest();



        private:
            string firstName;
            string lastName;
            long int AccountNumber;
            double balance=0.00;
            double amountInAccount;
            double interestRate=0.0125;
    };

    #endif // BANKACCOUNT_H
