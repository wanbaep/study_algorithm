import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        int e,s,m;

        Scanner sc = new Scanner(System.in);

        e = sc.nextInt();
        s = sc.nextInt();
        m = sc.nextInt();

        int i,j,k;
        int year=1;
        int count;

        for(i=0;i<=7980;i++,year++) {
            count = 0;
            if(e == (i%15)+1) {
                count++;
            }
            if(s == (i%28)+1) {
                count++;
            }
            if(m == (i%19)+1) {
                count++;
            }

            if(count==3) {
                break;
            }
        }
        System.out.println(year);
    }
}
