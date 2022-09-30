#include<iostream>
using namespace std;

bool palindrome(string str){
    int left = 0;
    int right = str.length()-1;
    
    while (left < right)
    {
        if(str[left] != str[right]){
            return false;
            }
            left++;
            right--;
    }
    return true;
}

int main(){
    string str = "ABCDCBA";

    if(palindrome(str)) {
        cout<<"Is a palindrome";
    } 
    else {
        cout<<"Is Not palindrome";
    }
    return 0;
}