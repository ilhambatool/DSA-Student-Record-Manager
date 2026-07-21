#include <iostream>
#include "Node.h"
#pragma once
class Dlinkedlist
{
    Node *first;
    Node *last;

public:
    Dlinkedlist()
    {
        first = 0;
        last = 0;
    }
    void display();
    void insertAtStart();
    void insertAtEnd();
    void insertBefore(int n);
    void insertAfter(int n);
    void deleteItem(int n);
    void displayReverse();
    void FindByRegNo(int n);
    void FindByName(string n);
    ~Dlinkedlist()
    {
        Node *temp = first;
        while (temp != 0)
        {
            Node *ptr = temp->next;
            delete temp;
            temp = ptr;
        }
        first = 0;
        last = 0;
    }
};