import java.util.Arrays;
import java.util.Scanner;

public class Main {
    static boolean nextPermutation(int[] a) {
        int i = a.length-1;
        while (i > 0 && a[i-1] >= a[i]) {
            i -= 1;
        }

        // 마지막 순열
        if (i <= 0) {
            return false;
        }

        int j = a.length-1;
        while (a[j] <= a[i-1]) {
            j -= 1;
        }

        int temp = a[i-1];
        a[i-1] = a[j];
        a[j] = temp;

        j = a.length-1;
        while (i < j) {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i += 1;
            j -= 1;
        }
        return true;
    }

    static int calculate(int[] arr) {
        int i, result=0;
        for(i=0;i<arr.length - 1;i++) {
            result += Math.abs(arr[i]-arr[i+1]);
        }
        return result;
    }

    public static void main(String[] args) throws Exception {
        int N;


        Scanner sc = new Scanner(System.in);


        N = sc.nextInt();
        int[] arr = new int[N];
        int i;
        for(i=0;i<N;i++) {
            arr[i] = sc.nextInt();
        }

        Arrays.sort(arr);

        int max = calculate(arr);

        while(nextPermutation(arr)) {
            int curResult = calculate(arr);
            if(curResult > max) {
                max = curResult;
            }
        }

        System.out.println(max);
    }
}
