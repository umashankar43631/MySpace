namespace sort{
        int Partition(int *arr, int low, int high)
        {
                int pivot = arr[low],i = low, j = high, temp;
                while(i < j)
                {
                    while(arr[i+1] <= pivot)
                    {
                        i+= 1;
                    }
                    while(arr[j-1] > pivot)
                    {
                        j -= 1;
                    }
                    i++;
                    j--;
                    if( i < j)
                    {
                        // temp using only for swapping
                        temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
                temp = pivot;
                arr[low] = arr[j];
                arr[j] = temp;
                return j;
        }
        void QuickSort(int *arr, int low, int high)
        {
            int pivotPos;
            if(low < high)
            {
            pivotPos = Partition(arr, low, high);
            QuickSort(arr, low, pivotPos);
            QuickSort(arr, pivotPos+1, high);
            }
        }
}