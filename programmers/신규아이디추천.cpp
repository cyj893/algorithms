#include <string>
#include <vector>

using namespace std;

string solution(string new_id) {
    string answer = "";

    string s12 = "";
    for(char c : new_id){
        if(c >= 'A' && c <='Z'){
            s12.push_back(c + 32); // s12 += c + 32;
        }
        else if(c >= 'a' && c <= 'z'
                || c >= '0' && c <= '9'
                || c == '-' || c == '_' || c == '.'){ // strchr("-_.", c)
            s12.push_back(c);
        }
    }

    for(int i = 0; i < s12.size(); i++){
        if(s12[i] == '.'){
            while(i < s12.size() && s12[i] == '.'){
                i++;
            }
            i--;
            answer.push_back('.');
        }
        else answer.push_back(s12[i]);
    }

    int i = 0;
    if(answer[0] == '.') answer = answer.substr(1);
    if(answer[answer.size()-1] == '.') answer = answer.substr(0, answer.size()-1);
	// if(answer.back() == '.') answer.pop_back();
	
    if(answer == "") answer = "aaa";

    if(answer.size() >= 16) answer = answer.substr(0, 15);
    if(answer[answer.size()-1] == '.') answer = answer.substr(0, answer.size()-1);

    while(answer.size() < 3){
        answer.push_back(answer[answer.size()-1]);
    }

    return answer;
}
