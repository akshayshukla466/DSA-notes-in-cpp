#include<iostream>
using namespace std;

void pattern(int n){
     for(int i =0; i<=n; i ++)
     {
        for(int j = 0; j < i ; j++)
        {
            cout<< " ";
         }
         for(int j=0; j<2*n-(2*i+1);j++){
            cout<< "*";
         }

          for(int j = 0; j < i ; j++)
        {
            cout<< " ";
         }
        cout<< endl;

     }

}
/* In the first row (i=0) there are 0 spaces, 9 stars, then again 0 spaces. In the second row (i=1) there is 1 space, 7 stars, then again 1 space so we can say that there are i spaces, 2*N - (2*i+1) stars, and then again i space for each row where i is the row index. We thus simply run 3 inner loops, first for printing the spaces, then the stars, and then the spaces again.*/
int main(){

    int n ;
    cout<< "enter your choice boss: ";
    cin>> n;
    pattern(n);
}