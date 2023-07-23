#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

template <typename T>
class CustomContainer{
    private:
        vector<T> customStack;

    public:

        void push(T data)
        {
            customStack.push_back(data);
        }

        int size()
        {
            return customStack.size();
        }

        void pop()
        {
            if(!customStack.empty())
            {
                customStack.pop_back();
            }
            else
            {
                cout<<"The custom Stack container is EMPTY!";
            }
        }

        T top()
        {
            cout<<"The popped element : "<<customStack.back()<<endl;
        }

        bool isempty()
        {
            if(customStack.empty())
            {
                cout<<"The custom Stack container is EMPTY!";
            }
            else
            {
                cout<<"There are "<<customStack.size()<<" elements in the custom stack container"<<endl;
            }
        }
};



int main()
{
    CustomContainer<char> customStack;

    int num;
    char data;

    cin>>num;

    for(int i=0;i<num;i++)
    {
        cin>>data;
        customStack.push(data);
    }


    cout << "The size of the Custom Container is : "<<customStack.size()<< endl;

    customStack.pop();

    customStack.top();

    customStack.isempty();

    return 0;
}
