//KANWALJEET SINGH
//ENTC B2
//EXP 7B
//23070123124
#include <iostream>
#define S 4
using namespace std;

int main() {
    int array1[S];
    //take input from user
    cout << "Enter " << S << " elements of array: ";
    for (int index = 0; index < S; index++) {
        cin >> array1[index];
    }
  cout << endl;

    // display entered array ekements
    for (int j : array1) {
        cout << j << "  ";
    }

   return 0;
}