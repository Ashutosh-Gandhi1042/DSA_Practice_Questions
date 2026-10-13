class LRUCache {
private:
    int capacity;
    list<pair<int,int>>l1;
    unordered_map<int,list<pair<int,int>>::iterator>mp1;
public:
    LRUCache(int capacity) {
        this->capacity=capacity;
    }
    
    int get(int key) {
        if(mp1.find(key)==mp1.end())
        {
            return -1;
        }
        auto it=mp1[key];
        int val=it->second;
        l1.erase(it);
        l1.push_front({key,val});
        mp1[key]=l1.begin();
        return val;
    }
    
    void put(int key, int value) {
        if(mp1.find(key)!=mp1.end())
        {
            l1.erase(mp1[key]);
            mp1.erase(key);
        }
        else if(l1.size()==capacity)
        {
            auto it =l1.back().first;
            l1.pop_back();
            mp1.erase(it);     
        }
        l1.push_front({key,value});
        mp1[key]=l1.begin();
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna