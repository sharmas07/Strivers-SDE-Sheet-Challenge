#include<unordered_map>
class LRUCache
{
public:
    class node{
        public:
        int key;
        int val;
        node* next;
        node* prev;
        node(int _key, int value){
            key = _key;
            val = value;
        }
    };
    node* head = new node(-1,-1);
    node* tail = new node(-1,-1);
    int cap;
    unordered_map<int, node*> mp;
    LRUCache(int capacity)
    {
        // Write your code here
        cap = capacity;
        head->next = tail;
        tail->prev = head;

    }
    void addNode(node* NodeToBeAdded){
        node* temp = head->next;
        NodeToBeAdded ->next = temp;
        NodeToBeAdded->prev = head;
        head->next = NodeToBeAdded;
        temp->prev = NodeToBeAdded;
    }
    void deleteNode(node* NodeToBeDeleted){
        node* delNext = NodeToBeDeleted->next;
        node* delprev = NodeToBeDeleted->prev;
        delprev->next = delNext;
        delNext->prev = delprev;
    }
    int get(int key) 
    {
        // Write your code here
        if(mp.find(key) != mp.end()){
            node* resNode = mp[key];
            int res = resNode->val;
            mp.erase(key);
            deleteNode(resNode);
            addNode(resNode);
            mp[key] = head->next;
            return res;
        }
        return -1;
    }

    void put(int key, int value)
    {
        if(mp.find(key) != mp.end()){
            node* existingNode = mp[key];
            mp.erase(key);
            deleteNode(existingNode);
        }
        if(cap == mp.size()){
            mp.erase(tail->prev->key);
            deleteNode(tail->prev);
        }
        addNode(new node(key, value));
        mp[key] = head->next;
    }
};
