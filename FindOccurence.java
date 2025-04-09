import java.util.HashMap;

public class FindOccurence{
    public static int occurence(int[] arr){
        HashMap<Integer, Integer> frequency = new HashMap<>();

        for(int i = 0; i < arr.length; i++) {
            frequency.put(arr[i], frequency.getOrDefault(arr[i], 0) + 1);
        }

        int maxKey = -1 , maxValue = 0;

        for(var entry : frequency.entrySet()){
            if (entry.getValue() > maxValue) {
                maxValue = entry.getValue();
                maxKey = entry.getKey();
            }
        }

        return maxKey;

    }
    public static void main(String[] args) {
        int arr[] = {10,1,1,1,2,5,4,1};
        int answer = occurence(arr);
        System.out.println(answer);
    }
}