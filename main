#include<iostream>
#include<typeinfo>
using namespace std;
#define SIZE 5
int display_menu(void);
bool check(int&);

template<class type>
class Stack{
  type stk[SIZE];
  int top;
  public:
    Stack(){
        top=0;
    }
    void push(void);
    void pop(void);
    void display(void);
};

int main(){
    int ch,op,yn,intf=0,charf=0,floatf=0,doublef=0;
mm: cout<<"Main Menue for type selection"<<endl;
    cout<<"1)Integer\t2)Float\n3)Double\t4)Char"<<endl;
    while(1){
        cout<<"Enter your choice=";
        cin>>ch;
        
        switch(ch){
            case 1:{
                intf=1;
                cout<<"Integer stack selected for operation"<<endl;
               // Stack<int>s;
                while(1){
                  op=display_menu();
                if(op==4)
                    goto mm;
                else{
                    switch(op){
                        case 1:s.push();
                            break;
                        case 2:s.pop();
                            break;
                        case 3:s.display();
                            break;
                        default:cout<<"Unknown choice"<<endl;
                                break;
                        }
                    }
                    
                }
            }
            case 2:{
                cout<<"Float stack selected for operation"<<endl;
                Stack<float>f;
                while(1){
                    op=display_menu();
                    if(op==4)
                        goto mm;
                    else{
                        switch(op){
                            case 1:f.push();
                                break;
                            case 2:f.pop();
                                break;
                            case 3:f.display();
                                break;
                            default:cout<<"Unknown choice"<<endl;
                                break;
                        }
                    }
                }
            }
            case 3:{
                cout<<"Double stack selected for operation"<<endl;
                Stack<double>d;
                while(1){
                    op=display_menu();
                    if(op==4)
                        goto mm;
                    else{
                         switch(op){
                            case 1:d.push();
                                break;
                            case 2:d.pop();
                                break;
                            case 3:d.display();
                                break;
                            default:cout<<"Unknown choice"<<endl;
                                break;
                        }
                    }
                }
            }
            case 4:{
                cout<<"Char stack selected for operation"<<endl;
                Stack<char>c;
                while(1){
                    op=display_menu();
                    if(op==4)
                        goto mm;
                    else{
                         switch(op){
                            case 1:c.push();
                                break;
                            case 2:c.pop();
                                break;
                            case 3:c.display();
                                break;
                            default:cout<<"Unknown choice"<<endl;
                                break;
                        }
                    }
                }
            }
        }
    }
  

}

template<class type>
void Stack<type>::push(void){
    if(top==SIZE){
            cout<<"Stack Overflow"<<endl;
            return;
    }
    type n;
    cout<<"Enter "<<typeid(n).name()<<" to push in the stack=";
    cin>>n;
        
    stk[top++]=n;
}

template<class type>
void Stack<type>::pop(void){
    if(top==0){
        cout<<"Stack Underflow"<<endl;
        return;
    }
    top--;
}

template<class type>
void Stack<type>::display(void){
    if(top==0){
        cout<<"No elements present in stack"<<endl;
        return;
    }
    cout<<"Stack elements are"<<endl;
    for(int i=top-1;i>=0;i--)
    cout<<stk[i]<<endl;
}

int display_menu(void){
    int ch;
    cout<<"Sub Menu for operation"<<endl;
    cout<<"1)Push\n2)Pop\n3)Display\n4)Main Menu"<<endl;
    cout<<"Enter choice=";
    cin>>ch;
    
    return ch;
}

