import java.util.*;

public class Main {
    static int MAXN = 100001;

    public static void main(String[] args) {
        int n, k;

        boolean[] check = new boolean[MAXN];
        int[] dist = new int[MAXN];

        Scanner sc = new Scanner(System.in);

        n = sc.nextInt();
        k = sc.nextInt();

        Queue<Integer> queue = new LinkedList<>();

        queue.add(n);
        check[n] = true;
        int[] tmp = new int[3];
        int i;
        int curIdx = n;
        boolean isEnd = false;
        while(!queue.isEmpty() && curIdx != k) {
            curIdx = queue.peek();
            queue.remove();
            tmp[0] = curIdx+1;
            tmp[1] = curIdx-1;
            tmp[2] = curIdx*2;

            for(i=0;i<3;i++) {
                int location = tmp[i];
                if(location >= 0 && location < MAXN) {
                    if(!check[location]) {
                        queue.add(location);
                        check[location] = true;
                        dist[location] = dist[curIdx] + 1;
                        if(location == k) {
                            isEnd = true;
                            break;
                        }
                    }
                }
            }

            if(isEnd) {
                break;
            }
        }
        System.out.println(dist[k]);
    }
}
