/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*>meraMap;

        Node* curr=head;

        while(curr!=NULL){
            meraMap[curr]=new Node(curr->val);
            curr=curr->next;
        }

        curr=head;
        while(curr!=NULL){
            meraMap[curr]->next=meraMap[curr->next];
            meraMap[curr]->random=meraMap[curr->random];

            curr=curr->next;
        }
        return meraMap[head];

    }
};
