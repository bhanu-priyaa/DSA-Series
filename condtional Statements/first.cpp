#include <iostream>
using namespace std;

int main() {
   int n = -45;

   if (n >= 0) {   //return true value or false
    cout << "n us positive\n";
   
   } else {
   
   cout << "n is negative\n";
    
    }
   
   
    return 0;
}


// prblm: check age

#include <iostream>
using namespace std;

int main() {
   int age;
   cout << "Enter your age: ";
   cin >> age;

   if(age >= 18) {    // if -> true (+ve)
    cout << "You can vote\n";
   } else {          // else -> false (-ve)

    cout << "You cannot vote\n";
   }

     return 0;
}


// check odd or even 
#include <iostream>
using namespace std;

int main() {
   int n;
   cout << "Enter number: ";
   cin >> n;

   if (n%2 == 0) {
    cout << "even";
   } else {

    cout << "odd";

   }
   

     return 0;
}

// problem : check grades of a student 
// if-else if-else (conditional statement)
#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter your Marks: ";
    cin >> marks;

    if (marks >= 90) {
        cout << "A\n";
    } else if (marks >=80 && marks < 90) {  // use logical operator here &&
        cout << "B\n";
    } else  {
        cout << "c\n";
    }
    
    
     return 0;

}