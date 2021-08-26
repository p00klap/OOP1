#include <iostream>
#include <cmath>
#include <cstdint>
using namespace std;

//  1
class Power{
public:
    int numA, numB;
public:
    Power(){
        numA = 2;
        numB = 4;
    }
    void set(int a, int b){
        numA = a;
        numB = b;
        cout << "Enter first number:";
        cin >> a;
        cout << "Enter second number:";
        cin >> b;
        cout << "Your numbers:" << a << " and " << b << endl;
        }
    void calculate(){
        cout << "2 to the 4 power is: " << pow(numA,numB) << endl;
    }
};
//  2
class RGBA{

public:
    int m_red, m_green, m_blue, m_alpha;
public:
    RGBA() : m_red(0), m_green(0), m_blue(0), m_alpha(255){}

    RGBA(int r, int g, int bl, int al) : m_red(r), m_green(g), m_blue(bl), m_alpha(al){
        /* cout << "red:";
        cin >> r;
        cout << "green:";
        cin >> g;
        cout << "blue:";
        cin >> bl;
        cout << "alpha:";
        cin >> al; */
    }
   
    void print(){
        cout << m_red << "/" << m_green << "/" << m_blue << "/" << m_alpha << endl; 
        }
    };
class Stack{
    private:
        int m_arr[10];
        int m_lenght;
    public:
        void reset(){
        m_lenght = 0;
        for (int i = 0; i < 10; ++i)
            m_arr[i] = 0;
        }
        /*void*/bool push(int v){
            if (m_lenght == 10)
                return false;
            m_arr[m_lenght++] = v;
                return true;
        }
        int pop(){
            if(m_lenght > 0)
                /*int value = m_arr[m_lenght-1];
                --m_lenght;
                return value;*/
            return m_arr[--m_lenght];
        }
        void print1(){
        cout << "( ";
        for (int i = 0; i < m_lenght; ++i)
            cout << m_arr[i] << ' ';
        cout << ")\n";
        }

};
int main(int a, char **b)
{
    Power now;
    now.set(a, **b);
    Power calc;
    calc.calculate();


    RGBA first;
    first.print();
   
    RGBA second(240, 150, 100, 255);
    second.print();

    Stack stack;
    stack.reset();
 
    stack.print1();
 
    stack.push(3);
    stack.push(7);
    stack.push(5);
    stack.print1();
 
    stack.pop();
    stack.print1();
 
    stack.pop();
    stack.pop();
 
    stack.print1();
    
    
    return 0;
}

