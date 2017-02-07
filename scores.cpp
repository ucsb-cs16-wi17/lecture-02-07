//scores.cpp
//Diba Mirza
//Program that stores student scores and
//calculates the average of the scores

#include<iostream>

using namespace std;


int main(){
    int score1, score2, score3, score4, score5;
    score1 = 65;
    score2 = 85;
    score3 = 97;
    score4 = 75;
    score5 = 95;
    double avg_score = (score1+score2+score3+score4+score5)/5;
    cout<<"\nAverage score is: "<<avg_score<<endl;
    return 0;
}

