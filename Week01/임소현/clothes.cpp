#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 0;
    unordered_map<string, int> clothes_type;
    int clothes_type_N; // 의상의 종류 개수

    for (int i = 0; i < size(clothes); i++) {
        clothes_type[clothes[i][0]]++; // 의상 종류별로 의상의 개수 저장
    }
    clothes_type_N = size(clothes_type);

    

    return answer;
}