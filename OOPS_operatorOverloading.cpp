#include<bits/stdc++.h>
using namespace std;
class A
{
    public:
    static int x,Heap;
    A()
    {
        ++x;
    }
    ~A()
    {
        --x;
    }
    //operator overloading
    void* operator new(size_t sz)
    {
        ++Heap;
    }
    void operator delete(void*)
    {
        --Heap;
    }
};
int A::x =0;
int A::Heap =0;
int main()
{
    //https://www.geeksforgeeks.org/overloading-new-delete-operator-c/

    // c stype dynamic allocation does not calls constructor/destructor

    A a,b;//stroed in stack section
    A c,d,e;

   // A* ptr = (A*)malloc(sizeof(A));//in heap mememory still o/p 5
    // allocates memory but does not calls constructor
    /*So Solution*/
    A* ptr = new A;// o/p 6
    //free(ptr);// still 6 as does not calls destructor
    //delete ptr;// still 6 because destructor is called but not decremented the value of x
    // destructor created
    delete(ptr);// now 5 o/p

    /*Number of objects created in Heap Memory==*/

    cout<<A::Heap<<"\n";
    return 0;
}
