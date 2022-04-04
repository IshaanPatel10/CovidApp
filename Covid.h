//
// Created by Ishaan Patel on 4/1/22.
//

#include <string>
#include <iostream>
#include <iomanip>
using namespace std;


class Counties{
public:
    void setCountyName(string name){
        county_name = name;
    }
    string getCountyName(){
        return county_name;
    }
    void setCountyCases(int cases){
        county_cases = cases;
    }
    int getCountyCases(){
        return county_cases;
    }
    void setCountyDeathRate(int DR){
        county_death_rate = DR;
    }
    int getCountyDeathRate(){
        return county_death_rate;
    }
    void setCountySurivivalRate(int SR){
        county_name = SR;
    }
    int getCountySurvivalRate(){
        return county_survival_rate;
    }

private:

    string county_name;
    int county_cases;
    int county_death_rate;
    int county_survival_rate;
};



