#include<iostream>
using namespace std;

int main()
{

    int a = 2/5;
    cout<< a <<endl;

    float b = 2.0/5;
    cout<< b << endl;

    float c = 2/5.0;
    cout<< c << endl;

    int d = 2.0/5;
    cout<< d << endl;

    float e = 2/5;
    cout<< e << endl;

    // Relation operator;

    int x = 4;
    int y= 3;
    bool test = (x==y);
    cout<< test << endl;

    int m=2 , n=2;
    bool test1 = (m==n);
    cout<< test1 << endl;

    bool test2 = (x>y);
    cout<< test2 << endl;

    bool test3 = (x<y);
    cout<< test3 << endl;

    bool test4 = (x!=y);
    cout<< test4 << endl;


    // Logical operator;

    int l=23 , p=0;
    cout<< !l <<endl;
    cout<< !p << endl;

    return 0;

}
