#include "StackUsingArray.cpp"

int main(){
    StackUsingArray s(5);
    s.push(50);
    s.push(30);
    s.pop();
    s.push(20);
    cout<<s.top()<<endl;
    cout<<s.isEmpty()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
}