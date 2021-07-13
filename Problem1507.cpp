/* 1507. Reformat Date */

class Solution {
public:
    string reformatDate(string date) {
        if(date.size() == 12) date = '0' + date;
        string result="";
        result+=date.substr(9,4)+"-";
        map<string,string> month={{"Jan","01"}, {"Feb","02"}, {"Mar","03"}, {"Apr","04"}, {"May","05"}, {"Jun","06"}, {"Jul","07"}, {"Aug","08"}, {"Sep","09"}, {"Oct","10"}, {"Nov","11"}, {"Dec","12"}};
        result+=month[date.substr(5,3)]+"-";
        result+=date.substr(0,2);
        return result;
    }
};