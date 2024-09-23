#include<iostream>
#include<stack>
using namespace std;
bool match(char opening,char closing){
    if(opening=='(' && closing==')') return true;
    if(opening=='[' && closing==']') return true;
    if(opening=='{' && closing=='}') return true;
    return false;
}
bool balanced(string expr){
    stack<char>s;
    for(int i=0;i<expr.size();i++){
        char current = expr[i];
    if(current=='(' || current=='{' || current=='['){
        s.push(current);
    }
    else if(current==')' || current=='}' || current==']'){
        if(s.empty() || !match(s.top(),current)){
            return false;
        }
        else{
            s.pop();
        }
    }
    }
}
int main(){
    string expr;
    cout << "Enter an expression: ";
    cin >> expr;
    if (balanced(expr)) {
        cout << "The expression has balanced parentheses." << endl;
    } else {
        cout << "The expression has unbalanced parentheses." << endl;
    }
    return 0;
}
