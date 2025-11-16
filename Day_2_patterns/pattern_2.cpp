#include<iostream>
using namespace std;

void pattern(int n){
     for(int i =0 ; i<n; i ++)
     {
        for(int j = 0; j <=i; j++)
        {
            cout<< "*";
         }
        cout<< endl;

     }

/*we run the outer loop for N times as we have to print N rows, and since we have to print a right-angled triangle/pyramid which must be upright, the inner loop will run for the row number in each iteration. For eg: 1 star for row 1, 5 stars for row 5, and so on.*/



}

int main(){
    int n ;
    cin>> n;
    pattern(n);
}