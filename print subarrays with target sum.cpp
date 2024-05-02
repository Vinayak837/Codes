/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tar;
    cin>>tar;
    vector<int> arr;
    int n;
    int search;
    while(cin>>n){
        arr.push_back(n);
    }
    int cur=0;
    int size=arr.size();
    unordered_map<int,int> freq;
    for(int i=0;i<size;i++){
        cur+=arr[i];
        if(cur==tar){
            for(int j=0;j<=i;j++){
                cout<<arr[j]<<" ";
            }
            cout<<endl;
        }
        search=cur-tar;
        if(freq.find(search)!=freq.end()){
            for(int j=freq[search]+1;j<=i;j++){
                cout<<arr[j]<<" ";
            }
            cout<<endl;
        }
        freq[cur]=i;
    }

    return 0;
}
