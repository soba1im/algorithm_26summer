#include <string>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

/*
    [First Attempt]
    채점 결과
    정확성: 83.3
    효율성: 8.3 -> 효율성에서 fail
    합계: 91.7 / 100.0
*/

bool solution(vector<string> phone_book) {
    bool answer = true;
    int N = size(phone_book);

    // Step 1) 배열 정렬
    sort(phone_book.begin(), phone_book.end());

    // Step 2) 특정 전화번호에 대해 전번 길이만큼 다른 전번들을 자르고 일치하는지 확인
    for (int i = 0; i < N-1; i++) {
        int length = size(phone_book[i]); // 해당 전번 길이 저장
        vector<string> cut_string; // 자른 전번을 저장할 배열

        // 자른 전번을 저장
        for (int j = i+1; j < N; j++) {
            cut_string.push_back(phone_book[j].substr(0, length));
        }

        // 일치하는지 확인
        if (find(cut_string.begin(), cut_string.end(), phone_book[i]) != cut_string.end()) {
            answer = false;
            break;
        }

    }

    return answer;
}

int main