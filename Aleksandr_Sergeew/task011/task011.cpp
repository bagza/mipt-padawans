#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

int main(){
stack<char> mystack;
char c=1,b;
int i;
while(1){
	c=getchar();
	if (c=='(' || c=='['|| c=='<'|| c=='{'){
		mystack.push(c);
		}
	else if (c==')'||c==']'||c=='}'||c=='>'){
		if(mystack.empty()){
			cout«"NO"«endl;
			return 0;
			}
		b=mystack.top();
		mystack.pop();
		if (c==')'&& b!='('||c==']'&& b!='['||c=='>'&& b!='<'||c=='}'&& b!='{'){
			cout«"NO"«endl;
			return 0;
			}
		}
		else {
			if (c=='\0'||c=='\n') break;
			cout«"NO"«endl;
			return 0;}
			}
	cout«"YES"«endl;
	return 0;
}
