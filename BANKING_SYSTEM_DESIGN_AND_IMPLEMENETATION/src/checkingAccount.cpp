#include "checkingAccount.h"
#include <iostream>
#include "bankAccount.h"
using namespace std;

checkingAccount::checkingAccount(string first,string last,long accountNum,double amount,double checkAmount):
    bankAccount( first,last, accountNum,amount)
{
    cheque=checkAmount;
}
void checkingAccount::setCheckingAccount(string first,string last,long accountNum,double amount ,double checkAmount)
{

    setAccount(first,last,amount,accountNum);
    cheque=checkAmount;
//writeCheck(checkAmount);
}
void checkingAccount::writeCheck(double checkAmount)
{//cheque=checkAmount;
    cout<<"Dear customer...."<<getAccountHoldersName()<<" a cheque of GHc "
    <<checkAmount<<" has being issued in your name."<<endl;
    bankAccount::withdrawAmount(checkAmount);
}

void checkingAccount::printAccount()const
{
cout<<"Account Name:"<<getAccountHoldersName()<<endl;
    cout<<"AccountNumber:"<<getAccountNumber()<<endl;

    cout<<"Your balance is "<<bankAccount::getAccountBalance()-cheque<<endl;
    // checkingAccount::writeCheck(cheque);
}
double checkingAccount::getInterest()const
{

    return getAccountBalance()+getAccountBalance()*interestRate;
}
