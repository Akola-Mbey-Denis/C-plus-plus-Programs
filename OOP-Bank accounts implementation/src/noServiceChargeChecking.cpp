#include "serviceChargeChecking.h"
#include "checkingAccount.h"
#include <iostream>
#include<iomanip>
#include "bankAccount.h"
#include "noServiceChargeChecking.h"
  noServiceChargeChecking:: noServiceChargeChecking(string first,string last,long accountNum,double amount,
double checkAmount):checkingAccount(first,last,accountNum,amount,checkAmount)
{
   minimimumBalance=10.00;

}
void noServiceChargeChecking::setNoserviceChargeCheckingAccount(string first,string last,long accountNum,double amount,
                                      double checkAmount)
{

    checkingAccount(first,last,accountNum,amount,checkAmount);

minimimumBalance=10.00;
}
double noServiceChargeChecking::totalAmountInAccount()
{
    return bankAccount::getAccountBalance();
}

double noServiceChargeChecking::interestRate() const
{
    return interest_Rate;
}
bool noServiceChargeChecking::isValidTransaction()
{
    if(getAccountBalance()> minimimumBalance)
   {
     return true;
   }
else

    return false;
 }

void noServiceChargeChecking::printAccount() const
{
     cout<<setprecision(4)<<showpoint;
            cout<<" Account Name:"<<getAccountHoldersName()<<endl;
            cout<<"Account Number:"<<getAccountNumber()<<endl;

            cout<<"Your balance is "<<bankAccount::getAccountBalance()*(1+interestRate())<<endl;

}

void noServiceChargeChecking::writeCheck(double cheque_Amount)
{cout<<setprecision(4)<<showpoint;
            cout<<" Account Name:"<<getAccountHoldersName()<<endl;
            cout<<"Account Number:"<<getAccountNumber()<<endl;

            cout<<"Your balance is "<<bankAccount::getAccountBalance()-cheque_Amount <<endl;

}
