#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    
    unordered_map<string, int> count;
    unordered_set<string> name(participant.begin(), participant.end()); // 이름의 종류만 남김(중복 제거)
    
    for (string s : participant) {
        count[s]++; // 이름에 대한 사람 수 계산(동명이인 고려)
    }

    for (string s : completion) {
        count[s]--; // 각 이름에 대해 완주자 수만큼 제거 -> 완주하지 못한 사람의 수만큼 남게 됨
    }

    for (string s : name) {
        // 각 이름에 대해 1명 이상 남은 이름을 출력
        if (count[s] > 0) {
            answer = s;
            break;
        }
    }

    return answer;
}