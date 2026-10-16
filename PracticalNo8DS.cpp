#include <iostream>
#include <string>
using namespace std;

struct Book
{
    int id;
    string title;
    string author;
};

Book b[100];
int count = 0;

void insertBook()
{
    cout << "Enter ID: ";
    cin >> b[count].id;

    cout << "Enter Title: ";
    cin >> b[count].title;

    cout << "Enter Author: ";
    cin >> b[count].author;

    count++;
}

void displayBook()
{
    for (int i = 0; i < count; i++)
    {
        cout << "\nID: " << b[i].id;
        cout << "\nTitle: " << b[i].title;
        cout << "\nAuthor: " << b[i].author << "\n";
    }
}

void searchBook()
{
    int id;
    cout << "Enter ID to search: ";
    cin >> id;

    for (int i = 0; i < count; i++)
    {
        if (b[i].id == id)
        {
            cout << "Book Found: " << b[i].title;
            return;
        }
    }

    cout << "Book Not Found!";
}

int main()
{
    int choice;

    do
    {
        cout << "\n1.Insert Book";
        cout << "\n2.Display Books";
        cout << "\n3.Search Book";
        cout << "\n4.Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1: insertBook(); break;
            case 2: displayBook(); break;
            case 3: searchBook(); break;
            case 4: cout << "Exit"; break;
            default: cout << "Invalid choice";
        }

    } while (choice != 4);

    return 0;
}
