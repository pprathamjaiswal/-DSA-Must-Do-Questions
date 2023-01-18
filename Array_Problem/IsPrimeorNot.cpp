#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool isPrime = false;
    for (int i = 2; i <= n; i++)
    {
        if (n % 2 == 0)
        {
            isPrime = true;
            break;
        }
    }
    if(isPrime==0){
        cout<<"Not a prime Number"<<endl;
    }
    else{
        cout<< "Is prime Number"<<endl;
    }
}