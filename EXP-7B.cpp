//KANWALJEET SINGH
//ENTC B2
//EXP 7B
//23070123124
#include <iostream>
using namespace std;

int main() {
    int array1[10];
    //take input from user
    cout << "Enter "<< " elements of array: ";
    for (int index = 0; index < 10; index++) {
        cin >> array1[index];
    }
  cout << endl;

    // display entered array ekements
     for (int index = 0; index < 10; index++) {
              cout << array1[index];
    cout << endl;
    }

   return 0;
}
