#include<iostream>
using namespace std;




void print(int i,int n)
{ if(i > n) return;         // base case: i > n
    print(i + 1, n);          // recursive call: move towards n
    cout << i << endl;
}
int main(){
    int n;
    cout<<"Bolo boss kitni baar chaiye: ";
    
    cin>>n;
    print(1,n);
}