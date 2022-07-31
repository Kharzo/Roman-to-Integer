#include <iostream>
#include <vector>
#include <stdlib.h>
#include <string>

using namespace std;

int romanToInt(string roman){
    if(roman.compare("I") == 0){return 1;}
        if(roman.compare("IV") == 0){return 4;}
        if(roman.compare("V") == 0){return 5;}
        if(roman.compare("IX") == 0){return 9;}
        if(roman.compare("X") == 0){return 10;}
        if(roman.compare("L") == 0){return 50;}
        if(roman.compare("C") == 0){return 100;}
        if(roman.compare("D") == 0){return 500;}
        if(roman.compare("M") == 0){return 1000;}
        if(roman.compare("XL") == 0){return 40;}
        if(roman.compare("XC") == 0){return 90;}
        if(roman.compare("CD") == 0){return 400;}
        if(roman.compare("CM") == 0){return 900;}

    int total = 0;
    long unsigned int i;
    for (i = 0; i < roman.size(); i++)
    {
        string numeral(1,roman[i]);
        if(i < roman.size()-1){
            if((roman[i] == 'I' && (roman[i + 1] == 'V' || roman[i + 1] == 'X'))|| (roman[i] == 'X' && (roman[i+1] == 'L' || roman[i+1] == 'C' )) || (roman[i] == 'C' && (roman[i+1] == 'D' || roman[i+1] == 'M'))){
                numeral = numeral + roman[i+1] + "";
                i++;
            }
        }
        

        total = total + romanToInt(numeral);
    }

    return total;
}

int main(){

    cout << romanToInt("III") << endl;
    cout << romanToInt("LVIII") << endl;
    cout << romanToInt("MCMXCIV") << endl;


    return 0;
}