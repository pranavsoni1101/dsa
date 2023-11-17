
class LinearSearch {
    public static int searchAlgo(int arr[], int len, int num){
        for(int i = 0; i < len; i++){
            if(arr[i]== num){
                return i;
            }
        }
        // This is a check to avoid any errors, if 
        // the number is not present in the array
        return -1;
    }    
    
    public static void main(String[] args) {
        int[] arr = {99, 50, 48, 80, 45, 20, 30, 12};
        int num = 2;
        
        int result = searchAlgo(arr, arr.length, num);
        if (result != -1)
            System.out.println(num + " is present at index: "+ result);
        else
            System.out.println("Number not present in array");
    }
}