#include <iostream>
#include <queue>

using namespace std;

#define MAXN 100000

int main() {
    int n,k;
    bool check[MAXN] = {false,};
    int dist[MAXN] = {0,};

    queue<int> nQueue;

    cin>>n>>k;

    nQueue.push(n);
    check[n] = true;
    int tmp[3] = {0,};
    bool isEnd = false;
    int curIdx = n;
    while(!nQueue.empty() && curIdx != k) {
        curIdx = nQueue.front();
        nQueue.pop();
        tmp[0] = curIdx+1;
        tmp[1] = curIdx-1;
        tmp[2] = curIdx*2;

        for(int i=0;i<3;i++) {
            int location = tmp[i];
            if(location >= 0 && location <= MAXN && !check[location]) {
                nQueue.push(location);
                check[location] = true;
                dist[location] = dist[curIdx] + 1;
            }
            if(location == k) {
                isEnd = true;
                break;
            }
        }

        if(isEnd) {
            break;
        }
    }

    cout<<dist[k]<<endl;

    return 0;
}