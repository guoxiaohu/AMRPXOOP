#ifndef AMRPX_FEM_H
#define AMRPX_FEM_H

#include "AMRPX.H"
#include <AMReX.H>
#include <AMReX_MultiFab.H> 


class FEMSolver : public PDESolver {

private:
    amrex::Vector<amrex::MultiFab> mf_elem;
    amrex::Vector<amrex::MultiFab> mf_node;
    // Other FEM-specific data members...

public:
    void solve() override {
        // Implement FEM-specific solving logic
    }
    void setInitialConditions() override {
        // Implement FEM-specific initial condition setup
    }
    void applyBoundaryConditions() override {
        // Implement FEM-specific boundary condition handling
    }
    void writeOutput() override {
        // Implement FEM-specific output writing
    }

    FEMSolver(int nlevel, int ref_ratio) {
        // Initialize FEM-specific data members and grid information
    }
};

#endif