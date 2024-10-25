// Find character lowercase or uppercase

// #include <iostream>
// using namespace std;

// int main () {
//     char ch;
//     cout << "Enter character: ";
//     cin >> ch;

//     if (ch >= 'a' && ch <= 'z') {
//         cout << "lowercase\n";
//     } else {
//          cout << "uppercase\n";
//     }
    
    
    
//     return 0; 
// }

// SECOND METHOD

#include <iostream>
using namespace std;

int main () {
    char ch;
    cout << "Enter character: ";
    cin >> ch;

    if (ch >= 65 && ch <= 90) {  //implicit type conversion
        cout << "uppercase\n";
    } else {
         cout << "lower case\n";
    }
    
    
    
    return 0; 
}
