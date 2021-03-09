#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    int check[201] = { 0, };
    for(int i = 0; i < numbers.size(); i++){
        for(int j = i + 1; j < numbers.size(); j++){
            if(check[ numbers[i]+numbers[j] ] == 0){
                check[ numbers[i]+numbers[j] ] = 1;
            }
        }
    }
    for(int i = 0; i < 201; i++){
        if(check[i]) answer.push_back(i);
    }
    return answer;
}