/*
¿ÏÀüÅ½»ö
*/ 


#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    
    int aa[5]  = {1, 2, 3, 4, 5};
    int ba[8]  = {2, 1, 2, 3, 2, 4, 2, 5};
    int ca[10] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
	int a = 0, b = 0, c = 0;
	/*
	vector<int> score(3);
	*/
    int ai = 0, bi = 0, ci = 0;
    for(int i = 0; i < answers.size(); i++){
        ai %= 5;
        bi %= 8;
        ci %= 10;

        if(aa[ai] == answers[i]) a++;
        if(ba[bi] == answers[i]) b++;
        if(ca[ci] == answers[i]) c++;

        ai++; bi++; ci++;
        /*
        if(aa[i%5] == answers[i]) score[0]++;
        if(ba[i%8] == answers[i]) score[1]++;
        if(ca[i%10] == answers[i]) score[2]++;
        */
    }

    int maxNum = max(a, max(b, c));
    if(maxNum == a) answer.push_back(1);
    if(maxNum == b) answer.push_back(2);
    if(maxNum == c) answer.push_back(3);
    /*
    int maxNum = *max_element(score.begin(), score.end());
    for(int i = 0; i < 3; i++{
    	if(score[i] == maxNum) answer.push_back(i+1);
	}

    return answer;
}
