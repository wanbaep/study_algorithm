#include <iostream>

using namespace std;

bool contains(int* seen, int value);

int main() {
    int k=4;
    int arr[6] = {1,1,2,3,4,2};
    int seen[6] = {'\0'};
    int output[3][2] = {'\0'};
    int target = 0;
    int j=0, m=0;

    for(int i=0;i<6;i++){
        target = k-arr[i];
        if(!contains(seen,target)) {
            seen[j] = target;
            j++;
        } else {
            if(arr[i] < target){
                output[m][0] = arr[i];
                output[m][1] = target;
            } else {
                output[m][0] = target;
                output[m][1] = arr[i];
            }
            m++;
        }
    }

    for(int i=0; i<3; i++) {
        cout<<output[i][0]<<","<<output[i][1]<<endl;
    }
}

bool contains(int* seen, int value) {
    for(int i=0;i<6;i++){
        if(seen[i] != 0 && seen[i] == value) {
            return true;
        }
    }
    return false;
}