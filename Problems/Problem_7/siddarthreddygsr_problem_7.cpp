#include <iostream>
using namespace std;
int main() {
    int x;
    int n;
    int sum=0;
    cout << "enter a number\n";
    cin >> x;
     if(x>0)    
     {
         for(n=1;n<=x;n++)
     
     {
         sum+=n;
     }
     cout<< "the summation of "<< x << " is "<< sum;
     }
     else 
     {
         cout << "user input error!!!";
     }
}