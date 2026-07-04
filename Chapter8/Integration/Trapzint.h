#pragma once

class Function {
public:
    virtual double operator() (double x) const = 0;
    virtual ~Function() {}
};

class MyFunction : public Function {
public:
    virtual double operator()(double x) const;
};

class Integration {
public:
    virtual double operator() (double a, double b, double eps) const = 0;
    virtual ~Integration() {}
};

class Trapz : public Integration {
public:
    Trapz(const Function &f) : f(f) {}
    virtual double operator() (double a, double b, double eps) const;
private:
    const Function &f;
};
