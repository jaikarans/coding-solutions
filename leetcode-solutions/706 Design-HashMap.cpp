#include <iostream>
using namespace std;

class Node{
public:
    int key;
    int val;
    Node* next;

};


class MyHashMap {
public:
    /** Initialize your data structure here. */
    Node* head;
    bool first = true;
    MyHashMap() {
        head = new Node();
        //head->next = NULL;
    }

    /** value will always be non-negative. */
    void put(int key, int value) {
        if (first) {
            head->key = key;
            head->val = value;
            first = false;
        }
        else{
            //checking if key alredy exist
            Node* traverse = head;
            while(traverse!=NULL){
                if (traverse->key==key){
                    traverse->val = value;
                    return;
                }
                traverse = traverse->next;
            }

            //if key not exist add new node
            Node* new_node = new Node();
            new_node->key = key;
            new_node->val = value;
            new_node->next = head;
            head = new_node;
        }
    }

    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
        Node* traverse = head;
        while(traverse!=NULL){
            if (traverse->key==key) return traverse->val;
            traverse = traverse->next;
        }
        return -1;
    }

    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        //find the key
        Node* traverse = head;
        Node* pre = traverse;
        Node* tmp;
        //if first not
        if(traverse->key==key){
            tmp = head;
            head=head->next;
            tmp->~Node();
            return;
        }
        //if not first node
        while(traverse!=NULL){
            if(traverse->key==key){
                tmp = traverse;
                pre->next = traverse->next;
                tmp->~Node();
                return;
            }
            pre = traverse;
            traverse = traverse->next;
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