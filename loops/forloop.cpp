#include <iostream>
using namespace std;

int main () {
    int n = 3;

    for(int i=1; i<=n; i++) {
        cout << i << " ";
    }

    cout << endl;
  return 0; 
}


// Sum of numbers from 1 to n.
#include <iostream>
using namespace std;

int main () {
    int n = 3;
    int sum = 0;

    for(int i=1; i<=n; i++) {
        sum +=i;
    }
   

    cout << "sum = " << sum << endl;
   return 0; 
}

// use of break statement
#include <iostream>
using namespace std;

int main () {
    int n = 50;
    int sum = 0;

for(int i=1; i<=n; i++) {
    sum += i;
    if(i == 5) {
        break; //keyword
    }

}
  cout << "sum = " << sum << endl;

   return 0; 
}


//Sum of all odd numbers from 1 to N.
#include<iostream>
using namespace std;

int main () {
    int n = 10;
    int oddSum = 0;
    //print odd numbers
    for (int i=1; i<=n; i++) {
        if(i%2  != 0) {
            oddSum += i;
            // cout << i << " ";
        }
    }  
    cout << "odd sum = " << oddSum << endl;
    return 0;
}