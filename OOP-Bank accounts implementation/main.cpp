#include <iostream>
#include<iomanip>
#include "bankAccount.h"
#include "checkingAccount.h"
 #include "serviceChargeChecking.h"
#include "noServiceChargeChecking.h"

 /***Written By: Akola Mbey Denis***/
 /**Date Written:23RD MARCH,2018

 /**Program:Description:This program seeks to clone a banking system.
 /**It provide the user with various account types and the user can perform the basic operations like
 //withdrawal,deposit,cheques with the account.
 //Three account types have been created
 // Checking account,serviceChargingAccount and noServiceChargingAccount**/


using namespace std;
int main()

{
    cout<<"NORMAL BANK ACCOUNT"<<endl;
   bankAccount c1("Akola","Denis",13242334,122.900);
    //c1.printAccount();
    c1.depositMoney(123.990);
   // c1.printAccount();
    c1.withdrawAmount(3.00);
    c1.printAccount();
cout<<endl;
    cout<<"CHECKING  BANK ACCOUNT"<<endl;
        checkingAccount c2("Akola","Denis",13242334 ,400.00,12.90);
        c2.getAccountBalance();
        c2.printAccount();

cout<<"CHECKING ACCOUNT WITH CHARGES"<<endl;
cout<<setprecision(4)<<showpoint;
serviceChargeChecking c3("akola","Denis",1213246,12.00,1.000,4);
c3.printAccount();
c3.depositMoney(12.00);
c3.printAccount();
c3.chequeAmount(12.089);
c3.withdrawAmount(12.90);
c3.printAccount();

   return 0;
}

