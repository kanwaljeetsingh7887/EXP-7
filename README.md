# EXP-7

## Aim:
**To study and implement C++ Arrays and Strings..**

## Software:
`Microsoft VSCode`

## Theory:
Array: • An arry is a fixed-size sequential collection of the elemnts of same data type. It consists of continuous memory locations. • The array's indexes begin at 0. Meaning that the first item saved at index 0 is [0]. • The final element of an array with size n is kept at index (n-1).


## Code: 7A
```
//KANWALJEET SINGH
//ENTC B2
//EXP 7A
//23070123124
#include<iostream>
using namespace std; 

// Program to print an array. 
int main() {
    int i;
    int a1[5]={19, 20, 5, 6, 7};
    int a2[5]={5,6,9,0,6};
    cout<<"Array is: ";

    for(i=0; i<5; ++i) {
        cout<<"Array is: "<<a1[i]<<" "<<"\n";
    }
    for(i=0; i<5; ++i) {
        cout<<"Array is: "<<a2[i]<<" "<<"\n";
    }
    return 0;
}
}
```
## Output:
![image](https://github.com/user-attachments/assets/1baf2841-f9b9-4bdd-9385-01ccf12fb557)



## Code: 7B 
```
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
```

## Output:
![image](https://github.com/user-attachments/assets/3ac84316-7e56-45c1-9280-707292d26df0)



## Code: 7C 
```
//KANWALJEET SINGH
//ENTC B2
//EXP 7C
//23070123124
int main() {
    int i,n;
    cout<<"Enter the size of array: ";
    cin>> n;
    int a[n]; 
    //create array
    for(i=0;i<n;i++)
    {
        cout<<"Enter elements "<<i+1<<": ";
        cin>>a[i];
    }
    //display input array
     cout<<"Array entered by the user is: ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"";
    }

    //reverse array
    cout<<"\n Reverse of the entered array is: "; 
    for (i=n-1; i>=0; i--) {
        cout<<a[i]<<"";
    }
    return 0; 
}
```
## Output:
![image](https://github.com/user-attachments/assets/7725fc56-4a69-438d-aa97-cb1bca28dbf1)



## Code: 7D 
```
//KANWALJEET SINGH
//ENTC B2
//EXP 7D
//23070123124

#include<iostream>
using namespace std;

int main() {
    int marks[5], i, j, num, a=0, count=0;
    for(i=0;i<5;i++) {
        cout<<"Enter element-"<<i+1<<": ";
        cin>>marks[i];
    }
    cout<<"Enter element to be searched: ";
    cin>>num;
    for(j=0;j<5;j++) {
        if(marks[j]==num) {
            cout<<"Position of "<<num<<": "<<j+1<<endl;
            count++;
            a=1;
        }
    }
    if(a==0) {
        cout<<"Element not present";
    }
    else if(a==1) {
        cout<<"Element is present: "<<count<<" times";
    }
}
```
## Output:
![image](https://github.com/user-attachments/assets/f985ffcc-4c2a-4265-90b3-aaf5acf45593)








## Conclusion:
We learnt the implementation and study of arrays and strings in C++ language.
