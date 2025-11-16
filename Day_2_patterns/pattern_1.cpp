#include<iostream>
using namespace std;

void pattern(int n){
     for(int i =0 ; i<n; i ++)
     {
        for(int j = 0; j < n; j++)
        {
            cout<< "*";
         }
        cout<< endl;

     }





}

int main(){
    int n ;
    cin>> n;
    pattern(n);
}

/*we run the outer loop for N times since we have N rows to be printed, the inner loop also runs for N times as we have to print N stars in each row. This way we get a rectangular star pattern (square) with an equal number of rows and columns.*/