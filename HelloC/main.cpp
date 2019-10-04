//
//  main.cpp
//  HelloC
//
//  Created by Divya Kapoor on 9/27/19.
//  Copyright © 2019 Divya Kapoor. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, My name is Divya!";
    cout << endl;
    cout << "what are your hobbies?" ;
    return 0;
}

//Menaka Abraham
//  main.cpp
//TCES 203
//  Project 1

//This Program will computes an overall score for each applicant.

//  Created by Divya Kapoor on 9/27/19.
//  Copyright © 2019 Divya Kapoor. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int sat_act, v_scores, m_scores;
int act_scores, math_scores, r_scores, e_scores, s_scores;
int second;
float sat_applicant, act_applicant;
float gpa_scores, maximum_gpa, actual_gpa;
float applicant1_scores, applicant2_scores;

void admitMessage();
float getoverall_scores();
int getExamType();
float getsat_scores();
float calcsat_scores(int, int);
float getgpa_scores();
float calcgpa_scores(float, float);
float getact_scores();
float calcact_scores(int, int, int, int);
void display_scores(float, float);


int main1(int argc, const char * argv[]) {
    
    // insert code here...
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    
//    string applicant1;
//    cout << "Enter applicant's name: ";
//    getline(cin, applicant1);
    
    //ask the user for sat or act test taken
    cout << "do you have 1)SAT scores or 2)ACT scores?";
    if (sat_act == 1){
        getsat_scores();
        getact_scores();
        getoverall_scores();
    }
    
    //If SAT test taken ask the user to input verbal and math scores
    //int v_scores, m_scores
    //enter the verbal scores;
    //cin >> v_scores;
    //enter the math scores;
    //cin >> m_scores;
    // and same thing for act
    
    int v_scores;
    cout << "Enter the verbal scores: ";
    cin >> v_scores;
    
    int m_scores;
    cout << "Enter the math scores: ";
    cin >> m_scores;
    
    //If ACT test taken ask the user to input reading, english, math and science
    int r_scores;
    cout<< "Enter the reading scores: ";
    cin >> r_scores;
    
    int e_scores;
    cout << "Enter the English Scores: ";
    cin >> e_scores;
    
    int math_scores;
    cout<< "Enter the Math Scores: ";
    cin >> math_scores;
    
    int s_scores;
    cout << "Enter the Science scores: ";
    cin >> s_scores;
    
    //Turn the sat and act scores into numbers between 0 and 100 using the formula (exam result)
    int sat_scores;
    sat_scores = (2*(v_scores + m_scores))/24;
    int act_scores;
    act_scores = (2*(r_scores +e_scores + math_scores + s_scores))/1.8;
    
    //Turn the gpa into the numbers between 0 and 100 using the formula (gpa result)
    double actual_gpa;
    cout << "Enter your Actual GPA: ";
    cin >> actual_gpa;
    
    
    double max_gpa = 4.0;
    
    int gpa_scores;
    gpa_scores = (actual_gpa / max_gpa) * 100;
    
    //overall score is the sum of two numbers (exam result + gpa result)
    // if sat taken
    int overall_score;
    overall_score = sat_scores + gpa_scores;
    
    //else act taken
    
    overall_score = act_scores + gpa_scores;
    
    cout << "Hello, World!\n";
    return 0;
}
