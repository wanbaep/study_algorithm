#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    int arr[20] = {0,};
    int input[20] = {0,};
    bool check[21] = {false,};
    int factorial[20] = {0,};

    int i;

    cin>>N;
    factorial[0] = 1;
    factorial[1] = 1;
    for(i=2;i<N;i++) {
        factorial[i] = factorial[i-1] * i;
    }

    for(i=1;i<=N;i++) {
        arr[i-1] = i;
    }
    int type;
    cin>>type;

    if(type == 1) {
        long long k;
        int j;
        cin >> k;
        vector<int> a(N);
        for (i=1; i<=N; i++) {
            for (j=1; j<=N; j++) {
                if (check[j]) continue;
                if (factorial[N-i] < k) {
                    k -= factorial[N-i];
                } else {
                    a[i-1] = j;
                    check[j] = true;
                    break;
                }
            }
        }
        for (i=0; i<N; i++) {
            cout << a[i] << ' ';
        }
        cout << '\n';
    } else if(type == 2) {
        for(i=0;i<N;i++) {
            cin>>input[i];
        }

        int j;
        int order = 1;
        int idx = 1;

        for(i=1;i<=N;i++) {
            for(j=1;j<input[i-1];j++) {
                if(!check[j])
                    order += factorial[N-i];
            }
            check[input[i-1]] = true;
        }

        cout<<order<<"\n";

    }

    return 0;
}