#include<iostream>

using namespace std;

int main()
{
    // Print 1 to N natural numbers:

    /*
    int n;

    cout<<"Enter the number\n";
    cin>>n;

    int i=1;
    while(i<=n){
        cout<<i<<endl;
        i++;
    }
    */




    // Sum of 1 - N natural numbers :

    /*
    int num;
    cout<< "Enter the number\n";
    cin>>num;
    int i , sum=0;

    while(i<=num){
        sum=sum+i;
        i++;
    }
    cout<<sum;
    */

    //Sum of even numbers 1 -- N;
    /*
    int n;
    cout<<"Enter the number\n";
    cin>>n;

    int i , sum=0;
    while(i<=n){
        if(i%2==0)
            sum=sum+i;
        i++;
    }
    cout<<sum;
    */



    //Temperature converter;
    /*
    float temp_fr;
    cout<<"Enter the temperature in farenheit\n"
    cin>>temp_fr;
    int temp_cel;

    temp_cel = (temp_fr − 32) × 5/9;
    cout<<temp_cel;
    */


    //Whether a number is prime number or not;

    /*
    int n;

    cout<<"Enter  an number\n";
    cin>>n;

    int i=2;

    while(i<n)
    {
        if(n%i==0)
            break;
        i++;
    }
    if(i==n){
        cout<<n <<" is a prime number\n";
    }
    else{
        cout<<n<< " is not a prime number\n";
    }

    */


    return 0;

}
