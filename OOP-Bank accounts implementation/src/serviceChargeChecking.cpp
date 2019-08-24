        #include "serviceChargeChecking.h"
        #include "checkingAccount.h"
        #include <iostream>
        #include<iomanip>
        #include "bankAccount.h"
        using namespace std;

        serviceChargeChecking::serviceChargeChecking(string first,string last,long accountNum,double amount,double checkAmount,int numberOfCheques):
            checkingAccount(first,last,accountNum, amount, checkAmount)
        {
        noOfCheques=numberOfCheques;
        cheque_Amount=checkAmount;
        totalCharge =charge_per_cheque;
        }
        void serviceChargeChecking::chequeAmount(double amount)
        {

        cheque_Amount=amount;
       // withdrawAmount(amount);
        countCheques++;
        }

        int  serviceChargeChecking::countNumberOfCheques()
        {
        if(countCheques==noOfCheques)
            cout<<"You cannot withdraw anymore"<<endl;
        cout<<"You can only withdraw in the upcoming month"<<endl;
        return countCheques;
        }


        void serviceChargeChecking::serviceCharge()
        {
            totalCharge=charge_per_cheque*(countCheques+1);

        }


        void serviceChargeChecking::printAccount()const
        {cout<<setprecision(4)<<showpoint;
            cout<<" Account Name:"<<getAccountHoldersName()<<endl;
            cout<<"Account Number:"<<getAccountNumber()<<endl;

            cout<<"Your balance is "<<bankAccount::getAccountBalance()-cheque_Amount-totalCharge<<endl;
        }

