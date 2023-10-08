#ifndef AMRPX_FDM_H
#define AMRPX_FDM_H

#include "AMRPX.H"
#include <AMReX.H>

class FDMSolver : public PDESolver {


public:
    void solve() override {
        // Implement FDM-specific solving logic
    }
    void setInitialConditions() override {
        // Implement FDM-specific initial condition setup
    }
    void applyBoundaryConditions() override {
        // Implement FDM-specific boundary condition handling
    }
    void writeOutput() override {
        // Implement FDM-specific output writing
    }

    FDMSolver(int nlevel, int ref_ratio) {
        // Initialize FDM-specific data members and grid information
    }

private:
    amrex::Vector<amrex::MultiFab> mf_grid;
    // Other FDM-specific data members...

};

// Add constructors and data members as needed for other solver classes

#endif