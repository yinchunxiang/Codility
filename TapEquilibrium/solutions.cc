#include <iostream> 
#include <vector> 
#include <stdlib.h> 
#include <numeric> 



using namespace std;


int solution(vector<int> &A) {
    // write your code in C++11 (g++ 4.8.2)
    int all_sum = std::accumulate(A.begin(), A.end(), 0);
    int min_diff = 100000000;
    int left = 0;
    for (int i = 0; i < A.size() - 1; ++i) {
        left += A[i];
        auto right = all_sum - left;
        auto diff = abs(left - right);
        if (diff < min_diff) {
            min_diff = diff;
        }
    }
    return min_diff;
}


int main(int argc, const char *argv[])
{
    {
        vector<int> v = {2, 2};
        cout << solution(v) << endl;
    }
    {
        vector<int> v = {2, -2};
        cout << solution(v) << endl;
    }
    
    return 0;
}



