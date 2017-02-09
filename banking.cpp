#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int a[50];
class seccbank
{
    private:
        string cname,cadd;
        string cemail;
        long long int mn;
        int balance,an;
        public:
        void openaccount(int);
        void accountinfo();
        void particularinfo();
        void withdraw();
        void deposit();
        void showbalance();
        int returnac();
};
void seccbank::openaccount(int i)
{
                int m,f=0,p;
                cout<<"enter customer account number   "<<endl;
                cin>>an;
                a[i]=an;
                if(i>0)
                {
                    for(m=0;m<i;m++)
                    {
                        p=a[m];
                        cout<<a[m];
                        if(p==an)
                        {
                            f++;
                            cout<<f;
                        }
                    }
                }
                if(f==1)
                    {
                        cout<<"ACCOUNT NUMBER ALREADY EXIST.....PLZ ENTER NEW ACCOUNT NUMBER"<<endl;
                        openaccount(i);
                        p=1987;

                    }
                 if(p!=1987)
                 {
                 cin.ignore();
                cout<<"enter customer name             "<<endl;
                getline(cin,cname);
                cout<<"enter customer address          "<<endl;
                getline(cin,cadd);
                cout<<"enter customer email"<<endl;
                getline(cin,cemail);
                cout<<"enter customer mobile no."<<endl;
                cin>>mn;
                break;
                balance=0;
                cout<<"  ___________________________________________________________________ "<<endl;
                 }
}
void seccbank::accountinfo()
{
    cout<<"customer name      :   "<<cname<<endl;
    cout<<"customer account no:   "<<an<<endl;
    cout<<"balance in account :   "<<balance<<endl;
    cout<<"customer address   :   "<<cadd<<endl;
    cout<<"customer email     :   "<<cemail<<endl;
    cout<<"customer mobile no :   "<<mn<<endl;

}
void seccbank::particularinfo()
{
    cout<<"customer name      :   "<<cname<<endl;
    cout<<"balance in account :   "<<balance<<endl;
    cout<<"customer address   :   "<<cadd<<endl;
    cout<<"customer email     :   "<<cemail<<endl;
    cout<<"customer mobile no :   "<<mn<<endl;
}
void seccbank::withdraw()
{
    int am;
    cout<<"enter amount to withdraw"<<endl;
    cin>>am;
    if(am<=balance)
    {
        cout<<"transaction succesful\t CLEAR BALANCE="<<balance-am<<endl;
        balance=balance-am;
    }
    else
    {
        cout<<"transaction declined due to insufficient balance"<<endl;
    }
}
void seccbank::deposit()
{
    int n;
    cout<<"enter amount to be deposit"<<endl;
    cin>>n;
    balance=balance+n;
    cout<<"amount deposit succesfully\t CLEAR BALANCE="<<balance<<endl;
}
void seccbank::showbalance()
{
    cout<<"account number:"<<an;
    cout<<"\tbalance in account:"<<balance<<endl;
}
int seccbank::returnac()
{
    return an;
}
int main()
{
    int ch;
    int i=-1,m=0,f=0,p,q,an,a[50],z=0;
    seccbank ob[50];
    do
    {
        cout<<"  ___________________________________________________________________ "<<endl;
        cout<<"\t*********MENU************"<<endl;
        cout<<"\t01:OPEN ACCOUNT"<<endl;
        cout<<"\t02:ACCOUNTS INFORMATION"<<endl;
        cout<<"\t03:PARTICULAR ACCOUNT INFORMATION"<<endl;
        cout<<"\t04:WITHDRAW"<<endl;
        cout<<"\t05:DEPOSIT"<<endl;
        cout<<"\t06:BALANCE INFORMATION"<<endl;
        cout<<"\t07:EXIT"<<endl;
        cin>>ch;
        cout<<"  ___________________________________________________________________ "<<endl;
        switch(ch)
        {
            case 1: i++;
                     ob[i].openaccount(i);
                     break;
            case 2:
                   if(i==-1)
                   {
                        cout<<"NO ACCOUNT TO DISPLAY"<<endl;
                   }
                   else
                   {
                       for(m=0;m<=i;m++)
                       {
                           ob[m].accountinfo();
                       }
                   }
                   m=0;
                   break;
              case 3:if(i==-1)
                   {
                        cout<<"THERE ISNO ACCOUNT IN BANK"<<endl;
                   }
                   else{
                      cout<<"enter account no to get information"<<endl;
                      cin>>an;
                      for(m=0;m<=i;m++)
                      {
                       q=ob[m].returnac();
                       if(q==an)
                          {
                              f++;
                              p=m;
                          }
                       }
                       if(f==0)
                       {
                           cout<<"PLEASE ENTER CORRECT ACCOUNT NUMBER"<<endl;
                       }
                       else if(f==1)
                       {
                           ob[p].particularinfo();
                       }
                       f=0;
                   }
                       break;
              case 4:if(i==-1)
                   {
                        cout<<"THERE IS NO ACCOUNT TO WITHDRAWL"<<endl;
                   }
                   else{
                        cout<<"enter account for withdrawl"<<endl;
                      cin>>an;
                      for(m=0;m<=i;m++)
                      {
                       q=ob[m].returnac();
                       if(q==an)
                          {
                              f++;
                              p=m;
                          }
                       }
                       if(f==0)
                       {
                           cout<<"PLEASE ENTER CORRECT ACCOUNT NUMBER"<<endl;
                       }
                       else if(f==1)
                       {
                           ob[p].withdraw();
                       }
                       f=0;
                   }
                       break;
            case 5: if(i==-1)
                   {
                        cout<<"NO ACCOUNT TO DEPSIT MONEY"<<endl;
                   }
                   else{
                        cout<<"enter account for deposit"<<endl;
                      cin>>an;
                      for(m=0;m<=i;m++)
                      {
                       q=ob[m].returnac();
                       if(q==an)
                          {
                              f++;
                              p=m;
                          }
                       }
                       if(f==0)
                       {
                           cout<<"PLEASE ENTER CORRECT ACCOUNT NUMBER"<<endl;
                       }
                       else if(f==1)
                       {
                           ob[p].deposit();
                        }
                       f=0;
                       m=0;
                   }
                       break;
            case 6: if(i==-1)
                   {
                        cout<<"THERE IS NO ACCOUNT TO SHOW"<<endl;
                   }
                   else{
                        cout<<"enter account for balnce enquiry"<<endl;
                      cin>>an;
                      for(m=0;m<=i;m++)
                      {
                       q=ob[m].returnac();
                       if(q==an)
                          {
                              f++;
                              p=m;
                          }
                       }
                       if(f==0)
                       {
                           cout<<"PLEASE ENTER CORRECT ACCOUNT NUMBER"<<endl;
                       }
                       else if(f==1)
                       {
                           ob[p].showbalance();
                       }
                       f=0;
                   }

        }

    }while(ch<7);
//    default:
			//cout << "Error - Invalid Input!";
    return 0;
}
