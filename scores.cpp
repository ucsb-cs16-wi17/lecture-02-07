//scores.cpp
//Diba Mirza
//Program that stores student scores and
//calculates the average of the scores

#include<iostream>

using namespace std;


int main(){
    int scores[5];
    //Initialize scores
    scores[0] = 65;
    scores[1] = 85;
    scores[2] = 97;
    scores[3] = 75;
    scores[4] = 95;
    double sum=0.0;
    double sum_c11=0.0;
    for(int i=0;i<5;i++){
        sum= sum+ scores[i];
    }
    
    for(int score : scores){
        sum_c11=sum_c11+score;
    }

    double avg_score = sum/5;
    double avg_score_c11 = sum_c11/5;

    cout<<"\nAverage score is: "<<avg_score<<endl;
    cout<<"\nAverage score in c++11 is: "<<avg_score_c11<<endl;

    return 0;
}

