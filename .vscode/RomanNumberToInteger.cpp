// https://www.geeksforgeeks.org/problems/roman-number-to-integer3201/1
int value(char t)
      {
        if(t=='I')
        {
          return 1;
        }
           if(t=='V')
        {
          return 5;
        }
        if(t=='X')
        {
          return 10;
        }
        if(t=='L')
        {
          return 50;
        }
        if(t=='C')
        {
          return 100;
        }
        if(t=='D')
        {
          return 500;
        }
        if(t=='M')
        {
          return 1000;
        }
}
class Solution {
  public:
    int romanToDecimal(string &str) {
        int res=0;
        for(int i=0;i<str.size();i++)
        {
            if(value(str[i+1])-value(str[i])>0)
            {
                res+=value(str[i+1])-value(str[i]);
                i++;
            }
            else
            {
                res+=value(str[i]);
            }
        }
        return res;
      }
};