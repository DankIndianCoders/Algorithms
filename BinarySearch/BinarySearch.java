import java.util.*;
public class BinarySearch {
    public static void main(String[] args) {
        //for applying binary search array must be sorted
        int[] arr = {1,2,3,4,5,6};
        int target = 3;
        int ans = Binarysearch(arr,target);
        System.out.println(ans);
    }
    static int Binarysearch(int[] arr, int target){
        int low = 0;
        int high = arr.length-1;
        while (low<=high){
            int mid = low+(high-low)/2;
            if (target<arr[mid]){
                high=mid-1;
            }
            else if (target>arr[mid]){
                low=mid+1;
            }
            else {
                return mid;
            }
        }
        return -1; // if element is not found then -1 will be returned as an index
    }
}
