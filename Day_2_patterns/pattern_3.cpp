#include<iostream>
using namespace std;

void pattern(int n){
     for(int i =1 ; i<n; i ++)
     {
        for(int j = 1; j <= i; j++)
        {
            cout<< j;
         }
        cout<< endl;

     }

/*we run the outer loop for N times as we have to print N rows, and since we have to print a right-angled triangle/pyramid which must be upright, so the inner loop will run for the row number in each iteration. For eg: 1 number for row 1, 5 numbers for row 5, and so on. The only difference between this pattern and pattern 2 is that here we print numbers looping from 1 to the row number for each row instead of printing stars.*/



}

int main(){

    int n ;
    cout<< "enter your choice boss";
    cin>> n;
    pattern(n);
}