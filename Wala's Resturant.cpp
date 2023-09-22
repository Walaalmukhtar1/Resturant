#include <iostream>
using namespace std;

int main() {
    int price;
    int calories;
    char order;
    string choice;

    cout << "What do you want to order? Enter 1 for pasta or 2 for pizza: ";
    cin >> order;

    if (order == '1') {
        price = 25;
        calories = 354;
        cout << "Pasta costs " << price << " Riyals, and it has " << calories << " calories. Do you want to buy it? ";
        cin >> choice;
        if (choice == "yes") {
            cout << "\n \n THANK YOU FOR VISITING WALA'S RESTAURANT \n \n PASTA \t \t " << price << " SAR";
        }
        else if (choice == "no") {
            cout << "OK";
        }
    }
    else if (order == '2') {
        price = 30;
        calories = 400;
        cout << "Pizza costs " << price << " Riyals, and it has " << calories << " calories. Do you want to buy it? ";
        cin >> choice;
        if (choice == "yes") {
            cout << "\n \n THANK YOU FOR VISITING WALA'S RESTAURANT \n \n PIZZA \t \t " << price << " SAR";
        }
        else if (choice == "no") {
            cout << "OK";
        }
    }

    return 0;
}
