#include "bankAccount.h"
#include<iostream>
#include<string>
using namespace std;
bankAccount::bankAccount(string first,string last,long accountNum,double amount)/**The default constructor**/
{
    firstName=first;
    lastName=last;
    AccountNumber=accountNum;
    amountInAccount=amount;
}
void bankAccount::printAccount() const /**The defintion of the function for printing the account*/
{
    cout<<"Account Name:"<<getAccountHoldersName()<<endl;
    cout<<"AccountNumber:"<<getAccountNumber()<<endl;
    cout <<"Balance:"<<getAccountBalance()<<endl;
}
void bankAccount::setAccount(string fname,string lname,long accountN,double amount)
{
    firstName=fname;
    lastName=lname;
    AccountNumber=accountN;
amountInAccount=amount;
}
string bankAccount::getAccountHoldersName() const
{
    return firstName+" "+lastName;
}

long bankAccount::getAccountNumber() const
{
    return AccountNumber;
}
void bankAccount::withdrawAmount(double amount)
{
    balance= amountInAccount-amount;
}
void bankAccount::depositMoney(double amount)
{
    balance= amountInAccount+amount;
}
double bankAccount:: getAccountBalance() const
{
    return balance;


}
void bankAccount:: setBalance(double amount)
{
    balance=amount;
}
double bankAccount::getInterest()
{

    return balance*interestRate;
}
