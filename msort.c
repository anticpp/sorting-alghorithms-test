void msort_merge(int arr[], int s1, int s2, int s3);

/* Merge sort
 */
void msort(int arr[], int start, int end) {
    if(start>=end){
 //       printf("msort return, start %d, end %d\n", start, end);
        return;
    }

    int middle = (end+start)/2;
//    printf("msort start %d, middle %d, end %d\n", start, middle, end);
    msort(arr, start, middle);
    msort(arr, middle+1, end);
    msort_merge(arr, start, middle+1, end);
}

/* 
 * arr[s1...s2-1]
 * arr[s2...s3]
 */
void msort_merge(int arr[], int s1, int s2, int s3) {
    for(;s1<s2 && s2<=s3;) {
        int x = arr[s1];
        int y = arr[s2];

        cnt_inc_comp();

        // Iterate until x is bigger than y
        if(x<=y) {
            s1++;
            continue;
        }
        
        // Shit to right
        for(int i=s2; i>s1; i--) {
            arr[i] = arr[i-1];
        }

        // Assign
        arr[s1] = y;

        s2++;
        s1++;
    }
}
