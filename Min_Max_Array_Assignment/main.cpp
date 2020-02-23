//10671406 - DAA Assignment

#include <iostream>
#include <string>
using namespace std;

struct Response {
    int minElement;
    int maxElement;
};

//Min and max elements of array function with three parameters
//1. The Array to Search
//2. The Length of the array
Response minMax(int baseArray[], int sizeOfBaseArray)
{
    //Block to check the length of the array as an empty array can not be searched through.
    if (sizeOfBaseArray <= 0) {
        throw "Array is empty";
    }else{
        //Block to traverse through baseArray[] to locate the least and greatest element in the array
        int min = baseArray[0];
        int max = baseArray[0];
        for(int i = 1; i< sizeOfBaseArray; i++){
                if(baseArray[i] < min){
                    min=baseArray[i];
                }
                if(baseArray[i] > max) {
                    max = baseArray[i];
                }
        }
        Response result = {min, max};
        return result;

    }
}

//Main function
int main()
{
    int arr[] = {12,63,53,78,9,34,66};
    int length = sizeof(arr)/sizeof(arr[0]);

    try{
        cout
        <<"The minimum element in the array is "
        <<minMax(arr, length).minElement
        <<" and the maximum element is "
        <<minMax(arr, length).maxElement;
    } catch (string e) {
        cout<<e;
    }

    return 0;
}
