#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freqCount;
        
        for(int i=0; i<arr.size(); i++){
            freqCount[arr[i]]++;
        }
        unordered_set<int> freqSet;
        for(auto i: freqCount){
            freqSet.insert(i.second);
        }
        if(freqCount.size()==freqSet.size()){
            return true;
        }
        else{
            return false;
        }
    }
int main()
{
    int arr = {1, 2, 2, 1, 1, 3};
    int num = sizeof(arr) / sizeof(int);
    int ans = uniqueOccurrences(arr, num);

    if (ans)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}