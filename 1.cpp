/*#include<iostream>
using namespace std;
 int main()
 {
cout<<" enter the size of arry "<<endl;
int n;
cin>>n;
int arry[n];
cout<<" enter the elements "<<endl;
for (int i = 0; i < n; i++)
{
    cin>>arry[i] ;
}
int key;
cout <<" enter the key  "<<endl;
cin>>key;
bool found = false;
for (int i = 0; i < n; i++)
{
    if( arry[i]==key)
    {
        cout<<" key at index "<<i<<"   ";
     found = true;
     break;
    }
return 0;
}
}*/

/*#include <iostream>
using namespace std;

int main() {
    // Input the size of the array
    cout << "Enter the size of the array: " << endl;
    int n;
    cin >> n;

    // Declare the array
    int arry[n];

    // Input the elements of the array
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arry[i];
    }

    // Input the key to search for
    int key;
    cout << "Enter the key: " << endl;
    cin >> key;

    // Search for the key in the array
    bool found = false; // Flag to indicate if the key is found
    for (int i = 0; i < n; i++) {
        if (arry[i] == key) {
            cout << "Key found at index: " << i << endl;
            found = true;
            break; // Exit the loop once the key is found
        }
    }

    // If the key is not found, output a message
    if (!found) {
        cout << "Key not found in the array." << endl;
    }

    return 0;
}*/
/*#include<iostream>
using namespace std;
int linearsearch( int arry[],int n,int key )
{
for (int i = 0; i < n; i++)
{
    if( arry[i]==key )
    {
        return i;
    }   
}
return -1;
}

 int main(){
    cout<<" enter the size of arry =  "<<"   ";
int n;
cin >> n;
int a[n];
cout<<" enter the element of arry ="<<"   ";
for (int i = 0; i < n; i++)
{
    cin>> a[i];
}
int key;
cout<<" enter the key to search "<<endl;
cin>>key;
cout<<linearsearch(a,n,key );

return 0;
}*/

#include<iostream>
using namespace std;
int binarysearch( int arry[],int n,int key )
{
int s = 0;
int e = n;
while (s <= n)
{
    int mid = s+e/2;
    if (arry[mid]==key)
    {
        return mid;
    }
    else if (arry[mid] > key)
    {
        e = mid - 1;
    }
    else
    {
      s=mid+1;
    }
}
return -1;
}
 int main(){
int n;
cout<<" enter the size "<<endl;
cin>>n;
int arry[n];
cout<<" enter the elements "<<endl;
for (int  i = 0; i < n; i++)
{
    cin>>arry[i];
}
int key ;
cout<<" enter the key to search "<<endl;
cin>>key;
cout<<binarysearch( arry,n,key);
return 0;
}







