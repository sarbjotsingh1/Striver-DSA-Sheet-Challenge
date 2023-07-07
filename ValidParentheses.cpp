//https://www.codingninjas.com/studio/problems/valid-parentheses_8230714?challengeSlug=striver-sde-challenge&leftPanelTab=0
#include<bits/stdc++.h>
bool isValidParenthesis(string expression){
    stack<char> s;
    for(int i = 0;i<expression.length();i++){
      if (expression[i] == '{' || expression[i] == '[')
        s.push(expression[i]);
      else if (expression[i] == '}' && !s.empty() && s.top() == '{')
        s.pop();
      else if (expression[i] == ']'&& !s.empty() && s.top() == '[')
        s.pop();
      else if (expression[i] == '}' || expression[i] == ']')
        return false;
    }
    if(s.empty())
        return true;
    return false;
}
