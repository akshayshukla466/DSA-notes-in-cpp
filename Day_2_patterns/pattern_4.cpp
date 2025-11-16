#include<iostream>
using namespace std;

void pattern(int n){
     for(int i =0 ; i<n; i ++)
     {
        for(int j = 0; j < i; j++)
        {
            cout<< i;
         }
        cout<< endl;

     }





}
/*we run the outer loop for N times as we have to print N rows, and since we have to print a right-angled triangle/pyramid which must be upright, so the inner loop will run for the row number in each iteration. For eg: 1’s for row 1, 5’s 5 times for row 5, and so on. The only difference between this pattern and pattern 2 is that here we print numbers in each row instead of printing stars.*/
int main(){

    int n ;
    cout<< "enter your choice boss: ";
    cin>> n;
    pattern(n);
}