class Solution:
    def getSecondLargest(self, arr):
        # Code Here
        lar = max(arr)
        second = -1
        n = len(arr)
        for i in range(n):
            if(arr[i]>second and arr[i]<lar):
                second = arr[i]
                
        return second
