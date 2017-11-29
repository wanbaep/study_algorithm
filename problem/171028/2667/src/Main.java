import java.util.Arrays;
import java.util.Scanner;

public class Main {
    static int[] candidate;
    private static int searchArrayArea(int[][] arr, boolean[][] check, int size, int i, int j) {
        int len = arr.length;
        if(i >= len || j >= len || i < 0 || j < 0) {
            return size;
        }

        if(check[i][j] || arr[i][j] != 1)
            return size;

        int curSize=0;


        size++;
        check[i][j] = true;
        curSize = searchArrayArea(arr, check, size, i, j + 1);
        curSize = searchArrayArea(arr, check, curSize, i+1, j);
        curSize = searchArrayArea(arr, check, curSize, i, j - 1);
        curSize = searchArrayArea(arr, check, curSize, i-1, j);

        return curSize;
    }


    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        int[][] arr;
        boolean[][] check;

        n = Integer.parseInt(sc.nextLine());

        arr = new int[n][n];
        check = new boolean[n][n];

        int i,j;

        for(i=0;i<n;i++) {
            Arrays.fill(check[i], false);
        }

        for(i=0;i<n;i++) {
            String temp = sc.nextLine();
            for(j=0;j<n;j++) {
                arr[i][j] = temp.charAt(j)-48;
            }
        }

        candidate = new int[n*n];

        int area = 0;

        StringBuilder str = new StringBuilder();

        for(i=0;i<n;i++) {
            for(j=0;j<n;j++) {
                if(!check[i][j] && arr[i][j] == 1) {
                    int result = searchArrayArea(arr, check, 0, i, j);
                    if(result != 0) {
                        candidate[area] = result;
                        str.append(result);
                        area++;
                    }
                }
            }
        }

        int[] areaArr = new int[area];

        for(i=0;i<area;i++) {
            areaArr[i] = candidate[i];
        }

        Arrays.sort(areaArr);

        System.out.println(area);

        for(i=0;i<area;i++) {
            System.out.println(areaArr[i]);
        }
    }
}