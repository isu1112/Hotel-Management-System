#include <iostream>
#include <stdlib.h>

using namespace std;


int main()
{
   cout<<"                                      ************ bun talk restaurant*****:\n";
   cout<<"\t\t\t        welcome !               ****\n";
   cout<<"\t\t\t1.customer menu\n";
   cout<<"\t\t\t2.staff login:\n";
   cout<<"\t\t\t3.resturant iteam list:\n";
   cout<<"\t\t\t4.help center\n";
   cout<<"\t\t\t5.Exit\n";
   int num;
   cout<<"\t\t\t\tYou'r choice\--'";
   cin>>num;
   if(num==1)
   {
    cout<<"  customer  menu ";
    int number,n;
    int total=0;
    char ask;
    int price[8]={70,50,40,45,60,55,75,45};

    retry:

    cout<<"**************"<<endl;
    cout<<"             CUSTOMER LIST            "<<endl;
    cout<<"**************"<<endl;
    cout<<"name of product\t||price              "<<endl;
    cout<<"1.chess roll \t||rs70       "<<endl;
    cout<<"2.vegitable roll \t||rs50       "<<endl;
    cout<<"3.fish cutlet \t||rs40       "<<endl;
    cout<<"4.vegitable cutlet \t||rs45       "<<endl;
    cout<<"5.hoppers  \t||rs60       "<<endl;
    cout<<"6.chicken pastry  \t||rs50      "<<endl;
    cout<<"7.chicken rolls \t||rs75       "<<endl;
    cout<<"8.vegitable rolls \t||rs45       "<<endl;
    cout<<"9.vegitable pastry \t||rs45       "<<endl;

    cout<<" what do you want  ?";cin>>number;
    switch(number){
        case 1:
            cout<<" how many  do you want  ?:"; cin>>n;
            total+=price[0]*n;
            cout<<"Anything ? (y/n)"; cin>>ask;
            if(ask=='y'){
                system("cls");
                goto retry;
            }else
                goto end;
        case 2:
            cout<<" how many  do you want  ?:"; cin>>n;
            total+=price[1]*n;
            cout<<"Anything ? (y/n)"; cin>>ask;
            if(ask=='y'){
                system("cls");
                goto retry;
            }else
                goto end;
         case 3:
            cout<<" how many  do you want  ?:"; cin>>n;
            total+=price[2]*n;
            cout<<"Anything ? (y/n)"; cin>>ask;
            if(ask=='y'){
                system("cls");
                goto retry;
            }else
                goto end;

         case 4:
            cout<<" how many  do you want  ?:"; cin>>n;
            total+=price[3]*n;
            cout<<"Anything ? (y/n)"; cin>>ask;
            if(ask=='y'){
                system("cls");
                goto retry;
            }else
                goto end;
        case 5:
            cout<<" how many  do you want  ?:"; cin>>n;
            total+=price[4]*n;
            cout<<"Anything ? (y/n)"; cin>>ask;
            if(ask=='y'){
                system("cls");
                goto retry;
            }else
                goto end;
        case 6:
            cout<<" how many  do you want  ?:"; cin>>n;
            total+=price[5]*n;
            cout<<"Anything ? (y/n)"; cin>>ask;
            if(ask=='y'){
                system("cls");
                goto retry;
            }else
                goto end;
         case 7:
            cout<" how many  do you want  ?:"; cin>>n;
            total+=price[6]*n;
            cout<<"Anything ? (y/n)"; cin>>ask;
            if(ask=='y'){
                system("cls");
                goto retry;
            }else
                goto end;
         case 8:
            cout<<" how many  do you want  ?:"; cin>>n;
            total+=price[7]*n;
            cout<<"Anything ? (y/n)"; cin>>ask;
            if(ask=='y'){
                system("cls");
                goto retry;
            }else
                goto end;
         case 9:
            cout<<" how many  do you want  ?:"; cin>>n;
            total+=price[8]*n;
            cout<<"Anything ? (y/n)"; cin>>ask;
            if(ask=='y'){
                system("cls");
                goto retry;
            }else
                goto end;

    }
    end:
        cout<<"total Amount Rs."<<total;

   }
   else if(num==2)
   {
    cout<<"staff login\n";
    string username;
    string password;
    cout<<"please input in your username:";cin>>username;
    cout<<"please input in your password:";cin>>password;
    if(username=="username")
    {
    if(password=="password")
    {
            cout<<"employees working hours";
    }
    else
    {
        cout<<"incorrect password"<<endl;

    }
    }
    else{
        cout<<"incorrect name"<<endl;

        }
   }
   else if(num==3)
   {
    cout <<"bakery item list\n";
    cout<<"\t\t\t\titem no\t\t\t\t iteam\t\t\t\t\tprice:"<<endl;
    cout<<"\t\t\t\t1.\t\t\t\tchees roll\t\t\t\trs.70"<<endl;
    cout<<"\t\t\t\t2.\t\t\t\tvegitabale roll\t\t\t\trs.50"<<endl;
    cout<<"\t\t\t\t3.\t\t\t\tfish cutlet\t\t\t\trs.40"<<endl;
    cout<<"\t\t\t\t4.\t\t\t\tvegitable cutlet\t\t\trs.45"<<endl;
    cout<<"\t\t\t\t5.\t\t\t\t hoppers\t\t\t\trs.60"<<endl;
    cout<<"\t\t\t\t6.\t\t\t\tchicken pastry\t\t\t\trs.55"<<endl;
    cout<<"\t\t\t\t7.\t\t\t\tchicken rolls\t\t\t\trs.75"<<endl;
    cout<<"\t\t\t\t8.\t\t\t\tvegitable rolls\t\t\t\trs.45"<<endl;
    cout<<"\t\t\t\t8.\t\t\t\tvegitable pastry\t\t\t\trs.55"<<endl;
   }
   else if(num==4)
   {
     cout <<"help";
     cout <<"*****help***"<<endl;
     cout<<"*****\t\t\t\t\t***"<<endl;
     cout<<"introduction in this system"<<endl;
     cout<<"you can get your bill and menu of the resturent **"<<endl;
     cout<<"also  staff can confrom his/her working hours  **"<<endl;
     cout<<"\t\t\t1 step:login in system\t\t"<<endl;
     cout<<"\t\t\t2 step:item you can have print bill"<<endl;
     cout<<"\t\t\tthank you\t\t\t\t\t\t\t\t\t\t\t\t"<<endl;
   }
    else if (num==5)
   {
     cout <<"exit";
   }





    return 0;
}
