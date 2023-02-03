#include <iostream>

int BinarySearch(int arr[], int startIndex, int endIndex, int val)
{
    // Only perform searching process
    // if the end index is higher than\
    // or equals to start index
    if(startIndex <= endIndex)
    {
        // find middle index for all sub-arrays
        int middleIndex = startIndex + (endIndex - startIndex) / 2;

        if(arr[middleIndex] == val)
        {return middleIndex;}

        // if the middle index value is greater than the searched value,
        // then return the index
        else if(arr[middleIndex] > val)
        {return BinarySearch(arr, startIndex, middleIndex-1, val);}
        else
        {return BinarySearch(arr,middleIndex+1, endIndex, val);}
    }
    return -1;
}
int main()
{
    std::cout<<"CARRIND BINARY SEARCH"<<'\n';

    // array sorted or structure of type here
    int arr[] = {12,24,25,45,98};



    // for arrays like vector.size;
    int arr_size = sizeof(arr)/sizeof(*arr);

    int searched_value;
    std::cout<<"Enter number wanted to find:"<<'\n';
    std::cin>>searched_value;

    int i = BinarySearch(arr, 0, arr_size-1, searched_value);

    if(i!=-1)
    {std::cout<<searched_value<<" is found at index: "<<i<<std::endl;}
    else
    {std::cout<<"Cant find: "<<searched_value<<std::endl;}

}