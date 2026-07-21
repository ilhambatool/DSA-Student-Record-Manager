#include <iostream>
#include "DLinkedList.h"
using namespace std;
int main()
{
    Dlinkedlist l;
    int c, n;
    string name;
    do
    {
        cout << "--- MENU ---\n";
        cout << "1. Insert At Start\n";
        cout << "2. Insert At End\n";
        cout << "3. Insert Before\n";
        cout << "4. Insert After\n";
        cout << "5. Display\n";
        cout << "6. Display Reverse\n";
        cout << "7. Delete Item\n";
        cout << "8. Find By RegNo\n";
        cout << "9. Find By Name\n";
        cout << "10. Exit\n";
        cout << "Enter your choice: ";
        cin >> c;
        switch (c)
        {
        case 1:
            l.insertAtStart();
            break;
        case 2:
            l.insertAtEnd();
            break;
        case 3:
            cout << "Enter RegNo ";
            cin >> n;
            l.insertBefore(n);
            break;
        case 4:
            cout << "Enter RegNo ";
            cin >> n;
            l.insertAfter(n);
            break;
        case 5:
            l.display();
            break;
        case 6:
            l.displayReverse();
            break;
        case 7:
            cout << "Enter RegNo to delete: ";
            cin >> n;
            l.deleteItem(n);
            break;
        case 8:
            cout << "Enter RegNo to search: ";
            cin >> n;
            l.FindByRegNo(n);
            break;
        case 9:
            cout << "Enter Name to search: ";
            cin >> name;
            l.FindByName(name);
            break;
        case 10:
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Invalid choice.\n";
        }
    } while (c != 10);
    return 0;
}