#include <iostream> 
#include <vector> 
#include <algorithm> 


using namespace std;

vector<int> solution(int N, vector<int> &A) {
    int max_value = 0;
    int last_max = 0;
    vector<int> v(N, 0);
    for (int i = 0; i < A.size(); ++i) {
        if (A[i] == N + 1) {
            last_max = max_value;
        } else if (1 <= A[i] && A[i] <= N) {
            int pos = A[i] - 1;
            if (v[pos] < last_max) {
                v[pos] = last_max + 1;
            } else {
                v[pos] += 1;
            }
            if (v[pos] > max_value) {
                max_value = v[pos];
            }
        }
    }
    for (int i = 0; i < N; ++i) {
        if (v[i]  < last_max) {
            v[i] = last_max;
        }
    }
    return v;
}



int main(int argc, const char *argv[])
{

    return 0;
}



