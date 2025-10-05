#include <iostream>
using namespace std;
#include <math.h>
int main(){

    int n;
    double S=1;

    cout <<"hay nhap n: ";
    cin >>  n;
    if (n<0)
        {
        cout<<"vui long nhap so nguyen duong";
        }
    else{
        for (int i = 1; i <= n; i++)
            {
             S = S*i;
            }
        cout << S<< endl;
    }
    return 0;
}



