#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int M;
    char cmd[100];
    int num=0;

    scanf("%d",&M);

    int S = 0;

    int i;
//    for(i=0;i<M;i++) {
    while(M--) {
        scanf("%s",cmd);

        if(!strcmp(cmd,"add")) {
            scanf("%d",&num); num--;
            S = S | (1<<num);
        } else if(!strcmp(cmd,"remove")) {
            scanf("%d",&num); num--;
            S = S & ~(1<<num);
        } else if(!strcmp(cmd,"check")) {
            scanf("%d",&num); num--;
            (S&(1<<num)) != 0 ? puts("1") : puts("0");
        } else if(!strcmp(cmd,"toggle")) {
            scanf("%d",&num); num--;
            S = S^(1<<num);
        } else if(!strcmp(cmd,"all")) {
            S=(1<<20)-1;
        } else if(!strcmp(cmd,"empty")) {
            S = 0;
        }
    }

    return 0;
}