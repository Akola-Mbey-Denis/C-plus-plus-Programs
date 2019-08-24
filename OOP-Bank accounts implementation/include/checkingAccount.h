#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H
#include <iostream>
#include "bankAccount.h"
using namespace std;


class checkingAccount:public bankAccount
{
    public:
        checkingAccount(string first,string last,long accountNum,double amount,double checkAmount);

      virtual  void  writeCheck(double Amount);
        //void printCheck() const;
        void setCheckingAccount(string first,string last,long accountNum,double amount,double checkAmount);
        void printAccount() const;
        double getInterest() const;
    private:
        double cheque;
        double interestRate=0.012;
       // double balance;

};

#endif // CHECKINGACCOUNT_H
