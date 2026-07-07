#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    // 전체 참가자 수 저장
    int N = size(participant);

    // 각 참가자가 완주자 명단에 있는지 확인
    for (int i = 0; i < N; i++) {

        // 동명이인일 때 그 참가자들 수와 완주자 수가 다르다면
        if (count(participant.begin(), participant.end(), participant[i]) != count(completion.begin(), completion.end(), participant[i])) {
            answer = participant[i]; // 해당 참가자를 정답으로 설정하고
            break; // 빠져나오기
        }

        // 명단에 존재하지 않는다면
        if (find(completion.begin(), completion.end(), participant[i]) == completion.end()) {
            answer = participant[i]; // 해당 참가자를 정답으로 설정하고
            break; // 빠져나오기
        }
    }

    return answer;
}