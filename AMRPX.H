#ifndef AMRPX_H
#define AMRPX_H

class PDESolver {
public:
    virtual void solve() = 0;
    virtual void setInitialConditions() = 0;
    virtual void applyBoundaryConditions() = 0;
    virtual void writeOutput() = 0;
    // Other common methods and members...
};

#endif