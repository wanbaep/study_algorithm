import java.util.Scanner;

public class Main {
    static void swap(int[] arr, int a, int b) {
        arr[a] = arr[a] + arr[b];
        arr[b] = arr[a] - arr[b];
        arr[a] = arr[a] - arr[b];
    }

    static boolean nextPermutation(int[] arr) {
        int n = arr.length;
        int i=n-1;
        while(i>0 && arr[i-1] >= arr[i]) {
            i-=1;
        }

        if(i <= 0) {
            return false;
        }
        int j=n-1;
        while(j>i && arr[j] <= arr[i-1]) {
            j-=1;
        }

        swap(arr,i-1,j);

        j = n-1;
        while(i<j) {
            swap(arr,i,j);
            i++;
            j--;
        }
        return true;
    }

    public static void main(String[] args) throws Exception {
        int n;
        int[][] w;
        int[] visitCase;

        Scanner sc = new Scanner(System.in);

        n = sc.nextInt();
        w = new int[n][n];
        visitCase = new int[n];

        int i,j;
        for(i=0;i<n;i++) {
            visitCase[i] = i;
            for(j=0;j<n;j++) {
                w[i][j] = sc.nextInt();
            }
        }

        int minCost = 0x7FFFFFFF;

        do {
            boolean canGo = true;
            int cost = 0;
            for(i=0;i<n;i++) {
                int src = visitCase[i];
                int des = visitCase[(i+1)%n];
                if(w[src][des] != 0) {
                    cost += w[src][des];
                } else {
                    canGo = false;
                    break;
                }
            }

            if(canGo && w[visitCase[n-1]][0] != 0) {
                if(minCost > cost) {
                    minCost = cost;
                }
            }

        } while(nextPermutation(visitCase));

        System.out.println(minCost);
    }
}
