#ifndef NOSERVICECHARGECHECKING_H
#define NOSERVICECHARGECHECKING_H
#include "serviceChargeChecking.h"
#include "checkingAccount.h"
#include <iostream>
#include<iomanip>
#include "bankAccount.h"


class noServiceChargeChecking:checkingAccount
{
    public:
        noServiceChargeChecking(string first,string last,long accountNum,double amount,double checkAmount);

   void  setNoserviceChargeCheckingAccount(string first,string last,long accountNum,double amount,
                                      double checkAmount);
        void printAccount() const;
        double interestRate() const;
        double totalAmountInAccount();
        bool isValidTransaction();
void writeCheck(double amount);

    private:
        const double interest_Rate=0.120;
        double minimimumBalance=0;

};

#endif // NOSERVICECHARGECHECKING_H
