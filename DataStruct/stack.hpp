#ifndef STACK_
#define STACK_

#include <iostream>
#include <bits/stdc++.h>



namespace STACK
{
    class stack
    {
        private:
            int* arr;
            int size_;
        public:
            stack();
            void push(int a);
            void pop();
            int size();
            int peek();
            bool empty();
            void show();
    };

    
};

#endif