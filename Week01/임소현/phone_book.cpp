#include <string>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

/*
    91.7점 -> 효율성 오답
*/

bool solution(vector<string> phone_book) {
    bool answer = true;
    int N = size(phone_book);

    // Step 1) 배열 정렬
    sort(phone_book.begin(), phone_book.end());

    // Step 2) 각 전화번호에 대해
    for (int i = 0; i < N-1; i++) {
        int length = size(phone_book[i]);
        vector<string> cut_string;

        // 그 전번 길이 만큼 뒤의 나머지 전번들을 자른 결과를 배열에 삽입
        for (int j = i+1; j < N; j++) {
            cut_string.push_back(phone_book[j].substr(0, length));
        }

        // 그 결과와 해당 전번이 같은지 체크 -> 같으면 answer를 false로 바꾸고 마침
        if (find(cut_string.begin(), cut_string.end(), phone_book[i]) != cut_string.end()) {
            answer = false;
            break;
        }

    }

    return answer;
}