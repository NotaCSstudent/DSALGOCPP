#ifndef __QUEUE_H__
#define __QUEUE_H__
#include <iostream>
//#include <bits/stdc++.h>
namespace Queue
{

    class Arr
    {
        private:
            int* arr;
            int size;
        public:
            Arr();
            void push(int x);
            void pop();
            void show();
    };


    Arr::Arr() : size(0)
    {
        arr = new int[1000];
    }
    void Arr::push(int x)
    {
        arr[size] = x;
        size +=1;
    }
    
    void Arr::pop()
    {
        for(int i=1;i<size;i++)
        {
            arr[i-1] = arr[i];

        }
        arr[size-1]=0;
        size-=1;
    }
    void Arr::show()
    {
        for(int i=0;i<size;i++)
        {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }


};



#endif // __QUEUE_H__