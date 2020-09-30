#include<iostream>

using namespace std;

/**
 * Node class
 * */
class Node {
    /**
     * Node data
     * */
    int data;

    /**
     * Next node address
     * */
    Node *next;
        
    public:
        /**
         * Node Constructor
         * **/
        Node(int newData)
        {
            data = newData;
            next = NULL;
        }

        /**
         * Set node next address
         * **/
        void setNext(Node *newNext)
        {
            next = newNext;
        }

        /**
         * Set node data
         * */
        void setData(int newData)
        {
            data = newData;
        }

        /**
         * Get node next address
         * */
        Node* getNext()
        {
            return next;
        }

        /**
         * Get node data
         * */
        int getData()
        {
            return data;
        }
};

/**
 * LinkedList Class
 * */
class LinkedList {
    /**
     * Store the number of node
     * */
    int count;

    public:
    
    /**
     * Linked list constructor
     * */
    LinkedList()
    {
        count = 0;
    }

    /**
     * Insert new node to the list
     * */
    Node* insert(Node *head, int newData)
    {
        Node *newNode = new Node(newData);
        Node *current = head;

        if (head == NULL) {
            return newNode;
        }

        while (current->getNext() != NULL)
        {
            current = current->getNext();
        }
        current->setNext(newNode);
        count++;

        return head;
    }

    /**
     * Display the list
     * */
    void display(Node *head)
    {
        Node *current = head;

        if (head == NULL) {
            cout << "The list is empty" << endl;
            exit(0);
        }

        while(current)
        {
            cout << current->getData() << " ";
            current = current->getNext();
        }
    }
    /**
     * Get a single node data
     * */
    int get(int index)
    {
        if (index <= 0) {
            return -1;
        }

        // Node *current = head;
        // for (int i = 1; i < index; i++) {

        // }
    }

    /**
     * Check the list is empty or not
     **/
    bool isEmpty()
    {
        return count == 0;
    }

    /**
     * Get the list size
     * */
    int size()
    {
        return count;
    }

    /**
     * Remove an item from the list
     * */
    int remove(Node *head)
    {
        if (head == NULL) {
            cout << "No item found to delete" << endl;
            exit(0);
        }

        Node *current = head;

        while (current->getNext()->getNext() != NULL)
        {
            current = current->getNext();
        }

        current->setNext(NULL);
        count--;

        return current->getNext()->getData();
    }

    /**
     * Remove item front from the list
     * */
    Node  *remove_first_node(Node *head) {
        if (head == NULL) {
            cout << "No item found to remove anymore !" << endl;
            return head;
        }

        return head->getNext();
    }
};

int main()
{
    Node *head = NULL;
    LinkedList myslist;

    int i = 0;
    while (i <= 20)
    {   
        head = myslist.insert(head, i);
        i++;
    }

    head = myslist.insert(head, 10);
    head = myslist.insert(head, 20);
    head = myslist.insert(head, 8880);

    cout << "Size of list " << myslist.size() << endl;
    head = myslist.remove_first_node(head);
    cout << "Size of list " << myslist.size() << endl;
    
    
    head = myslist.remove_first_node(head);
    myslist.display(head);
}