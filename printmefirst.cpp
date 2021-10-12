#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>

#include "printmefirst.h"

using namespace std;

/*
Function Name: printmefirst
Purpose: This function, provided by Prof. Ron Sha, will print the student
name and course information involving the lab assignment for the week
 
@author Ron Sha

@param - name
@param - courseinfo
@return - none
*/


void printmefirst(string name, string courseinfo)
{
  //printf("Program written by: %s", name);
  //printf("Course Info: %s", courseinfo);

  cout << "Program written by: " << name << endl;
  cout << "Course Info: " << courseinfo << endl;

  time_t now = time(0);

  char* dt = ctime(&now);

  printf("Date: %s\n", dt);
}
