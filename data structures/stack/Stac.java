import java.util.ArrayList;
import java.util.Arrays;
import java.util.Stack;

import javax.sound.sampled.SourceDataLine;
// next gratest element for An elemet
//  4 9 3 1 
// for 4 --> 9
class Stac{
    public static void main(String[] args) {
        Stack<Integer> s = new Stack<>();
        // s.push(11);
        // s.push(32);
        // s.push(21);
        // s.push(3);
        // int arr[]= {11, 13, 21, 3};
        // ArrayList<Integer> a = new ArrayList<>();
        // a.add(1);
        getNextGreatest(s);
        // getNextGreatestE(a);
    }
    public static void getNextGreatest(Stack s){
        // System.out.println(s.peek());
        // Integer arr[]= {11, 13, 21, 3}; // for nge
        int arr[] = { 11, 13, 21, 3 }; //for nse
        for(Integer i=0;i<arr.length;i++){
            while(s.empty() == false && ((Integer)s.peek() > arr[i])){
                System.out.println(s.peek() + " ---> "+ arr[i]);
                s.pop();
            }
            s.push(arr[i]);
        }
        while(!s.empty()){
            System.out.println(s.pop()+"--> -1");
        }
    }









        public static void getNextGreatestE(ArrayList<Integer> arr){
            // System.out.println(Arrays.toString(arr));
            System.out.println(arr);
        } 
}