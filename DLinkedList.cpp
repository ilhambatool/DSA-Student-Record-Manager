#include "DLinkedList.h"

void Dlinkedlist::display()
{
    Node *temp = first;
    while (temp != 0)
    {
        cout << "reg no: " << temp->regNo << "\t";
        cout << "name: " << temp->name << endl;
        temp = temp->next;
    }
    cout << endl;
}

void Dlinkedlist::insertAtStart()
{
    Node *temp = new Node;
    temp->prev = 0;
    temp->next = 0;
    int x;
    string y;
    cout << "enter reg no: ";
    cin >> x;
    cout << "enter name: ";
    cin >> y;

    temp->regNo = x;
    temp->name = y;
    if (first == 0)
    {
        first = temp;
        last = temp;
    }
    else
    {
        temp->next = first;
        first->prev = temp;
        first = temp;
    }
    display();
}

void Dlinkedlist::insertAtEnd()
{
    Node *temp = new Node;
    temp->prev = 0;
    temp->next = 0;
    int x;
    string y;
    cout << "enter reg no: ";
    cin >> x;
    cout << "enter name: ";
    cin >> y;
    temp->regNo = x;
    temp->name = y;
    if (first == 0)
    {
        first = temp;
        last = temp;
    }
    else
    {
        last->next = temp;
        temp->prev = last;
        last = temp;
    }
    display();
}

void Dlinkedlist::insertBefore(int n)
{
    Node *ptr = first;
    bool found = false;
    while (ptr != 0 && found == false)
    {
        if (ptr->regNo == n)
            found = true;
        else
        {
            ptr = ptr->next;
        }
    }
    if (found == false)
        cout << "Not Found!" << endl;
    else
    {
        Node *temp = new Node;
        temp->prev = 0;
        temp->next = ptr;
        int x;
        string y;
        cout << "enter reg no: ";
        cin >> x;
        cout << "enter name: ";
        cin >> y;
        temp->regNo = x;
        temp->name = y;
        if (first == ptr)
        {
            ptr->prev = temp;
            first = temp;
        }
        else
        {
            temp->prev = ptr->prev;
            ptr->prev->next = temp;
            ptr->prev = temp;
        }
        display();
    }
}

void Dlinkedlist::insertAfter(int n)
{
    Node *ptr = first;
    bool found = false;
    while (ptr != 0 && found == false)
    {
        if (ptr->regNo == n)
            found = true;
        else
        {
            ptr = ptr->next;
        }
    }
    if (found == false)
        cout << "Not Found!" << endl;
    else
    {
        Node *temp = new Node;
        temp->prev = ptr;
        temp->next = 0;
        int x;
        string y;
        cout << "enter reg no: ";
        cin >> x;
        cout << "enter name: ";
        cin >> y;
        temp->regNo = x;
        temp->name = y;
        if (last == ptr)
        {
            ptr->next = temp;
            last = temp;
        }
        else
        {
            temp->next = ptr->next;
            ptr->next->prev = temp;
            ptr->next = temp;
        }
        display();
    }
}

void Dlinkedlist::deleteItem(int n)
{
    Node *ptr = first;
    bool found = false;
    while (ptr != 0 && found == false)
    {
        if (ptr->regNo == n)
            found = true;
        else
        {
            ptr = ptr->next;
        }
    }
    if (found == false)
        cout << "Not Found!" << endl;
    else if (first == last)
    {
        delete first;
        first = 0;
        last = 0;
        display();
    }
    else if (ptr == first)
    {
        first = ptr->next;
        delete ptr;
        first->prev = 0;
        display();
    }
    else if (ptr == last)
    {
        last = ptr->prev;
        delete ptr;
        last->next = 0;
        display();
    }
    else
    {
        ptr->prev->next = ptr->next;
        ptr->next->prev = ptr->prev;
        delete ptr;
        display();
    }
}

void Dlinkedlist::displayReverse()
{
    if (first == 0)
        cout << "empty list" << endl;
    else
    {
        Node *temp = last;
        while (temp != 0)
        {
            cout << "reg no: " << temp->regNo << "\t";
            cout << "name: " << temp->name << endl;
            temp = temp->prev;
        }
        cout << endl;
    }
}

void Dlinkedlist::FindByRegNo(int n)
{
    Node *ptr = first;
    bool found = false;
    while (ptr != 0 && found == false)
    {
        if (ptr->regNo == n)
        {
            found = true;
            cout << "reg no: " << ptr->regNo << "\t";
            cout << "name: " << ptr->name << endl;
        }
        else
        {
            ptr = ptr->next;
        }
    }
    if (found == false)
        cout << "Not Found!" << endl;
}

void Dlinkedlist::FindByName(string n)
{
    Node *ptr = first;
    bool found = false;
    while (ptr != 0 && found == false)
    {
        if (ptr->name == n)
        {
            found = true;
            cout << "reg no: " << ptr->regNo << "\t";
            cout << "name: " << ptr->name << endl;
        }
        else
        {
            ptr = ptr->next;
        }
    }
    if (found == false)
        cout << "Not Found!" << endl;
}