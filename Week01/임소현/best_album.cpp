#include <string>
#include <vector>
#include <map> // key 기준 자동정렬 유지
#include <unordered_set>
#include <unordered_map> // 사용 불가(순서 유지 필요)
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    vector<string> genre; // 누적합 기준 내림차순으로 장르 종류를 저장
    map<string, vector<int>> count_of_genres; // 장르별로 횟수 배열 생성
    map<string, int> hap; // 각 장르의 재생횟수 총합 저장

    // 각 배열의 요소에 대해
    for (int i = 0; i < size(genres); i++) {
        if (find(genre.begin(), genre.end(), genres[i]) == genre.end()) // 장르 종류 저장 리스트에 없다면 삽입
            genre.push_back(genres[i]);

        count_of_genres[genres[i]].push_back(plays[i]); // 장르에 맞는 count_of_genres key 부분의 배열에 삽입
        hap[genres[i]] += plays[i]; // 해당 장르에 재생횟수를 누적
    }

    for (auto& [k, v] : hap) {
        
    }
    return answer;
}