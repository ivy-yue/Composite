//
//  Composite.hpp
//  Composite
//
//  Created by wangyue on 2016/11/16.
//  Copyright © 2016年 ___ivy___. All rights reserved.
//

#ifndef Composite_hpp
#define Composite_hpp


#include <list>
using std::list;

#include <string>
using std::string;

#include <iostream>
using namespace std;

class Composite
{
public:
    Composite(char* name):mName(name){}
    virtual void attach(Composite* file_name){}
    virtual void detach(Composite* file_name){}
    virtual void display(string str){}
    

    
protected:
    char* mName;
    list<Composite* > mList;
};

class ConcreteComposite:public Composite{
public:
    ConcreteComposite(char* name):Composite(name){}
    virtual void attach(Composite* file_name);
    virtual void detach(Composite* file_name);
    virtual void display(string str);

};

class AbstractFileHpp:public Composite{
public:
    AbstractFileHpp(char* name):Composite(name){}
    virtual void display(string str);
    

};

class AbstractFileCpp:public Composite{
public:
    AbstractFileCpp(char* name):Composite(name){}
    virtual void display(string str);


};


#endif /* Composite_hpp */
