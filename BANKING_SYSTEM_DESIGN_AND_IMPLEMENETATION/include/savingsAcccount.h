#ifndef SAVINGSACCCOUNT_H
#define SAVINGSACCCOUNT_H


class savingsAcccount:public bankAccount
{
    public:
        savingsAcccount(string fname,string lname,long accountN,double amount);
         public
     void printAccount() const;
     void getSavingAmount(double amount);
    double  getInterest();


};

#endif // SAVINGSACCCOUNT_H
