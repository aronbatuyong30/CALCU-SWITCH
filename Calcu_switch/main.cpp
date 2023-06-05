#include <iostream>
using namespace std;

int calculator(int num1, int num2, int num3);


int main()
{
    int a, b, c, choice;
    cout<<"Enter First number: "<<endl;
    cin>>a;
    cout<<"Enter Second number: "<<endl;
    cin>>b;
    cout<<"*************************"<<endl;
    cout<<"****Make your choice****"<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    cout<<"5. Get Remainder"<<endl;
    cout<<"6. Exit"<<endl;
    cout<<"************************"<<endl;

    choice = calculator(a, b, c);

    return 0;
}

int calculator(int num1, int num2, int num3)
{
    int choice;
    char opt;
    cin>>choice;

    switch(choice)
    {

    case 1:

        cout<<"You Have Selected Addition"<<endl;

               num3 = num1 + num2;

        cout<<"Addition of two  numbers is: "<<num3<<endl;
        break;

    case 2:

        cout<<"You Have Selected Subtraction"<<endl;

        num3 = num1 - num2;

        cout<<"Subtraction of two numbers is: "<<num3<<endl;
        break;

    case 3:

        cout<<"You Have Selected Multiplication"<<endl;

        num3 = num1 * num2;

        cout<<"Multiplication of two numbers is; "<<num3<<endl;
        break;

    case 4:

        cout<<"You Have Selected Division"<<endl;

        num3 = num1 / num2;

        cout<<"Division of two numbers is: "<<num3<<endl;
        break;

    case 5:

        cout<<"You Have Selected Remainder"<<endl;

        num3 = num1 % num2;

        cout<<"Remainder of two numbers is: "<<num3<<endl;
        break;

    case 6:

        cout<<" Exit of the Programm...."<<endl;

        exit(0);
        break;


    default:

        cout<<"Invalid Choice"<<endl;
        break;

    }
    cout<<"Go back to Main Menu? [Y/N]"<<endl;
    cin>>opt;

        if(opt == 'y' || opt == 'Y')
          {

              main();
          }
          else if(opt == 'n' || opt == 'N')
          {
              exit(1);
          }
          else{
            cout<<"Invalid Input";
          }

}
