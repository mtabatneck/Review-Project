//Libraries ------------------------------------------------------------------------------------------------------------------------
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include "grader.h"
//----------------------------------------------------------------------------------------------------------------------------------


int main () {

//variables-------------------------------------------------------------------------------------------------------------------------
std::vector<double> lab;
std::vector<double> assignments;
double project_final;
double final_exam;
double project_review;
//----------------------------------------------------------------------------------------------------------------------------------


//enter grades----------------------------------------------------------------------------------------------------------------------
    std::cout <<"input grades from labs (in order)" << '\n';
    for (int i =0; i<12; i++){
      double n;
       std::cin >> n;
       lab.push_back(n);
    }

    std::cout <<"input grades from assignments (in order)" << '\n';
    for (int i = 0; i < 5; i++) {
        double n;
       std::cin >> n;
        assignments.push_back(n);
    }
    std::cout <<"input grade from final project (in order)" << '\n';

    std::cin >> project_final;

    std::cout <<"input grade from final exam (in order)" << '\n';

    std::cin >> final_exam;

    std::cout <<"input grades from review project (in order)" << '\n';

    std::cin >> project_review;
//---------------------------------1------------------------------------------------------------------------------------------------

//call functions--------------------------------------------------------------------------------------------------------------------
grader lab_obj = grader();
grader assignment_obj = grader();
grader project_final_obj = grader();
grader final_exam_obj = grader();
grader project_review_obj = grader();

double lab_f = lab_obj.lab_grader(lab);

double as_f = assignment_obj.assignments_grader(assignments);

double prog_f = project_final_obj.project_final_grader(project_final);

double fin_f = final_exam_obj.final_exam_grader(final_exam);

double rev_f = project_review_obj.project_review_grader(project_review);

std::cout << as_f + prog_f + fin_f + rev_f + lab_f;

//----------------------------------------------------------------------------------------------------------------------------------



    return 0;
}
