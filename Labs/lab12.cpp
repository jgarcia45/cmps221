/* Juan Garcia
 * Mrs. Connolly, CMPS 221
 * March 5, 2013
 * Lab 12
 */

#include <iostream>
#include <string>
#define SZ 3
using namespace std;

struct inventory
{
    char name[256];
    char description[256];
    char UPC[13];
    int stock;
};

int main()
{
    int x;

    inventory products[SZ];
    cout << "Enter number of items: ";
    cin >> x;
    while(x > SZ)
    {
        cout << "Too many items." << endl;
        cout << "Enter number of items: ";
        cin >> x;
    }
    for(int i = 0; i < x; i++)
    {
        cout << "Enter product name: ";
        cin.ignore();
        cin.getline(products[i].name, 256);
        cout << "Enter product description: ";
        cin.getline(products[i].description, 256);
        cout << "Enter UPC code: ";
        cin.getline(products[i].UPC, 13);
        cout << "Enter quantity in stock: ";
        cin >> products[i].stock;
        cout << endl;
    }
    cout << endl;
    cout << "Product Information is: " << endl;
    for(int i = 0; i < x; i++)
    {
        cout << "Name: " << products[i].name << "     ";
        cout << "UPC: " << products[i].UPC << "     ";
        cout << "Stock: " << products[i].stock << endl;
        cout << "Description: " << products[i].description << endl;
        cout << endl;
    }
    return 0;
}
