/* Insert sort
 */
void isort(int arr[], int start, int end) {
    for(int i=start+1; i<=end; i++) {
        // Save arr[i] as sentinal to avoid swap values
        int snl = arr[i];
        int j = i;
        for(; j>start; j--) {
            cnt_inc_comp();
            if(snl<arr[j-1]) {
                // Move [j-1] => [j]
                arr[j] = arr[j-1];
            } else {
                break;
            }
        }
        // Keep sentinal value to arr[j]
        arr[j] = snl;
    }
}
