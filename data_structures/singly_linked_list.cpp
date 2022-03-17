#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node *next;
        Node (int data) {
            this->data = data;
            this->next = nullptr;
        }
};

class List {
    Node *head;
    public:
        List() {
            this->head = nullptr;
        }
        void prepend(int data) {
            Node *node = new Node(data);
            node->next = this->head;
            head = node;
            return;
        }
        void append(int data) {
            if (this->head == nullptr) {
                this->prepend(data);
                return;
            } else {
                Node *ptr = this->head;
                while (ptr->next != nullptr) {
                    ptr = ptr->next;
                }
                Node *node = new Node(data);
                ptr->next = node;
                return;
            }
        }
}



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    List nums;
    nums.append(1);
    nums.append(2);
    nums.append(3);
    nums.append(4);
    nums.deleteVal(1);
    nums.pop();
    nums.prepend(0);
    nums.reverse();
    nums.popHead();
    nums.display();
    return 0;
}