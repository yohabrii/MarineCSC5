/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 21, 2016, 11:30 AM
 * Purpose:  Calculate the debt per person and percentage 
 *           increase in the U.S.A in the years 2008 and 2016 
 */

//System Libraries Here
#include <iostream>    //Input - Output Library
using namespace std;   //Name-space under which system libraries exist

//User Libraries Here

//Global Constants
const float PERCENT=100.e0f;    //Percentage
const float Million=1.0e9f;    //Conversion to Billion
const float Trillion=1.0e12f;  //Conversion to Trillion

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float Pop2008=304e6f;     //302 Million 2008 Population 
    float Pop2016=322e6f;     //322 Million 2016 Population
    float fDt2008=9.7e12f;    //9.7 Trillion 2008 Federal Debt
    float fDt2016=20.e12f;    //20 Trillion 2016 Federal Debt
    float per2008,per2016;   //Personal Debt
    float perChng,mulChng;   //Percentage and multiplicative change
    float ppChng;             //Per person change in debt
    
    //Map inputs to outputs or process the data
    per2008=fDt2008/Pop2008;                    //$'s/person
    per2016=fDt2016/Pop2016;                    //$'s/person
    perChng=(fDt2016-fDt2008)/fDt2008*PERCENT;  //% change of debt
    mulChng=fDt2016/fDt2008;                    //% change of debt
    ppChng=(per2016-per2008)/per2008*PERCENT;   //change in per/person debt
    
    
    //Output the transformed data
    cout<< "Federal Debt 2008 = $" << fDt2008/Trillion << "Trillion" <<endl;
    cout<< "Military Budget = $" << fDt2016/Trillion<< "Trillion" <<endl;
    cout<< "US Population 2008 = "<< Pop2008/Million<< "Million" <<endl;
    cout<< "US Population 2008 = "<< Pop2016/Million << "Million" <<endl;
    cout<< "percentage change in debt = "<< perChng << "%" <<endl;
    cout<< "Multiplicative change in debt ="<< mulChng << "x" <<endl;
    cout<< "Federal Debt 2008 = $"<< per2008 <<endl;
    cout<< "Federal Debt 2008 = $"<<per2016<<endl;
    cout<< "Change in per/person debt = $"<<ppChng<<endl;
    //Exit stage right!
    return 0;

}