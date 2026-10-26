class LRUCache {
   public:
    struct Node {
        int key;
        int value;
        Node* next;
        Node* prev;

        Node(int k, int v) {
            key = k;
            value = v;
            next = NULL;
            prev = NULL;
        };
    };

    unordered_map<int, Node*> m1;
    int limit;
    Node* head;
    Node* tail;

    LRUCache(int capacity) {
        limit = capacity;
        head = new Node(-1, -1);
        tail = new Node(-1, -1);
        head->next = tail;
        tail->prev = head;
    }

    int get(int key) {
        if (m1.find(key) == m1.end()) {
            return -1;
        }
        Node* ansNode = m1[key];
        int ans = ansNode->value;
        m1.erase(key);
        deleteNode(ansNode);

        addNode(ansNode);
        m1[key] = ansNode;

        return ans;
    }

    void addNode(Node* newNode) {
        Node* oldHead = head->next;
        head->next = newNode;
        oldHead->prev = newNode;
        newNode->next = oldHead;
        newNode->prev = head;
    };

    void deleteNode(Node* oldNode) {
        Node* oldPrev = oldNode->prev;
        Node* oldNext = oldNode->next;
        oldNext->prev = oldPrev;
        oldPrev->next = oldNext;
    };

    void put(int key, int value) {
        if (m1.find(key) != m1.end()) {
            Node* oldNode = m1[key];
            deleteNode(oldNode);
            m1.erase(key);
        }

        if (m1.size() == limit) {
            m1.erase(tail->prev->key);
            deleteNode(tail->prev);
        }

        Node* newNode = new Node(key, value);
        addNode(newNode);
        m1[key] = newNode;
    }
};
