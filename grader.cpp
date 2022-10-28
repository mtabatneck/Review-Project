//Libraries ------------------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include "grader.h"
//----------------------------------------------------------------------------------------------------------------------------------


double grader::lab_grader(std::vector<double> lab) {
    double lab_total;
    for (int i = 0; i<12; i++) {
        lab_total += lab[i];
    }
    lab_total /= 12; // divids by amount in vector
    lab_total *= 0.05; // weighs the grades
    return lab_total;
}

double grader::assignments_grader(std::vector<double> assignments){
    double assignment_total;
    for (int i = 0; i<5; i++) {
        assignment_total += assignments[i];
    }
    assignment_total /= 5; // divids by amount in vector
    assignment_total *= 0.5; // weighs the grades
    return assignment_total;
}


double grader::project_final_grader(double project_final) {
    project_final*= .35; // weighs the grades

    return project_final;

}

double grader::final_exam_grader(double final_exam) {
    final_exam*= .10; //weighs the grades

    return final_exam;

}


double grader::project_review_grader(double project_review) {
    project_review*= .03; // weighs the grades

    return project_review;

}
