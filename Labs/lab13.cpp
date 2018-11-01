/* Juan Garcia
 * Mrs. Connolly, CMPS 221
 * March 12, 2013
 * Lab 13
 */

#include <iostream>
#include <string>

using namespace std;

class inventory
{
    private:
        char name[256];
        char description[256];
        char UPC[13];
        int stock;
    public:
        inventory();
        void printProduct();
        void getProduct();
};

int main()
{
    inventory p1, p2;

    cout << "Enter the information for product 2...\n";
    p2.getProduct();

    cout << "\nProduct 1 (default values) information is:\n";
    p1.printProduct();

    cout << "\nProduct 2 (user-supplied values) information is:\n";
    p2.printProduct();

    return 0;
}

//Default Constructor
inventory::inventory()
{
    name[0] = '\0';
    description[0] = '\0';
    UPC[0] = '\0';
    stock = 0;
}

void inventory::printProduct()
{
    cout << "Name: " << name << "     ";
    cout << "UPC: " << UPC << "     ";
    cout << "Stock: " << stock << endl;
    cout << "Description: " << description << endl;
    cout << endl;
}

void inventory::getProduct()
{
    cout << "Enter product name: ";
    cin.getline(name, 256);
    cout << "Enter product description: ";
    cin.getline(description, 256);
    cout << "Enter UPC code: ";
    cin.getline(UPC, 13);
    cout << "Enter quantity in stock: ";
    cin >> stock;
}
