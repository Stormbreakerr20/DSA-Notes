#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[7] = {0,3,3,2,3,5,2};

    int freq[5+1]={0};    // rannge [0,5]
    int output[7]={0};

    for(int i=0;i<7;i++) freq[arr[i]]++;
    for(int i=1;i<=5;i++) freq[i] = freq[i] + freq[i-1];

    for(int i=6;i>=0;i--){   // can be traversed rev also  // we wrote rev so as stability
        freq[arr[i]]--;
        output[freq[arr[i]]] = arr[i];
    }

    for(int i=0;i<7;i++) cout<<output[i];

}