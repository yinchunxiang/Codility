#include <iostream> 
#include <vector> 

using namespace std;

vector<int> solution(vector<int> &A, int K) {
    // write your code in C++11 (g++ 4.8.2)
    int size = A.size();
    if (size <= 1 || K <= 0) {
        return A;
    }
    K = K % size;
    reverse(A.begin(), A.begin() + size - K);
    reverse(A.begin() + size - K, A.end());
    reverse(A.begin(), A.end());
    return A;
}

void printv(vector<int>& v){ 
    for (int j = 0; j < v.size(); j++) {
        cout << v[j] << " " ; 
    }
    cout << endl << endl;;
}   


int main(int argc, const char *argv[])
{
    vector<int> input = {3, 8, 9, 7, 6};
    auto a = solution(input, 1);
    printv(a);
    auto b = solution(input, 3);
    printv(b);

    auto c = solution(input, 5);
    printv(c);

    auto d = solution(input, 8);
    printv(d);


    return 0;
}



