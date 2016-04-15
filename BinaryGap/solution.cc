#include <iostream> 
#include <algorithm> 


using namespace std;

int solution(int N) {
    int result = 0;
    int index = 1;
    int count = 0;
    int begin = 33;
    int end = 0;
    while (index <= N && count++ < 32) {
        if (index & N) {
            if (end > begin) {
                int temp = end - begin - 1;
                result = std::max(result, temp);
            } 
            begin = end;
        } 
        end += 1;
        index <<= 1;
    }
    return result;
}

void print_binary(int N) {
    int c = (1 << 30);
    for (int i = 0; i < 31; ++i) {
        int temp = (N & c ) / c;
        cout << temp << " ";
        c >>= 1;
    }
    cout << endl;
}

int main(int argc, const char *argv[])
{
    print_binary(0);
    cout << solution(0) << endl;

    print_binary(5);
    cout << solution(5) << endl;

    print_binary(9);
    cout << solution(9) << endl;

    print_binary(529);
    cout << solution(529) << endl;
    print_binary(20);
    cout << solution(20) << endl;

    print_binary(15);
    cout << solution(15) << endl;

    print_binary(328);
    cout << solution(328) << endl;

    print_binary(1376796946);
    cout << solution(1376796946) << endl;

    print_binary(2147483647);
    cout << solution(2147483647) << endl;


    return 0;
}


