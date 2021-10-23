#include <iostream>
#include <climits>

using namespace std;


void bubble_sort (int arr[], int n)
{
    
    for (int itr = 1; itr <= n-1; itr++)
    {
        
        // Pairwise Swapping in the unsorted array elements
        
        for (int j = 0; j<= (n-itr-1) ; j++)
        {
            
            if (arr[j] > arr[j+1])
            {
                
                swap (arr[j], arr[j+1]);
                
            }
            
        }
        
    }
    
    
}



int main()
{

    
    int num, key;
    
    cout << "Enter the number of elements in array: ";
    cin >> num;    // taking the no of elements in array
    
    int a[1000]; // max constraint size

    for (int i = 0; i < num; i++)
    {
        
        cin >> a[i];
        
    }
    
    bubble_sort(a,num);
    
    for (int i =0; i<num; i++)
    {
        
        cout << a[i] << " , ";
        
    }
    
    
    
    
    
    return 0;
}
