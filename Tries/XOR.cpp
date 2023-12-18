#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()
#define f(i, n) for (ll i = 0; i < (n); i++)
#define fr(i, n) for (ll i = (n)-1; i >= 0; i--)
#define fex(i, s, n) for (ll i = s; i < (n); i++)
#define fexr(i, s, n) for (ll i = (n)-1; i >= s; i--)
inline ll nxt()
{
    ll x;
    cin >> x;
    return x;
}
void print(vector<ll> v, ll n)
{
    f(i, n) cout << v[i] + 1;
    cout << endl;
}

// https://bit.ly/3C6IHDp
// if x is given to find max xor possible with elements of array we insert array elements as bits in trie then we want to make our ans has maximum ones so we traverse trie to get opposite bit of ith bit in x

class TrieNode{
    public:
        TrieNode* links[2];

    bool containNode(int bit){
        return links[bit] != NULL;
    }

    void put(int bit,TrieNode* node){
        links[bit] = node;
    }
    TrieNode* get(int bit){
        return links[bit];
    }

};
class Trie{
    public:
    TrieNode* root;

    Trie(){
        this->root = new TrieNode();
    }
    void insert(int num){
        TrieNode* node = root;
        for(ll i = 31;i>=0;i--){
            int bit = (num>>i)&1; // bit exist  at ith place?
            if(!node->containNode(bit)){
                node->put(bit,new TrieNode());
            }
            node = node->get(bit);
        }
    }
};
int main()
{
    Trie* root = new Trie();

    root->insert(2);
    root->insert(3);
}