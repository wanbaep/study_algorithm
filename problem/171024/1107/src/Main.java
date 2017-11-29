import java.util.Arrays;
import java.util.Scanner;

public class Main {
    static boolean[] broken = new boolean[10];
    static int pressChannel(int channel) {
        if(channel == 0) {
            if(broken[channel]) {
                return 0;
            } else {
                return 1;
            }
        }
        int pressTime = 0;
        while(channel > 0) {
            if(broken[channel%10]) {
                return 0;
            }
            pressTime++;
            channel /= 10;
        }
        return pressTime;
    }

    public static void main(String[] args) throws Exception {
        int curChannel = 100;
        int N;
        int M;

        Arrays.fill(broken,false);
        Scanner sc = new Scanner(System.in);

        N = sc.nextInt();
        M = sc.nextInt();

        int i;
        int brokenInfo;
        for(i=0;i<M;i++) {
            brokenInfo = sc.nextInt();
            broken[brokenInfo] = true;
        }

        int result = Math.abs(N-curChannel);

        for(i=0;i<1000000;i++) {
            int pressTime = pressChannel(i);
            if(pressTime > 0) {

                pressTime += Math.abs(i-N);
                if(result > pressTime) {
                    result = pressTime;
                }
            }
        }

        System.out.println(result);
    }
}
