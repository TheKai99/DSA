class MyHashSet {
    vector<int>data;
public:
    MyHashSet() {
        
    }
    
    void add(int key) {
        data.push_back(key);

        
    }
    
    void remove(int key) {
        erase(data ,key);
        
    }
    
    bool contains(int key) {
        auto it = find(data.begin() , data.end(),key);

        if(it != data.end()){
            return true;
        }
        else{
            return false;
        }
        
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */