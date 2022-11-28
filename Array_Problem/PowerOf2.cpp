#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int num)
{
    // int count = 0;
    // if (num <= 0)
    // {
    //     return false;
    // }
    // while (num != 0)
    // {
    //     if (num & 1)
    //     {
    //         count++;
    //     }
    //     num = num >> 1;
    // }
    //     if (count == 1)
    //     {
    //         return true;
    //     }
    //     else
    //     {
    //         return false;
    //     }


    if(num<=0){
        return false;
    }
    // int ans = (num&(num-1));
    // if(ans == 0){
    //     return true;
    // }else
    // {
    //     return false;
    // }
    
    return((num&(num-1))==0);
    
};

int main()
{
    int num;
    cin >> num;
    int ans = isPowerOfTwo(num);
    if(ans){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    // cout << isPowerOfTwo(num) << endl;
}