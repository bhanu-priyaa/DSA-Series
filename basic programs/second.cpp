 // type conversion  
 // char -> int  so how we can store it 
// #include <iostream>
// using namespace std;

// int main() {

//     char grade = 'A';  // ASCII VALUE = 65 and small a = 97
//     int value = grade;

//     cout << value << endl;

//     return 0;
// }



// type casting
// conversion of big data type to smalll data type

#include <iostream>
using namespace std;

int main () {

    double price = 101.9999;

    int newPrice = (int)price; //  want to type cast big value to small value through int

    cout << newPrice << endl;


    return 0;
}