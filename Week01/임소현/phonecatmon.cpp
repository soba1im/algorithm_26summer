#include <vector>
#include <unordered_set>
using namespace std;

/* 
    ***중복 제거가 핵심***

    if 중복 제거값 <= n/2 -> return 중복제거값
    else -> return n/2
*/
int solution(vector<int> nums)
{
    int answer = 0;

    int phonecatmon_n = size(nums); // 폰켓몬 총 개수
    unordered_set<int> phonecatmon_type(nums.begin(), nums.end()); // 폰켄몬 중복 제거(종류 개수)

    if (phonecatmon_n / 2 <= size(phonecatmon_type))
        answer = phonecatmon_n / 2;
    else
        answer = size(phonecatmon_type);
    return answer;
}