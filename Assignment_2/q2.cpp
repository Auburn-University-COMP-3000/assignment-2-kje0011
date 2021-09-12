#include <iostream>

using namespace std;

void computeCoin(int coinValue, int& number, int& amountLeft){

    cout << "Change can be given as: " << endl;
    
    // quarters
    number = coinValue/25;
    cout << number << " quarters" << endl;
    
    // dimes
    amountLeft = coinValue - (25*number);
    number = amountLeft/10;
    cout << number << " dimes" << endl;
    
    // pennies
    amountLeft = amountLeft - (10*number);
    cout << amountLeft << " pennies" << endl;

}


int main() {
    // variables
    int amount = 0, number = 0, amountLeft = 0;
    char response;
    do {

        do{
            cout << "Enter a value of change between 1 and 99:" << endl;
            cin >> amount;
        } while (amount < 1 || amount > 99);

        computeCoin(amount, number, amountLeft);
        cout << "Enter Y to calculate more change or N to exit:" << endl;
        cin >> response;

    }
    while (response == 'Y' || response == 'y');
    return 0;

}
