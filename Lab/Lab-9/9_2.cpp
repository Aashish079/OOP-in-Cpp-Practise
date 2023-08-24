#include<iostream>
using namespace std;
/*Write a class template for queue class. Assume the programmer using the queue won't make mistakes,
 like exceeding the capacity of the queue or trying to remove an item when the queue is empty. 
Define several queues of different data types and insert and remove data from them.
*/
template <class T>
class queue
{   
    int Max;
    T *arr;  
    int back;

    public:
    queue()
    {   
        Max = 10;
        arr = new T[Max];
        back = -1;
    }
    void push(T d)
    {
        arr[++back] = d;
    }
    T pop()
    {
        T first = arr[0];
        for (int i = 0; i < Max - 1; i++) {
            arr[i] = arr[i + 1]; 
        }
        back--;
        return first;
    }
    ~queue()
    {
        delete[] arr;
    }
};
int main()
{
    queue <int> intqueue;
    intqueue.push(1);
    intqueue.push(2);
    intqueue.push(3);
    cout<<intqueue.pop()<<endl;
    cout<<intqueue.pop()<<endl;
    cout<<intqueue.pop()<<endl;
    queue <char> charqueue;
    charqueue.push('a');
    charqueue.push('b');
    charqueue.push('c');
    cout<<charqueue.pop()<<endl;
    cout<<charqueue.pop()<<endl;
    cout<<charqueue.pop()<<endl;
    return 0;
}