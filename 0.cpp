#include <stdlib.h>
#include <iostream>
#include <map>

using namespace std;

class Person
{
public:
    string name;
    int job_code;
    int hoursPerDay;
    int salaryPerMonth;
};

int main()
{
    string listOfJobs[] = {"Engineer", "Programmer", "Seller"};

    map<string, int> moneyPerHourForJob = {
        {"Engineer", 10},
        {"Programmer", 12},
        {"Seller", 3}};

    Person Michael;
    Michael.name = "Michael";
    Michael.job_code = 2;
    Michael.hoursPerDay = 3;
    Michael.salaryPerMonth = moneyPerHourForJob[listOfJobs[Michael.job_code]] * Michael.hoursPerDay * 20;

    cout << Michael.salaryPerMonth;
}