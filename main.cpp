#include<iostream>
#include<typeinfo>
using namespace std;
#define SIZE 5

int display_menu(void);
int keep_old_data(void);

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
    int ch,op,yn,intf=0,charf=0,floatf=0,doublef=0,stringf=0,count=0;
    
    Stack<int>i;
    Stack<float>f;
    Stack<double>d;
    Stack<char>c;
    Stack<string>s;
    
mm: cout<<"Main Menu for type selection"<<endl;
    cout<<"1)Integer\t2)Float\n3)Double\t4)Char\n5)String\t6)Exit"<<endl;
    
    while(1){
        cout<<"Enter your choice=";
        cin>>ch;
        
        if(ch>6){
            count++;
            if(count==1){
                cout<<"Please read the options carefully"<<endl;
                cout<<endl;
                goto mm;
            }else if(count==2){
                cout<<"Last chance please take care"<<endl;
                cout<<endl;
                goto mm;
            }else if(count==3){
                cout<<"Thanks for using our application"<<endl;
                cout<<"Please read the manual carefully & comeback"<<endl;
                cout<<endl;
                return 0;
            }
        }
        count=0;
        switch(ch){
            case 1:{
                if(intf==1){
                    yn=keep_old_data();
                    if(yn!=1)
                       i=Stack<int>(); 
                       
                }
                cout<<"Integer stack application ready to use"<<endl;
                intf=1;
                
                while(1){
                  op=display_menu();
                    if(op==4)
                        goto mm;
                    else{
                        switch(op){
                            case 1:i.push();
                                break;
                            case 2:i.pop();
                                break;
                            case 3:i.display();
                                break;
                            default:cout<<"Unknown choice"<<endl;
                                break;
                        }
                    }
                    
                }
            }
            case 2:{
                if(floatf==1){
                    yn=keep_old_data();
                    if(yn!=1)
                    f=Stack<float>(); 
                }
                floatf=1;
                
                cout<<"Float stack selected application ready to use"<<endl;
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
                if(doublef==1){
                    yn=keep_old_data();
                    if(yn!=1)
                       d=Stack<double>(); 
                }
                doublef=1;
                cout<<"Double stack selected for operation"<<endl;
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
                 if(charf==1){
                    yn=keep_old_data();
                    if(yn!=1)
                       c=Stack<char>(); 
                       
                }
                charf=1;
                
                cout<<"Char stack selected for operation"<<endl;
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
            case 5:{
                 if(stringf==1){
                    yn=keep_old_data();
                    if(yn!=1)
                       s=Stack<string>(); 
                }
                stringf=1;
                
                cout<<"String stack application ready to use"<<endl;
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
            case 6:cout<<"Thanks for using stack application"<<endl;
                    return 0;
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
    const char *p;
    p=typeid(type).name();
    switch(*p){
        case 'i':cout<<"Enter integer to insert=";
                break;
        case 'f':cout<<"Enter float to insert=";
                break;
        case 'c':cout<<"Enter character to insert=";
                break;
        case 'd':cout<<"Enter double to insert=";
                break;
        default:cout<<"Enter string to insert=";
                break;
    }
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
        cout<<"Stack is empty"<<endl;
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

int keep_old_data(void){
    int ch;
a:  cout<<"Do you want to continue with previous data"<<endl;
    cout<<"1)Yes\n2)No"<<endl;
    cin>>ch;
                    
    if(ch>2){
        cout<<"Unknown choice"<<endl;
        goto a;
    }
    return ch;
}
