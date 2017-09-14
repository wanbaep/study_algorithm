#include <iostream>

using namespace std;
int solution(int n);

int main() {
//    std::cout << "Hello, World!" << std::endl;
    int result = solution(123);
    cout<< result <<endl;
    return 0;
}

int solution(int n)
{
    int answer = 0;
    int multipled = 1;
    int digit = 1;

    while(n > multipled) {
        multipled *= 10;
        digit++;
    }

    multipled = multipled/10;
    digit--;

    while(multipled != 0) {
        answer += n/multipled;
        multipled /= 10;
    }

    return answer;
}