#include <iostream>
#include <stack>

using namespace std;

int main()

{
    stack <int> Homework;


    Homework.push(25);
    Homework.push(10);
    Homework.push(50);

    Homework.pop();

cout<<"Top Value Is : "<<Homework.top()<<"";

cout<<" Stack Is Empty ? (1-EVET/0-HAYIR): "<<Homework.empty();

cout<<" Stack Size : "<<Homework.size()<<"";

return 0;

}
