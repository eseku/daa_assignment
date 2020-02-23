//10671406 - DAA Assignment

#include <iostream>

using namespace std;

//Linear Search function with three parameters
//1. The Array to Search
//2. The Length of the array
//3. The element to be searched for in the array
int linearSearch(int baseArray[], int sizeOfBaseArray, int elementToFind)
{
    //Block to check the length of the array as an empty array can not be searched through.
    if (sizeOfBaseArray <= 0) {
        return -1;
    }else{
        //Block to traverse through baseArray[] to locate the index of elementToFind
    for (int i = 0; i<sizeOfBaseArray; i++) {
            if (baseArray[i] == elementToFind) {
                return i;
            }
        }
        return -1;
    }

}


//Main function
int main()
{
    int arr[] = {2,4,6,3,7,0,8};
    int length = sizeof(arr)/sizeof(arr[0]);
    int arrayIndex = linearSearch(arr, length, 8);
    if(arrayIndex == -1) {
        cout<<"Element not present / Array is empty";
    } else {
        cout<<"The element "<<arr[arrayIndex]<<" can be found at index "<<arrayIndex;
    }
    return 0;
}
