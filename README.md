# Review-Project

Group member names: Matthew Tabatneck, Mario Corado, Kyle Nadeau, Eddie Perez

Summary of project: 
For this project, we were required to create a series of algorithms together that would take in grade values for different tasks, and return a final grade based on the weighted averages provided by the course syllabus. These tasks consisted of labs, programming assignments, term projects, the final exam, and the review project. For our implementation of this review project, we decided to use a series of iterative functions to intake the provided grades for this course, while class functions and algorithms would combine and convert each grade into their respective weights, before returning a value indicative of your final grade.

Proof of planning:
We began having a general idea of we wanted to approach the code for this project, and we wrote this pseudo code to use as a guideline for what points to hit as we worked through the code-

----------------------------------------------------------
ask user for grades

calculate assignments grade (weighted 50%)

calculate Labs grade (weighted 5%)

calculate Final Project (weighted 35%)

calculate Final Exam (weighted 10%)

------(calculate review project (weighted EXTRA 3%))------

output total grade (including all weights)

----------------------------------------------------------


Features of our algorithm:

Inputs: 
As our code runs, it will ask the user to input their grades for assignments respective to each given task. For example, the code begins by asking the user to input their grades for each lab, and it will wait until the user inputs their grades for all lab sessions, before moving on to ask for the user’s grades for the next set of assignments.

Outputs: 
After the user is finished inputting all their grades for each assignment, the code will return the value of the student’s final calculated grade.
“Why was development like this important to your group”: Developing our code like this was important to us because we decided to program this assignment utilizing algorithms that were simple to understand and implement, while also ensuring that effectively utilized the requirements listed in the project’s description.

Comments: 
Comments describing each aspect of our code are implemented to make understanding it easier.

Compile:
Input: To input data into the program, the user must run the code and wait for it to ask for the grades for a given section of assignments. Once all grades have been entered for a respective section, the code will proceed to prompt the user to enter their grades for the next set of assignments. This will continue until the user has inputted every single grade into the program.

Compilation: 
To compile the code properly, the user needs the main.cpp, grader.cpp, and grader.h files. Then, when compiling the code, the user would need to compile it using the command:

g++ main.cpp grader.cpp

Then, the code can be run.
