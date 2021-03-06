// Q11. Create an array and write a menu driven program to traverse that array, search an element in that array, modify an element in the array.


#include <iostream>
using namespace std;

void menu()
{
    cout << "\n\tMENUs :";
    cout << "\n1: Traverse the array\n";
    cout << "2: Search an element in the array\n";
    cout << "3: Modify the element in the array\n";
    cout << "4: Exit\n";
}

void traverse(int arr[],int num)
{

        for (int i = 0; i < num; i++)    
        {    
            cout<<arr[i]<<"\n";    
        }    
}

void search(int arr[], int num) 
{
    int i, element;
   cout << "\nEnter Element to Search : ";
    cin>>element;

    for (i = 0; i < num; i++) 
    {
        
        if (arr[i] == element) 
        {
            cout << "\nLinear Search : Element  : " << element << " : Found :  Position : " << i + 1 << ".\n";
            break;
        }
    }

    if (i == num)
        cout << "\nSearch Element : " << element << "  : Not Found \n";
}
void modify(int arr[],int num)
{

int t,a[10],s;

  cout<<"\nGiven values are:";
  traverse(arr, num);

  cout<<"\nEnter the position to be update:";
  cin>>t;
  cout<<"\nEnter the value to be update:";
  cin>>s;
  for(int i=0;i<num;i++)
  {
    if(i==t-1)
    {
       arr[i]=s;
    }
  }
  cout<<"\nUpdated value is:";
  for(int i=0;i<num;i++)
  {
    cout<<arr[i]<<"\n";;
  }

}

 int main()
{
    int arr[100], i, num, choice;
    cout<<"Enter the size of array :\n";

    cin >> num;
    cout<<"Enter the elements of the array :\n";

    for (i = 0; i < num; i++) 
    {
        cin >> arr[i];
    }

    do {
        cout << "\n";
        menu();
        cout << "\nEnter your choice:\n ";
        cin >> choice;


        switch (choice) 
        {
        case 1:
           traverse(arr, num);
            break;
        case 2:
            search(arr, num);
            break;
        case 3:
            modify(arr, num);
            break;

        case 4:
            exit(0);
            break;
        default:
            cout << "INVALID CHOICE ";
        }
    }
    while (choice <4);


    return 0;
}

// OUTPUT:
// Enter the size of array :
// 5
// Enter the elements of the array :
// 12
// 34
// 56
// 78
// 90


//         MENUs :
// 1: Traverse the array
// 2: Search an element in the array 
// 3: Modify the element in the array
// 4: Exit

// Enter your choice:
//  1
// 12
// 34
// 56
// 78
// 90


//         MENUs :
// 1: Traverse the array
// 2: Search an element in the array
// 3: Modify the element in the array
// 4: Exit

// Enter your choice:
//  2

// Enter Element to Search : 90

// Linear Search : Element  : 90 : Found :  Position : 5.


//         MENUs :
// 1: Traverse the array
// 2: Search an element in the array
// 3: Modify the element in the array
// 4: Exit

// Enter your choice:
//  3

// Given values are:12
// 34
// 56
// 78
// 90

// Enter the position to be update:5

// Enter the value to be update:100

// Updated value is:12
// 34
// 56
// 78
// 100


//         MENUs :
// 1: Traverse the array
// 2: Search an element in the array
// 3: Modify the element in the array
// 4: Exit

// Enter your choice:
//  1
// 12
// 34
// 56
// 78
// 100


//         MENUs :
// 1: Traverse the array
// 2: Search an element in the array
// 3: Modify the element in the array
// 4: Exit

// Enter your choice:
//  7
// INVALID CHOICE
