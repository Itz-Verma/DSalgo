void bubble_sort(int arr[], int n)
{
    int swapped = 0;
    int temp;
    for(int j=0; j<n; j++){
        for(int i=0; i<n-1-j; i++){
            if(arr[i] > arr[i+1]){
                temp = arr[i]; 
                arr[i] = arr[i+1]; 
                arr[i+1] = temp;
                swapped = 1;
            }
        }
        if(swapped == 0)
            return;
        swapped = 0;
    }
}
