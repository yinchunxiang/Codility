#include <iostream> 
#include <vector> 
#include <numeric>  //accumulate

using namespace std;
///用这种方法也有问题
/// {1, 2, 3, 4} 和 {1,2,2,5}异或的结果是一样的
int solution(vector<int> &A) {
    int result = 0;
    for (int i = 0; i < A.size(); ++i) {
        result ^= (i + 1);
        result ^= A[i];
    }
    return (0 == result);
}

int main(int argc, const char *argv[])
{
    
    return 0;
}



