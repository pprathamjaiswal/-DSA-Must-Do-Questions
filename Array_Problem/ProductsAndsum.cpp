#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int subtractProductAndSum(int n) {
        int sum = 0;
        int product = 1;
        
        while(n>0){
            sum += n%10;
            product *= n%10;
            n/=10;
        }
        return product-sum;
}

int main() {
    int num = 5;
    cin >> num;
    cout<<subtractProductAndSum(num)<<"";
}