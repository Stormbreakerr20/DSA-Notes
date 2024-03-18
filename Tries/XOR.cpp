class Solution {
private:
class TrieNode{
    public:
    TrieNode* link[2];
    TrieNode(){
        link[0] = link[1] = NULL;
    }
};
class Trie{
    public:
    TrieNode* root;
    Trie()
    {
        root = new TrieNode();
    }

    void insert(int n){
        // upto 32 bits
        TrieNode* child = root;
        for(int i = 31;i>=0;i--){
            int bit = ((n>>i)&1);
            if(child->link[bit] == NULL) child->link[bit] = new TrieNode();
            child = child->link[bit];
        }
    }

    int  XOR(int n)
{
        TrieNode* child = root;
        int ans = 0;
        for(int i = 31;i>=0;i--){
            int bit = ((n>>i)&1);
            if(child->link[!bit]) {
                ans += 1<<i;
                child = child->link[!bit];
            }
            else {
                child = child->link[bit];
            }
        } 

        return ans;
}};
public:
    int findMaximumXOR(vector<int>& nums) {
        Trie* root = new Trie();
        int ans = 0;
        for(auto i: nums){
            root->insert(i);
        }
        for(auto i: nums){
            ans = max(ans,root->XOR(i));
        }
        return ans;
    }
};