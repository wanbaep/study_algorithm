### ArrayPariSum
- 정수 배열이 주어지면, 두 수를 더한 결과가 `K`가 되는 모든 숫자 쌍을 구하는 문제

### 해결방법
1. 배열을 순회하며 두 수의 합이 `K`가 되는지 확인
    - 시간 복잡도 `O(n^2)`
2. 배열을 정렬한 후에 양쪽 끝에서 (왼쪽(left)과 오른쪽(right)) 에서 `K`가 되는 쌍을 찾으며 순서쌍의 합이 `K`보다 작은 경우 left를 증가시키고 큰 경우 right를 증가시킨다.
    - 시간 복잡도 `O(nlogn)`
3. 배열을 순차적으로 탐색하며 탐색을 한 값들은 List에 저장한다. 배열을 탐색하며 현재 인데스의 값과 더해서 `K`를 만드는 target값을 구하고  target값에 해당하는 값이 저장한 List에 있는 경우 순서쌍이 이루어진다.
    - 시간 복잡도 `O(n)` 이지만 Worst Case의 경우 O(n^2)이 될 수 있을 것 같다.
    - 이유는 탐색하는 배열에서 target에 해당되는 값을 찾는 반복문이 존재하기 때문이다.

### Source Code
- [C++](C++/ArrayPairSum) 코드
- [Java](java/ArrayPairSum) 코드

#### etc
- java 문법
    - Math.Min(Param1, Param2)
    > 2개의 인자 중 작은 값을 반환한다.

    - Math.Max(Param1, Param2)
    > 2개의 인자 중 큰 값을 반환한다.
