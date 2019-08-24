#ifndef SERVICECHARGECHECKING_H
#define SERVICECHARGECHECKING_H

#include "checkingAccount.h"
#include <iostream>
#include "bankAccount.h"
using namespace std;

class serviceChargeChecking:public checkingAccount
{
    public:
        serviceChargeChecking(string first,string last,long accountNum,double amount,double checkAmount, int numberOfCheques);
        void chequeAmount(double amount);
    int countNumberOfCheques() ;
    void  serviceCharge();

 void printAccount() const;

    private:
        int noOfCheques;
        int countCheques;
        double cheque_Amount;
        const double  charge_per_cheque=0.04;
        double totalCharge;
};

#endif // SERVICECHARGECHECKING_H
