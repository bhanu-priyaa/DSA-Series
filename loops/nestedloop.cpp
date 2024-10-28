#include <iostream>
using namespace std;

int main() {

   for(int i=1; i<=5; i++) {
    cout << "*****" << endl;
   }

 return 0;
}


#include <iostream>
using namespace std;

int main() {

    int  n = 10;
    for (int i=1; i<=n; i++) {
        cout << "*";
    }
    cout << endl;

 return 0;
}


#include <iostream>
using namespace std;

int main() {
    int n =10;
    for(int i=1; i<=n; i++) {  // line
       int  m = 5;
       for (int j=1; j<=m; j++) {
        cout << "*";
    }
    cout << endl;
    }
 return 0;
}