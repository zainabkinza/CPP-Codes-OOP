#include <iostream>
using namespace std;

int main() {
    int* intPtr;
    char* charArray;
    int Size;

    intPtr = new int;

    cout << "Enter an Integer Value: ";
    cin >> *intPtr;

    cout << "Enter the size of the Character Array : ";
    cin >> Size;

    charArray = new char[Size];

    cout << "Enter characters: ";
    for (int i = 0; i < Size; i++)
        cin >> charArray[i];

    cout << "Output: ";
    for (int i = 0; i < Size; i++)
        cout << charArray[i];

    cout << endl;

    return 0;
}
