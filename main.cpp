#include <iostream>
#include <Stack.h>

using namespace std;

int main()
{
    Stack<string> s;

    s.push("To");
    s.push("be");
    s.push("or");
    s.push("not");
    s.push("to");

    cout << s.get_size() << " items left in the stack" << "\n";

    cout << "item poped: " << s.pop() << "\n";
    cout << "item poped: " << s.pop() << "\n";
    cout << "item poped: " << s.pop() << "\n";
    cout << "item poped: " << s.pop() << "\n";

    cout << s.get_size() << " items left in the stack" << "\n";
    return 0;
}
