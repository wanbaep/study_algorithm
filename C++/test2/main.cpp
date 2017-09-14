#include <iostream>

using namespace std;

int solution(int n);

int main() {
    cout<<solution(123)<<endl;
    return 0;
}


int solution(int n)
{
    int answer = 0;
    int multipled = 1;

    while(n > multipled) {
        multipled *= 10;
    }

    multipled = multipled/10;

    while(multipled != 0) {
        answer += n/multipled;

        n = n - multipled * (n/multipled);
        multipled /= 10;
    }

    return answer;
}