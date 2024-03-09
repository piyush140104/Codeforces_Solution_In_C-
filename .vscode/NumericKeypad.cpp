// https://www.geeksforgeeks.org/problems/convert-a-sentence-into-its-equivalent-mobile-numeric-keypad-sequence0547/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab
string printSequence(string S)
{
    string T;
    for(int i=0;i<S.size();i++)
    {
        if(S[i]==' ')
        {
            T+=to_string(0);
            continue;
        }
        else if(S[i]!=' ' && S[i]<'S')
        {
        if((S[i]-'A')%3==0)
        {
            int number=(S[i]-'A')/3;
            int res=2+number;
            T+=to_string(res);
        }
        else if((S[i]-'B')%3==0)
        {
            int number=(S[i]-'B')/3;
            int res=2+number;
            T+=to_string(res);
            T+=to_string(res);
        }
        else if((S[i]-'C')%3==0)
        {
            int number=(S[i]-'C')/3;
            int res=2+number;
            T+=to_string(res);
            T+=to_string(res);
            T+=to_string(res);
        }
        }
        else if(S[i]>'S' && S[i]!='Z')
        {
        if((S[i]-'A'-1)%3==0)
        {
            int number=(S[i]-'A'-1)/3;
            int res=2+number;
            T+=to_string(res);
        }
        else if((S[i]-'B'-1)%3==0)
        {
            int number=(S[i]-'B'-1)/3;
            int res=2+number;
            T+=to_string(res);
            T+=to_string(res);
        }
        else if((S[i]-'C'-1)%3==0)
        {
            int number=(S[i]-'C'-1)/3;
            int res=2+number;
            T+=to_string(res);
            T+=to_string(res);
            T+=to_string(res);
        }
        }
        else
        {
        if(S[i]=='S')
        {
            int res=7;
            T+=to_string(res);
            T+=to_string(res);
            T+=to_string(res);
            T+=to_string(res);
        }
        else if(S[i]=='Z')
        {
            int res=9;
            T+=to_string(res);
            T+=to_string(res);
            T+=to_string(res);
            T+=to_string(res);
        }
        }
    }
    return T;
}