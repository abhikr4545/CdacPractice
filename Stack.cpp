#include <iostream>
using namespace std;

class Stack
{
public:
	int stack[10], max=10, top = -1;
	void Push(int val)
	{
		if (top >= max - 1)
		{
			cout << "Stack Overflow\n";
		}
		else 
		{
			top++;
			stack[top] = val;
		}
	}

	void Pop()
	{
		if (top <= -1)
		{
			cout << "Stack Underflow\n";
		}
		else
		{
			cout << "The elment that poped" << " " << stack[top] << "\n";
			top--;
		}
	}

	void Display()
	{
		if (top >= 0)
		{
			cout << "Stack Elments are:" << " " << endl;
			for (int i = top; i >= 0; i--)
			{
				cout << stack[i] << " ";
			}
		}
		else
			cout << "Stack is empty\n";

	}
};

void Initialize()
{
	int num, x;
	cout << "Welcome to stack implementation Enter choice\n";
	cout << "Enter 1 for add element to stack\n";
	cout << "Enter 2 for delete element in stack\n";
	cout << "Enter 3 to siaplay element of stack\n";
	cout << "Press 4 for exit\n";
	cin >> num;
	Stack S;
	do {
		switch (num)
		{
		case 1:
			cout << "Enter the value to add in stack\n";
			cin >> x;
			S.Push(x);
			break;
		case 2:
			S.Pop();
			break;
		case 3:
			S.Display();
		default:
			break;
		}
	} while (num != 4);
}

int main()
{
	Initialize();
	return 0;
}
