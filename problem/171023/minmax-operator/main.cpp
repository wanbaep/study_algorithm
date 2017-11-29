#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int Answer;
char header[12];

template<typename T>
void printArr(T* arr, int size) {
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void IntegerOperToChar(int* numOper, char* oper) {

    int i,j;
    j=0;
    for(i=numOper[0]; i>0;i--,j++) {
        oper[j] = '+';
    }
    for(i=numOper[1]; i>0;i--,j++) {
        oper[j] = '-';
    }
    for(i=numOper[2]; i>0;i--,j++) {
        oper[j] = '*';
    }
    for(i=numOper[3]; i>0;i--,j++) {
        oper[j] = '/';
    }
}
template<typename T>
void swap(T* arr, int a, int b) {
    T temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

template <typename T>
void dfs(T* arr, int depth, int size) {
    if(depth == size) {
        printArr(arr,size);
        return;
    }

    int i;
    for(i=depth;i<size;i++) {
        swap(arr,depth,i);
        dfs(arr,depth+1,size);
        swap(arr,depth,i);
    }
}

template<typename T>
bool compareArr(T* arr1, T* arr2, int size) {
    int i,count=0;
    for(i=0;i<size;i++) {
        if(arr1[i] == arr2[i])
            count++;
    }
    if(size==count)
        return true;
    return false;
}

template <typename T>
bool myPermutation(T* arr, int size, bool first) {
    int i=0;
    int j=0;

    if(first && compareArr(header,arr,size))
        return false;

    for(i=size-2; i>=0; i--) {
        if(arr[i] >= arr[i+1])
            continue;
        //not ascending from right
        for(j=size-1; j>i; j--) {
            if(arr[j] > arr[i])
                break;
        }
        break;
    }

    if(i>=0) {
        T temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    int start = i+1;
    int end = size-1;

    while(start < end) {
        T temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    return true;
}

int main(int argc, char** argv)
{
    int T, test_case;

    freopen("./input.txt", "r", stdin);

    int numOper[4];
    int number[12];
    char oper[12];
    int N;
    int i;
    cin >> T;
    for(test_case = 1; test_case  <= 1; test_case++)
    {
        cin>>N;

        for(i=0;i<4;i++) {
            cin>>numOper[i];
        }

        for(i=0;i<N;i++) {
            cin>>number[i];
        }

        printArr(numOper,4);
        printArr(number,N);

        IntegerOperToChar(numOper, oper);

        strcpy(header,oper);

        vector<char> a;

        for(i=0;i<N-1;i++) {
            a.push_back(oper[i]);
        }

        cout<<"next_permutation Result"<<endl;
        do{
            printArr(oper,N-1);
        } while(next_permutation(oper,oper+(N-1)));

//        cout<<"dfs Result"<<endl;
//        dfs(oper,0,N-1);

        cout<<"My permutation Result"<<endl;
        int k=0;
        bool first = false;
        do{
            printArr(oper,N-1);
        } while((first = myPermutation(oper,N-1,first)));
        Answer = 0;
        /////////////////////////////////////////////////////////////////////////////////////////////
        /*
           Implement your algorithm here.
           The answer to the case will be stored in variable Answer.
         */
        /////////////////////////////////////////////////////////////////////////////////////////////

        // Print the answer to standard output(screen).
        cout << "Case #" << test_case << endl;
        cout << Answer << endl;
    }

    return 0;//Your program should return 0 on normal termination.
}
