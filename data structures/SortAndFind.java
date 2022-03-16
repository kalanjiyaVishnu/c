import java.util.Arrays;

class SortAndFind{
    public static void main(String[] args) {
        int arr[] = {-20,10,-10,2,3,4,9};
         
        Arrays.sort(arr);

        
        boolean isFirstPos = true;
        
        for(int i=0;i<arr.length;i++){
            if(arr[i]>0){
                if(isFirstPos){
                    isFirstPos = false;
                 
                }
            }else continue;
            // System.out.print(" " + arr[i]);
        }
    }
}