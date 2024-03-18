// class TrieNode{
//     public:
//     TrieNode* children[26];
//     bool isEnd;

//     TrieNode(){
//         this->isEnd = false;
//         for(int i = 0 ;i <26;i++){
//             children[i] = NULL;
//         }
//     }
// };
// class Trie {
// public:
//     TrieNode* root;
//     Trie() {
//         root = new TrieNode();
//     }
    
//     void insert(string word) {
//         TrieNode* child = root;
//         for(auto i: word){
//             if(child->children[i - 'a'] == NULL) child->children[i - 'a'] = new TrieNode();
//             child = child->children[i-'a'];
//         }
//         child->isEnd = true;
//     }
    
//     bool search(string word) {
//         TrieNode* child = root;
//         for(auto i: word){
//             if(child->children[i - 'a'] == NULL) return false;
//             child = child->children[i-'a'];
//         }
//         return child->isEnd;
//     }
    
//     bool startsWith(string prefix) {
//         TrieNode* child = root;
//         for(auto i: prefix){
//             if(child->children[i - 'a'] == NULL) return false;
//             child = child->children[i-'a'];
//         }
//         return true;
//     }
// };