#include<iostream>
using namespace std;

void pattern(int n){
     for(int i =1 ; i<=n; i ++)
     {
        for(int j = 1; j < n-i+1; j++) //(int j =N; j>i; j--)
        {
            cout<< j;
         }
        cout<< endl;

     }
}
 /*we run the outer loop for N times as we have to print N rows and since we have to print a right-angled triangle/pyramid which must be inverted, so the inner loop will run from 1 to (N-i)th integer in every row till we reach the Nth row where only ‘1’ would be left to get printed. For eg: in the 1st-row numbers from 1 to N get printed, in the 2nd-row numbers from 1 to (N-1) get printed, and so on.*/
int main(){

    int n ;
    cout<< "enter your choice boss: ";
    cin>> n;
    pattern(n);
}