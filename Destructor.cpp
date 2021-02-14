#include <iostream>
using namespace std;
class room
{
    private:
    int area,l,b;
    
    public:
    room(int l1,int b1)
    {
        l=l1;
        b=b1;
    }
    void calculatearea()
    {
        area=l*b;
    }
    ~room()
    {
        cout<<"The object is destroyed."<<endl;
    }
    void put()
    {
        cout<<"Area is:"<<area<<endl;
        cout<<"The object is created."<<endl;
    }
};
int main()
{
   room a(40,15);
   a.calculatearea();
   a.put();
    return 0;
}