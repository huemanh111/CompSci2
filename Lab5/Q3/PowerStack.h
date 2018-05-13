#ifndef POWERSTACK_H
#define POWERSTACK_H

#include <string>
#include <iostream>


class Data { //parent class
    public:
	Data();
	virtual ~Data();
    protected: //overridable
        virtual void print(); // = 0;

//   private:

};

class toInt : public Data { //to[dataType] are all inheritance classes
    public:
        toInt();
	virtual ~toInt();
    protected:
        virtual void print() {
            cout << "I am an integer" << endl;
        }
    private:
        int i;
};

class toDouble : public Data {
    public:
	toDouble();
	virtual ~toDouble();
    protected:
        virtual void print() {
            cout << "I am a double" << endl;
        }
    private:
        double d;
};

class toFloat : public Data {
    public:
        void print() {
            cout << "I am a float" << endl;
        }

    private:
        float f;
};

class toChar : public Data {
    public:
        void print() {
            cout << "I am a character" << endl;
        }

    private:
        char c;
};

class toString : public Data {
    public:
        void print() {
            cout << "I am a string" << endl;
        }

    private:
        string s;
};

#endif
