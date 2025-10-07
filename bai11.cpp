
#include <iostream>
using namespace std;
#include <math.h>
int main(){

    int n;
    int S=0;
    int x=1;

    cout <<"hay nhap n: ";
    cin >>  n;
    if (n<0)
        {
        cout<<"vui long nhap so nguyen duong";
        }
    else{
        for (int i = 1; i <= n; i++)
            {
             x = x * i;
             S = S + x;
            }
        cout << S<< endl;
    }
    return 0;
}



