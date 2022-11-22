#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

class student
{
    protected:
    int roll;
    char name[50];
    static int count;

};


int student::count=0;

class marks:public student
{
    protected:
    int m1,m2,m3,m4,m5;
    public:
    void getdata()
    {
        cout<<"Enter roll no. of student: ";
        cin>>roll;
        cout<<"Enter the name of student: ";
        cin>>name;
        cout<<"Enter marks of 5 subjects: ";
        cin>>m1>>m2>>m3>>m4>>m5;
        count++;
    }
    void display()
    {
        cout<<"Roll no. of student: "<<roll<<endl;
        cout<<"Name of student: "<<name<<endl;
        cout<<"Marks of 5 subjects: "<<m1<<" "<<m2<<" "<<m3<<" "<<m4<<" "<<m5<<endl;
    }
    void total()
    {
        cout<<"Total marks: "<<m1+m2+m3+m4+m5<<endl;
    }
    void average()
    {
        cout<<"Average marks: "<<(m1+m2+m3+m4+m5)/5<<endl;
    }
    void count1()
    {
        cout<<"Total no. of students: "<<count<<endl;
    }
};
class friend1
{
    private:
    int subject_a,subject_b;
    public:
    friend void friend2(friend1);
    void getdata()
    {
        cout<<"Enter marks of new subject_a and subject_b: ";
        cin>>subject_a>>subject_b;
    }
};
void friend2(friend1 f)
{
    cout<<"Sum of subject_a and subject_b: "<<f.subject_a+f.subject_b<<endl;
}


class static1
{
    private:
    int x,y;
    public:
    static int c;
    void getdata()
    {
        cout<<"Enter value of x and y: ";
        cin>>x>>y;
    }
    static void display()
    {
        cout<<"Sum of x and y: "<<c<<endl;
    }
};
int static1::c=0;

class inline1
{
    private:
    int student_a,student_b;
    public:
    void getdata()
    {
        cout<<"Enter marks of student_a and student_b: ";
        cin>>student_a>>student_b;
    }
    inline void display()
    {
        cout<<"Sum of student_a and student_b: "<<student_a+student_b<<endl;
    }
};


class this1
{
    private:
    int x,y;
    public:
    void getdata()
    {
        cout<<"Enter the value of x and y: ";
        cin>>x>>y;
    }
    void display()
    {
        cout<<"Sum of x and y: "<<x+y<<endl;
    }
};

int main()
{
    marks m1;
    m1.getdata();
    m1.display();
    m1.total();
    m1.average();
    m1.count1();
    friend1 f1;
    f1.getdata();
    friend2(f1);
    static1 s1;
    inline1 i1;
    i1.getdata();
    i1.display();
    this1 t1;
    t1.getdata();
    t1.display();;
    return 0;
}
