import java.util.Scanner;

public class Main {
//    7 1 2 3 4 5 6 7
//    8 1 2 3 5 8 13 21 34
//    0

    static boolean nextPermutation(int[] arr) {
        int i,j;
        int n = arr.length;
        i = n-1;
        while(i > 0 && arr[i-1] >= arr[i]) {
            i-=1;
        }
        if(i<=0) {
            return false;
        }
        j = n-1;
        while(arr[j] <= arr[i-1]) {
            j-=1;
        }

        int temp = arr[i-1];
        arr[i-1] = arr[j];
        arr[j] = temp;

        j = n-1;
        while(i < j) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
        return true;
    }

    public static void main(String[] args) {
        int k;
        int[] numberList;
        int[] useList;
        Scanner sc = new Scanner(System.in);

        while(true) {
            k = sc.nextInt();
            if(k==0) {
                break;
            }

            numberList = new int[k];
            useList = new int[k];

            int i;
            for(i=0;i<k;i++) {
                numberList[i] = sc.nextInt();
            }

            for(i=0;i<6;i++) {
                useList[i] = 0;
            }
            for(;i<k;i++) {
                useList[i] = 1;
            }

            StringBuilder strBuilder = new StringBuilder();
            do {
                for(i=0;i<k;i++) {
                    if(useList[i] == 0) {
                        strBuilder.append(numberList[i]);
                        strBuilder.append(" ");
                    }
                }
                System.out.println(strBuilder.toString());
                strBuilder.delete(0,strBuilder.length());
            } while(nextPermutation(useList));

            System.out.println();

        }

    }
}
