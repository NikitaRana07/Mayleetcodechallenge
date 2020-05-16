class Trie {
public:
    /** Initialize your data structure here. */
    
     typedef struct Trienode{
            unordered_map<char,Trienode*>mp;
            bool isword;
    }Trienode;
    
    Trienode* root;
    
    Trie() {
        root = new Trienode;
        root->isword=false;
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        Trienode* current = root;
        
        for(int i=0;i<word.size();i++){
        
            if(current->mp.find(word[i])!=current->mp.end())
                current=current->mp[word[i]];
            else{
                Trienode* node = new Trienode; 
                node->isword = false; 
                current->mp[word[i]]=node;
                current=current->mp[word[i]];
            }
        }
        current->isword=true; 
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        Trienode* current = root;
        for(int i=0;i<word.size();i++){
            if(current->mp.find(word[i])!=current->mp.end())
                current=current->mp[word[i]];
            else
                return false;
        }
        if(current->isword==true)
            return true;
        return false;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string word) {
     Trienode* current = root;
        for(int i=0;i<word.size();i++){
            if(current->mp.find(word[i])!=current->mp.end())
                current=current->mp[word[i]];
            else
                return false;
        }
       
        return true;   
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
