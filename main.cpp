#include <iostream>
#include <stack>

using namespace std;

int main(int argc, const char * argv[]) {
    int number, digit=0;
    stack<int> mystack;
    cout << "::Decimal-Binary Converter::" << endl;
    cout << "Enter a decimal number [Larger than 0]: ";
    cin >> number;
    while (number == 0) {
        cout << "ERROR: The number must be larger than 0." << endl;
        cout << "Re-enter a decimal number [larger than]: ";
        cin >> number;
    }
    
    cout << "Decimal number: " << number << endl;
    
    while (number > 0)
        {
            digit = number % 2;
            number = number / 2;
            mystack.push(digit);
        }
    
    cout << "Binary Number: ";
    while (!mystack.empty())
    {
        cout << mystack.top();
        mystack.pop();
    }
    cout <<"\nThank you\n";
    return 0;
}
