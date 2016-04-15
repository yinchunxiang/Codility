#include <iostream> 
#include <vector> 

using namespace std;


int solution(vector<int> &A) {
    int result = -1;
    for (int i = 0; i < A.size(); ++i) {
        if (A[i] == i + 1) {
            continue;
        }
        while (A[i] - 1 >= 0 && A[i] - 1 < A.size() && A[i] != A[A[i] - 1]) {
            swap(A[i], A[A[i] - 1]);
        }
    }
    for (int i = 0; i < A.size(); ++i) {
        if (A[i] != i + 1) {
            return i + 1;
        }
    }
    return A.size() + 1;
}

int main(int argc, const char *argv[])
{
    
    return 0;
}




