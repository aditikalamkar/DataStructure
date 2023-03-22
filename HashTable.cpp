#include<iostream>
#include<math.h>
using namespace std;
#define MAX 1000

bool hashTable[MAX+1][2];

bool Search(int x)
{
    if(x>=0)
    {
        if (hashTable[x][0==1])
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        x = abs(x);
        if(hashTable[x][1])
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
/*The code in this function inserts an element into a hash table.
 The first parameter is the array of elements to be inserted, and the second parameter is the number of elements in the array.
 The code starts by looping through all of the elements in the array.
 If the element at position i in the array is greater than zero, then that element's hash value (which will be stored in hashTable[arr[i]][0]) will be set to 1.
 Otherwise, arr[i] will remain unchanged.
 Next, if abs(arr[i]) is greater than 0 (meaning that arr[i] has more zeroes than ones), then hashTable[abs(arr[i])][1] will also be set to 1.
 This ensures that any subsequent insertions into hashTable for arr[i] will overwrite whatever was already there for that value.
 The code will insert an element into an array, arr, using a binary search.
 If the value of the inserted element is greater than 0, then hashTable[arr[i]][0] will be set to 1.
 If the value of the inserted element is not greater than 0, then hashTable[arr[i]][1] will be set to 1.*/
void Insert(int arr[],int n)
{
    for (int i=0;i<=n;i++)
    {
        if (arr[i]>=0)
        {
            hashTable[arr[i]][0]=1;
        }
        else
        {
            hashTable[arr[i]][1]=1;
        }
    }
}

int main()
{
    int arr [] = {1,22,11,-20,-11};
    int n = sizeof(arr)/sizeof(arr[0]);
    Insert(arr,n);
    int find = 1;
    if(Search(find))
    {
        cout<<"Element is Present!!";
    }
    else
    {
        cout<<"Element is Not Present!!";
    }
    return 0;
}