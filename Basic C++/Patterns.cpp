#include<iostream>
#include <cstdlib>

using namespace std;

int main(){


    //Patter  n*n  * pattern;
    /*
    int num;
    cin>>num;

    int row=0 ,col;
    while(row<num){

        col=0;
        while(col<num){
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
    }
    */

    //Pattern n*n 1 1 1 1 \n 2 2 2 2  numbers :

    /*
    int num;
    cin>>num;

    int row=0 , col;

    while(row<num)
    {
        col=0;

        while(col<num){
            cout<<row+1;
            col++;
        }
        cout<<endl;
        row++;
    }
    */



    // Pattern n*n 1 2 3 4 \n 1 2 3 4

    /*
    int num;
    cin>>num;

    int row =0 , col;
    while(row<num){
        col=0;
        while(col<num){
            cout<<col+1;
            col++;
        }
        cout<<endl;
        row++;

    }
    */


    //Pattern n*n 1 2 3 \n 4 5 6
    /*
    int num ;
    cin>>num;

    int row=0 , col , val=1;
    while(row<num){

        col=0;
        while(col<num){
            cout<<val;
            val++;
            col++;
        }
        cout<<endl;
        row++;
    }
    */


        //Pattern * right angle
   /*
   int num;
   cin>>num;

   int row = 1, col;
   while(row<=num){
    col=1;
    while(col<=row){
        cout<<"*";
        col++;
    }
    cout<<endl;
    row++;
   }
   */

// Pattern right angle triangle 1 \n 22 \n 333
   /*
   int num;
   cin>>num;

   int row=1 , col;

   while(row<=num){

    col=1;

    while(col<=row)
    {
        cout<<row;
        col++;

    }
    cout<<endl;
    row++;
   }
    */

//Pattern right angle triangle
    /*
    int num;
    cin>>num;

    int row=1 , col , val=1;

    while(row<=num){

        col=1;
        while(col<=row){
            cout<<val<<" ";
            val++;
            col++;
        }
        cout<<endl;
        row++;

    }

*/

    //Pattern right angle triangle , 1 \n 2 3 \n 3 4 5  \n 4 5 6 7

    /*
    int num;
    cin>>num;

    int row=1 , col , flag;

    while(row<=num){
        col=1;
        flag=row;
        while(col<=row){
            cout<<flag<<" ";
            flag++;
            col++;
        }
        row++;
        cout<<endl;

    }

    */

    //Pattern       right angle triangle same question as above without flag variable :
    /*

    int num;
    cin>>num;

    int row=1 , col;
    while(row<=num){
        col=1;
        while(col<=row){
            cout<<col+(row-1)<<" ";
            col++;
        }
        row++;
        cout<<endl;
    }

    */



    //Pattern right angle 1\n 2 1 \n 3 2 1\n 4 3 2 1 with flag v
    /*
    int num;
    cin>>num;

    int row=1 , col;

    while(row<=num){
        int flag =row;
        col=1;
        flag=row;
        while(col<=row){
            cout<<flag<<" ";
            flag--;
            col++;
        }
        row++;
        cout<<endl;
    }

    */




    //Pattern same pattern as above but without flag variable:

    /*
    int num;
    cin>>num;

    int row=1 , col;

    while(row<=num){
        col=1;
        while(col<=row){

            cout<<row-(col-1)<<" ";
            col++;
        }
        row++;
        cout<<endl;

    }
    */




    //Pattern n*n character pattern , AAA\n BBB \n CCC;

    /*
    int num;
    cin>>num;

    int row= 1 , col;
    char ch='A';
    while(row<=num){

    col=1;

        while(col<=num){
            cout<<ch;
            col++;

        }
        row++;
        ch++;
        cout<<endl;
    }
    */






    //Pattern  A B C \n A B C\n A B C:
/*
    int num;
    cin>>num;

    int row=1   , col=1 ;

    while(row<=num){
        col=1;
        char ch='A';
        while(col<=num){
            cout<<ch<<" ";
            ch++;
            col++;
        }
        row++;
        cout<<endl;
    }
    */





    //Pattern  A B C \n DE F \n G H I
    /*

    int num;
    cin>>num;

    int row=1 , col=1;
    char ch='A';

    while(row<=num){
        col=1;
        while(col<=num){
            cout<<ch<<" ";
            ch++;
            col++;
        }
        row++;
        cout<<endl;

    }

    */





    //Pattern  A B C \n B C D\n C D E

    /*
    int num;
    cin>>num;

    int row=1, col ;
    char ch='A';
    while(row<=num){
            col=1;
        while(col<=num){

            cout<<ch<<" ";
            ch++;
            col++;
        }
        row++;
        ch='A';
        ch++;

        cout<<endl;
    }

    */




    // Pattern    A\n BB \n CCC

    /*
    int num;
    cin>>num;

    int row=1 , col=1;
    char ch='A';
    while(row<=num){

        col=1;
        while(col<=row){
            cout<<ch<<" ";
            col++;
        }
        row++;
        cout<<endl;
        ch++;
    }

    */






    //Pattern A \ BC \n D EF

    /*

    int num;
    cin>>num;

    int row=1 , col=1;
    char ch='A';

    while(row<=num)
    {

        col=1;
        while(col<=row){
            cout<<ch<<" ";
            ch++;
            col++;
        }
        row++;
        cout<<endl;
    }

    */





    //Pattern  A \n B C \n  C D E \n D E F G


/*
    int num;
    cin>>num;

    int row=1 , col=1;
    char ch='A';
    char flag = ch;
    while(row<=num){


        col=1;
        while(col<=row){
            cout<<flag<<" ";
            flag++;
            col++;
        }
        ch++;
        flag=ch;
        row++;
        cout<<endl;

    }

    */





    // Pattern: D \n C D \n B C D \n A

    /*
     int num;
     cin>>num;

     char ch='A';
     ch=ch+num-1;

     int row =1 , col=1;
     char flag;

     while(row<=num){
        col=1;

        flag=ch;
        while(col<=row){
            cout<<flag<<" ";
            col++;
            flag++;
        }
        row++;
        cout<<endl;
        ch--;
     }
     */







     //Pattern;

     /*
     int num;
     cin>>num;
     int row = 1  , col=1;
     int flag=num;

      while(row<=num)
      {

          int col=1;
          while(col<=row){
            cout<<flag<<" ";
            flag++;
            col++;

          }

          row++;
          flag=num-(row-1);
          cout<<endl;


      }

*/






      //Pattern :

    /*
      int num;
      cin>>num;

      int row=1;

      while(row<=num){
        int col=1;
        char ch = 'A'+(num-row);

        while(col<=row){
            cout<<ch<<" ";
            ch++;
            col++;

        }
        row++;
        cout<<endl;

      }
    */


    //Pattern :

    /*
    int num;
    cin>>num;
    char ch='A';

    int row = 1;
    while(row<=num){

        int col= 1;
        char flag=ch;

        while(col<=num){
            cout<<flag<<" ";
            flag++;
            col++;
        }
        ch++;
        row++;
        cout<<endl;

    }
    */





// Pattern:
/*
    int num;
    cin>>num;
     int row=1 ;
     while(row<=num){

     int col=1;

        int space= num-row;

        while(space)
        {
            cout<<" ";
            space--;
        }
        while(col<=row){
            cout<<"*";
            col++;
        }
        row++;
        cout<<endl;
     }


     */



//Patter ulta right angle triangle:
/*


     int num;
     cin>>num;

     int row=1;

     while(row<=num)
     {
         int star = num-row+1;
         while(star)
         {

             cout<<"*";
             star--;
         }
         row++;
         cout<<endl;

     }
     */








     //Pattern #

     /*
     int num;
     cin>>num;

     int row=1;
     while(row<=num){
        int star=num-row+1;
        int space=row-1;

        while(space)
        {
            cout<<" ";
            space--;
        }
        while(star){
            cout<<"*";
            star--;

        }
        row++;
        cout<<endl;

     }
     */


// Pattern:
/*
     int num;
     cin>>num;

     int row = 1;
     while(row<=num){
        int space=row-1;
        int numbers = num-row+1;

        while(space){
            cout<<" ";
            space--;
        }
        while(numbers){
            cout<<row;
            numbers--;
        }
        row++;
        cout<<endl;

     }
     */







     //Pattern :


     /*
     int num;
     cin>>num;

     int row=1;

     while(row<=num){

        int space=num-row;
        int numbers = row;

        while(space)
        {
            cout<<" ";
            space--;
        }
        while(numbers){
            cout<<row;
            numbers--;
        }
        row++;
        cout<<endl;

     }
     */












     //Pattern :




     /*
     int num;
     cin>>num;

     int row=1;

     while(row<=num)
     {
         int flag=row;
         int space=row-1;
         int number=num-row+1;
         while(space){
            cout<<" ";
            space--;

         }
         while(number)
         {
             cout<<flag;
             number--;
             flag++;
         }
         row++;
         cout<<endl;
     }

     */















/*
     int num;
     cin>>num;

     int row=1;
     int flag=1;
     while(row<=num){

        int space=num-row;
        int number=row;

        while(space){
            cout<<" ";
            space--;
        }
        while(number){
            cout<<flag;
            number--;
            flag++;
        }
        row++;
        cout<<endl;
     }


     */







     int num;
     cin>>num;

     int row=1;

     while(row<=num){

        int space =num-row;

        while(space){
            cout<<" ";
            space--;
        }
            int j=1;
        while(j<=row){
            cout<<j;
            j++;
        }


        }
        row++;
        cout<<endl;


     }


