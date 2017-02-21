/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Feburary 21, 2016, 11:30 AM
 * Purpose:  Budget
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants
const float PERCENT=100.e0f;    //Percentage
const float Billion=1.0e9f;    //Conversion to Billion
const float Trillion=1.0e12f;  //Conversion to Trillion

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float fedBudg=3.54e12f;    //3.54 Trillion $'s 2016 Fed Budget
    float milBudg=0.580e12f;   //580 Billion $'s 2016 Fed Budget
    float nasaBudg=18.5e9f;    //18 Billion $'s 2016 Fed Budget
    float perMil,perNasa;      //Percentage Budget
    
    //Map inputs to outputs or process the data
    perMil=milBudg/fedBudg*PERCENT;
    perNasa=nasaBudg/fedBudg*PERCENT;
    
    //Output the transformed data
    cout<<"Federal Budget = $"<<fedBudg<<"trillion"<<endl;
    cout<<"Military Budget = $"<<milBudg/Billion<<"Billion"<<endl;
    cout<<"NASA Budget = $"<<nasaBudg/Billion<<"Billion"<<endl;
    cout<<"Military Budget percentage = "<<perMil<<"%"<<endl;
    cout<<"NASA Budget percentage = "<<perNasa<<"%"<<endl;

    //Exit
    return 0;
}