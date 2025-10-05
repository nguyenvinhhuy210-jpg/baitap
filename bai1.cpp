#include <iostream>
using namespace std;
int main(){

    int n;
    int S=0;

    cout <<"hay nhap n: ";
    cin >>  n;
    if (n<0)
        {
        cout<<"vui long nhap so nguyen duong";
        }
    else{
        for (int i = 1; i <= n; i++)
            {
             S = S+i    ;
            }
        cout << S<< endl;
    }
    return 0;
}
