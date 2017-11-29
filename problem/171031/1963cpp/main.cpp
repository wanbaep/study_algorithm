#include <iostream>
#include <queue>
#include <string.h>

using namespace std;

#define MAXN 10000

bool prime[MAXN];
bool check[MAXN];
int dist[MAXN];

void setPrime() {
    int i, j;
    for(i=1009;i<MAXN;i++) {
        for(j=2;j<i;j++) {
            if(i%j == 0)
                break;
        }
        if(i==j)
            prime[i]=true;
    }
}

int changeOneDigit(int num, int index, int digitNum) {
    if(index == 0 && digitNum == 0)
        return -1;
    string temp = to_string(num);
    temp[index] = '0'+digitNum;
    return stoi(temp);
}

int main() {
    int testCase;
    int i;

    setPrime();

    cin>>testCase;

    for(i=0;i<testCase;i++) {
        queue<int> nQueue;
        memset(check,false,sizeof(bool)*MAXN);
        memset(dist,0,sizeof(int)*MAXN);
        int src, des;

        cin>>src>>des;

        nQueue.push(src);
        check[src] = true;
        int value = src;

        int k,j;
        while(!nQueue.empty() && value != des) {
            value = nQueue.front();
            nQueue.pop();

            for(k=0;k<4;k++) {
                for(j=0;j<=9;j++) {
                    int changedValue = changeOneDigit(value,k,j);

                    if(changedValue != -1 && prime[changedValue] && !check[changedValue]) {
                        check[changedValue] = true;
                        nQueue.push(changedValue);
                        dist[changedValue] = dist[value] + 1;
                    }
                }
            }
        }

        if(dist[des] == 0) {
            if(src != des) {
                cout<<"Impossible"<<endl;
            } else {
                cout<<dist[des]<<endl;
            }
        } else {
            cout<<dist[des]<<endl;
        }
    }
    return 0;
}