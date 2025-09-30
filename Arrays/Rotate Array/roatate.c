// User function Template for C

// Function to rotate an array by d elements in counter-clockwise direction.
void reverse(int arr[],int i, int j)
{
    while(i<j)
    {
        int temp;
        temp=arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

void rotateArr(int arr[], int n, int d) {
    // code here
    d = d%n;
    
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}
