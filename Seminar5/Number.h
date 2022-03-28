#pragma once

class Number {

private:
    char* val;
    int base;
    bool isNeg;

public:
    Number(const char* val, int base);
    ~Number();


    Number(const Number& n);
    Number(const Number&& n);
    Number(const int);

    char operator[] (int i);
    friend Number operator+ (const Number& x, const Number& y);
    friend Number operator- (const Number& x, const Number& y);
    bool operator> (Number& n);

    void operator= (const char*);
    void operator= (const Number& n);
    void operator= (int n);

    void operator+= (Number& n);

    void operator-- ();
    void operator-- (int);


    void SwitchBase(int newBase);
    void Print();
    int  GetDigitsCount();
    int  GetBase();
    long long getBaseTen();


private:
    long long toBaseTen(char* s, int base);
    char* toBase(long long n, int base);
    int normalizeDigit(char c);
    char formalizeDigit(int n);
};

char* toStr(long long);
void copyStr(char*, char*);
