/**
* Created by Cooper Redfern
* Small program to highlight some of the unique features of C++
*/

#include <iostream>

using namespace std;

void sizeDemo(){
    // Variables
    int num = 255;
    char let = 'Z';
    // size in bytes each variable takes up displayed to console
    cout << "Storage size of num in bytes: " << sizeof(num) << endl;
    cout << "Storage size of char in bytes: " << sizeof(let) << endl;
}

void ptrAndRefDemo(){
    // Variables
    int num = 417;
    // pointer to num
    int* numPtr = &num;
    // array of numbers
    int numArray[10] = {22, 35, 23, 85, 34, 43, 40, 90, 1, 3};
    // pointer to array
    int* numArrayPtr = numArray;

    // location in memory of 'num' displayed to console using a reference of num
    cout << "num's location in memory is: " << &num << endl;

    // display the address of numPtr to console
    cout << "Address of pointer 'numPtr': " << numPtr << endl;
    // display the information stored at the address of the pointer to console
    cout << "Information at location in memory: " << *numPtr << endl;

    //display address and byte size of each item in numArray
    for(int i = 0; i < 10; i++) {
        cout << "Address of item #" << i + 1 << " in numArray: " << numArrayPtr << endl;
        cout << "Value of item #" << i + 1 << " in numArray: " << *numArrayPtr << endl;
        numArrayPtr++;
    }
}



int main(){
    sizeDemo();
    ptrAndRefDemo();
    return 0;
}