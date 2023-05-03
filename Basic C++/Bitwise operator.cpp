#include<iostream>
using namespace std;


int main(){

  int a = 4;
  int b = 6;

  cout<< (a&b) << endl;
  cout<< (a|b) << endl;
  cout<< (~a) << endl;
  cout<< (a^b) << endl;


  cout<<endl;
  cout<<endl;
  cout<<endl;
  cout<<endl;

  //Post and Pre increment and decrement operator:


//Post Increment :
  int i = 11;
  int c = i++;
  cout<<c<<endl;
  cout<<i<<endl;


//Pre increment ;
cout<<endl;


  int  j  = 10;
  int d = ++j;
  cout<<d<<endl;
  cout<<j<<endl;


//Post Decrement :
cout<<endl;


  int k = 12;
  int e = k--;
  cout<<e<<endl;
  cout<<k<<endl;

//Pre decrement :
cout<<endl;

  int l = 5 ;
  int f = --l;
  cout<<f<<endl;
  cout<<l<<endl;


cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;


  b=1;
  a=10;
  if(++a)
    cout<<b;
  else
    cout<<(++b);

cout<<endl;

   a=1;
   b=2;
   if(a-- > 0 && ++b >2 )
    cout<<"if";
   else
    cout<<"else";

cout<<endl;


    a=3;
    cout<<25*(++a);

cout<<endl;

    a=1;
    b=a++;
    c=++a;
    cout<<b<<endl;
    cout<<c<<endl;



}
