#include <bits/stdc++.h>
using namespace std;
#define ll long long

inline ll nxt()
{
    ll x;
    cin >> x;
    return x;
}

void ins_sort(vector<int> & arr){
    for (int i = 1; i < arr.size(); i++) {
        int key = arr[i];
        int  j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
int MedianOfMedians(vector<int> v,int k){

    if(v.size()<=5){
        ins_sort(v);
        return v[k-1];
    }

    vector<int> medians;
    
    for(int i = 0;i<v.size();i+=5){
        vector<int> temp(v.begin()+i,( i+5<v.size()? v.begin()+ i +5: v.end()));
        
        ins_sort(temp);

        medians.push_back(temp[temp.size()/2]);

    }

    int MedianofMedians_val = medians[medians.size()/2];

    vector<int> L,R;
    for(auto i: v) {
        if(i<=MedianofMedians_val) L.push_back(i);
        else R.push_back(i);
    }

    if(k<=L.size()) return MedianOfMedians(L,k);
    else return MedianOfMedians(R, k - L.size());

}
int main()
{
    int n = nxt();
    int k = nxt();
    int rank_ele = nxt();
    vector<int> v(n);
    for(int i =0 ;i<n;i++) v[i] = nxt();

    int KthLargest = MedianOfMedians(v,n-k+1);

    cout<<"Kth Largest Element : "<<KthLargest<<endl;
    int rank = 0;
    for(auto i: v) rank += (i<rank_ele);
    cout<<"Rank : "<<rank+1;
}