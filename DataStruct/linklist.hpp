#ifndef __LINKLIST_H__
#define __LINKLIST_H__

namespace LINKLIST
{
    class linklist
    {
        private:
            struct Node
            {
                int x;
                Node* next;
                Node* prev;
                Node(int a) : x(a), next(nullptr),prev(nullptr) {}
            };
            Node* root;
        public:
            linklist();
            void insert();
            void destroy();
            void show();
            

    };
} // namespace LINKLIST




#endif // __LINKLIST_H__