#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()
inline ll nxt()
{
    ll x;
    cin >> x;
    return x;
}
void Countsort(vector<int>& v,int dig){

    vector<int> count(10);

    for(auto i:v){
        count[( i/dig )%10]++;
    }

    vector<int> temp(v.size());

    // To make indexing while inserting in temp correct 
    for(int i = 1 ;i<10;i++) count[i] += count[i-1];

    // For Stablity
    for(int i = v.size()-1;i>=0;i--){
        temp[count[( v[i]/dig )%10] - 1] = v[i];
        count[( v[i]/dig )%10]--; 
    }

    for(int i =0;i<v.size();i++) v[i] = temp[i];

}
void radixsort(vector<int>& v,int maxi){

    for(int i = 1; maxi/i>0;i*=10){
        Countsort(v,i);
    }
}


int main()
{
    int n = nxt();
    vector<int> pos,neg;
    int maxi = INT_MIN;
    for(int i = 0;i<n;i++){
        int inp = nxt();

        maxi = max(maxi,abs(inp));

        if(inp<0) neg.push_back(abs(inp));
        else pos.push_back(inp);

    }

    radixsort(pos,maxi);
    radixsort(neg,maxi);

    int s = 0,e=neg.size()-1;

    while(s<e) swap(neg[s++],neg[e--]);

    vector<int> ans;

    for(auto i:neg) ans.push_back(-i);
    for(auto i:pos) ans.push_back(i);

    for(auto i:ans) cout<<i<<endl;


}