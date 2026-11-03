/*
A book shop maintains the inventory of books that are being sold at the shop. 
The list includes details such as author, title, price, publisher and stock position.
 Whenever a customer wants a book, the sales person inputs the title and author to the system. 
If it is not available, “Not found” message is displayed.
If it is available, then the system displays the book details and 
 requests for the number of copies required.
If the requested copies are available,
the total cost of the requested copies is displayed; 
otherwise “Required copies not in stock” is displayed. 
Design a system using a class called books with suitable member functions and constructors.
 Use new operator in constructors to allocate memory space required.
*/


#include <iostream>
#include <cstring>
using namespace std;

class books
{
    char *author, *title, *publisher;
    float price;
    int stock;

public:

    // Constructor
    books(const char a[], const char t[], const char p[],
          float pr, int s)
    {
        author = new char[strlen(a) + 1];
        title = new char[strlen(t) + 1];
        publisher = new char[strlen(p) + 1];

        strcpy(author, a);
        strcpy(title, t);
        strcpy(publisher, p);

        price = pr;
        stock = s;
    }

    // Function to check book availability
    void search(char a[], char t[])
    {
        if (strcmp(author, a) == 0 &&
            strcmp(title, t) == 0)
        {
            cout << "\nBook Found!";
            display();

            int copies;
            cout << "\nEnter number of copies required: ";
            cin >> copies;

            if (copies <= stock)
            {
                cout << "Total Cost: Rs. "
                     << copies * price << endl;
            }
            else
            {
                cout << "Required copies not in stock."
                     << endl;
            }
        }
        else
        {
            cout << "\nNot found!" << endl;
        }
    }

    // Function to display book details
    void display()
    {
        cout << "\nAuthor: " << author;
        cout << "\nTitle: " << title;
        cout << "\nPublisher: " << publisher;
        cout << "\nPrice: Rs. " << price;
        cout << "\nStock: " << stock << endl;
    }

    // Destructor
    ~books()
    {
        delete[] author;
        delete[] title;
        delete[] publisher;
    }
};

int main()
{
    books b1("James Gosling", "Java",
             "Oracle", 500, 10);

    char a[50], t[50];

    cout << "Enter author name: ";
    cin.getline(a, 50);

    cout << "Enter book title: ";
    cin.getline(t, 50);

    b1.search(a, t);

    return 0;
}
