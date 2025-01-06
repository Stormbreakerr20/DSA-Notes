//  tries are type of data structre similar to tree where each trienode can have upto 26 childrens from A-Z 
//  if we enter input as ARM   and ART , DO

//            root
//            /  \
//           A   D
//          /     \
//         R      O
//        / \
//       M   T

// each trinode will have a char data, array of type trienode ,  terminal node as we check AR exist in it then algo will give true but we never entered AR so we need terminal for seacrh


#include<iostream>
using namespace std;

class trienode{
     
    public:
    char data;
    trienode* children[26];
    bool isterminal;

    trienode(char d){
        this->data=d;
        for(int i=0;i<26;i++){  
            children[i]=NULL;
        }
        isterminal=false;
    }
};

class Trie{
    public:
    trienode* root;

    Trie(){
        root = new trienode('\0');
    }

    void insertUtil(trienode* root, string word){
        //base
        if(word.length()==0){
            root->isterminal = true;
            return;
        }
        // ASSumption word in uppercase
        int index= word[0]-'A';
        trienode* child;

        //present
        if(root->children[index]!=NULL){
            child=root->children[index];
        }
        //absent;
        else{
            child=new trienode(word[0]);
            root->children[index]=child;            
        }

        //rec
        insertUtil(child,word.substr(1));
    }

    void insert(string word){
        insertUtil(root,word);
    }


    // Search 
    bool searchUtil(trienode* root , string word){
        if(word.length()==0){
            return root->isterminal;
        }

        int index = word[0]- 'A';
        trienode* child;

        if(root->children[index]!=NULL){
            child=root->children[index];
        }
        else{
            return false;
        }

        return searchUtil(child,word.substr(1));
    }

    bool search(string word){
        return searchUtil(root,word);
}

    // delete

    void deleteUtil(trienode*root , string word){

        if(word.length()==0){
            if(root->isterminal==false){
                cout<<"Word do not exist";
                return;
            }
            else{
                root->isterminal=false;
                return;
            }
        }

        int index = word[0]- 'A';
        trienode* child;

        if(root->children[index]!=NULL){
            child=root->children[index];
        }
        else{
            cout<<"Word do not exist";
            return;
        }

        deleteUtil(child,word.substr(1));
    }

    void del(string word){
        deleteUtil(root,word);
    }


};



int main(){
    Trie* root = new Trie();

    root->insert("LUVS");
    root->insert("LUS");
    root->insert("CAS");
    root->insert("TYR");
    root->insert("CAT");
    // TC insert = O(length of word)
    // TC search = O(length of word)
    // TC deletion = O(length of word)

    cout<<root->search("LUV")<<endl;
    cout<<root->search("LUVS")<<endl;


    // to remove simply search the word and make it's terminal as false
    root->del("LUVS");
    cout<<root->search("LUVS")<<endl;
}


//  important: :    hashmaps also take o(length of word) so why trie :: because trie are optimized and use less space than hashmaps as in HM we need to create key value pair for each word

// TC in avg case is o(1) in HM but for worst case it is o(length word)

// also if we want to know words possible with AR then easy with trie as all are connected as tree but for HM we need to check each key 
// above method used in google searches
