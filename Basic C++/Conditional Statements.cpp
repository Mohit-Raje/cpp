#include<iostream>
using namespace std;


int main()
{
    //int a ,b ;

    //cout<<"Value of a is "<<a << " Value of b is "<<b <<endl;

    //Positive and negative:
    /*
    int a;
    cout<< "Enter a number"<<endl;
    cin>>a;

    if(a>0)
        cout<< a << " is Positive"<<endl;
    else if(a<0)
        cout<< a << " is negative"<<endl;
    else
        cout<< a << " is zero" <<endl;
    */






     // Greater of two numbers:
     /*int a,b;

     cout<<"Enter the value of A"<<endl;
     cin>>a;
     cout<<"Enter the value of B"<<endl;
     cin>>b;

     if(a>b)
        cout<<"A is greater"<<endl;
     else
        cout<<"B is greater"<<endl;
        */


    // Guess the output:
    /*
    int a =9;
    if(a==9)
        cout<<"nine";
    if (a>0)
        cout<<"positive";
    else
        cout<<"Null";
    */


    //Guess the output:
    /*
    int a=2;
    int b=a+1;

    if((a=3)==b)
        cout<<a;
    else
        cout<<a+1;
    */

    //Guess the output:

    /*
    int a=24;
    if(a>20)
        cout<<"Love";
    else if(a==24)
        cout<<"Lovely";
    else
        cout<<"Babbar";
    */

    //Identify the character:


    char ch;
    cout<<"Enter the character"<<endl;
    cin>>ch;

    if(ch>='a' && ch<='z')
        cout<<"Lowercase";

    else if (ch>='A' && ch<='Z')
        cout<<"Uppercase";
    else if (ch>='0' && ch<='9')
        cout<<"Numeric";
    else
        cout<<"Special character";







    return 0;

}
