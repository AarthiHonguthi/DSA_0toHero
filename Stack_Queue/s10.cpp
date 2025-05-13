//Reverse a Stack
#include <iostream>
#include <stack>
using namespace std;


int reverseStack(stack<int> &st){
     if(st.empty()){
        return; //Base case
     }
     
    int temp = st.top(); //ek case hum solve karenge 
    st.pop();

    reverseStack(st); //recursive function

    insertAtBottom(st,temp);
}

void insertAtBottom(stack<int> &st, int val)
{
    if (st.empty())
    {
        st.push(val); // Base case
        return;
    }

    int temp = st.top(); // ek case hum solve karenge
    st.pop();

    insertAtBottom(st, val); // Recurse till bottom

    st.push(temp); // Backtrack
}

int main(){
    stack<int> st;
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    
}