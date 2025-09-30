int getSecondLargest(int *arr, int n) {
    // code here
    int lar = -1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>lar)
            lar = arr[i];
    }
    
    int second = -1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>second && arr[i]<lar)
            second = arr[i];
    }
    
    return second;
}
