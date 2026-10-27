class MyHashMap {
    vector<pair<int , int>> mp;
public:
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        pair<int , int>temp;
        for(int i = 0; i<mp.size(); i++){

            if(mp[i].first == key){
                mp[i].second = value;
                break;
            }
        }

        temp = {key , value};
        mp.push_back(temp);
        
    }
    
    int get(int key) {
        for(int i = 0; i<mp.size(); i++){

            if(mp[i].first == key){
                return mp[i].second;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        for(int i = 0; i<mp.size();){

            if(mp[i].first == key){
                mp.erase(mp.begin()+i);
            }else{
                i++;
            }
        }
        
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */