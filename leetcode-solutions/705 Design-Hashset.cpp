class MyHashSet {
public:
    /** Initialize your data structure here. */
    unordered_set<int> h;
    MyHashSet() {
        
    }
    
    void add(int key) {
        h.insert(key);
    }
    
    void remove(int key) {
        unordered_set<int>::iterator found = h.find(key);
        if (!(found==h.end())) h.erase(found);
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        //unordered_set<int>::iterator endd = h.end();
        if(h.find(key)==h.end()) return false;
        return true;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */