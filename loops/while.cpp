#include <iostream>
using namespace std;

int main () {
    int count = 1;

    while(count <= 10) {
        cout << count << " ";
        count++;
    }

    cout << endl;
    return 0; 
}

// n

#include <iostream>
using namespace std;

int main () {
    int n = 100;
    int count = 1;

    while(count <= n) {
        cout << count << " ";
        count++;
    }

    cout << endl;
   return 0; 
}

// Infinite loop
// it is just an example, don't try

#include <iostream>
using namespace std;

int main () {
    int n = 100;
    int count = 1;

    while(count <= n) {
        cout << count << " "; // 1 1 1  1 1 1 1 because count is not updating (count++) 
       
    }

    cout << endl;
   return 0; 
}

// or we can use i, j, k type names in loops var only.
// example

#include <iostream>
using namespace std;

int main () {
    int n = 100;
    int i = 1;

    while(i <= n) {
        cout << i << " "; // 1 1 1  1 1 1 1 because count is not updating (count++) 
        i++;
    }

    cout << endl;
   return 0; 
}