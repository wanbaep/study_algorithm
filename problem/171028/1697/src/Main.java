import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Main {
    private static int MAXINDEX = 100000;
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Queue<Integer> queue = new LinkedList<>();

        int[] visited = new int[MAXINDEX];
        int n, k;

        n = sc.nextInt();
        k = sc.nextInt();

        queue.add(n);

        while(!queue.isEmpty()) {
            System.out.println(queue.peek());
            queue.remove();
        }

    }
}
