#include <iostream>
using namespace std;
class student
{
    private:
    int total,mark1,mark2;
    
    public:
    student()
    {
        cout<<"Enter Marks for Subject 1:"<<endl;
        cin>>mark1;
        cout<<"Enter Marks for Subject 2:"<<endl;
        cin>>mark2;
    }
    void sum()
    {
        total=mark1+mark2;
    }
    ~student()
    {
        cout<<"Sum is:"<<total<<endl;
        cout<<"The object is created."<<endl;
        cout<<"The object is destroyed."<<endl;
    }
};
int main()
{
   student s1,s2;
   s1.sum();
   s2.sum();
    return 0;
}