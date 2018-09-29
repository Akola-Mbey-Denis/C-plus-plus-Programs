			     /***Written by:Akola Mbey Denis****/
			     //Date Written: 20th Janaury,2018**/
			     //This program reads in a password from the console.If the password is valid,
				 //it approves it by logging to the console( valid  password ) else it ask you
				 //to reenter a correct password format*/
				 #include <iostream>
			    #include<string>
			    #include<cstring>
			    using namespace std;
			    bool isValidPassword(string akola );//function prototype


			    int main()
			    {
			   string password;//read in the password;
			    std::cout<<"enter a password,*\t(it must contain at least two numbers, characters  and some special characters) Password must not have a width less than 6";
			   std::cout<<"\nEnter your password:";


			   std::cin>>password;
			   // function  isValidPassword takes the password input from the user and returns  a bool value to indicate
				// whether the password entered meets the requirements earlier specified in the console.

			    if(isValidPassword(password) )
				{

			       std::cout<<"valid password."<<endl;
			    }
				else
			{
			std::cout<<"invalid password"<<endl;
			    main();
			}


			        return 0;
			    }


			    bool isValidPassword(string password)///function definition
			    {
			        int countDigits=0,countSpecialCharacters=0;

			        for(int i=0;i<=password.size()-1&&(password.size()>=6);i++)
			        {
					//beginning of the for loop

			          if(isdigit(password[i]))
			        {
			            countDigits++;
			        }
			        else if(password[i]>=char(33)&&password[i]<=char(47))
			       {
			            countSpecialCharacters++;
			        }
		        }//end of the for loop

			        if(countDigits>=1 &&countSpecialCharacters>=1)//checking if the password contains at least two numbers and two special characters
			        {
			            return true;
			        }
			        else
			            return false;

			    }


