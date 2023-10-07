#include "AMRPX.H"

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
};

// Add more solver classes for other methods as needed
class FDMSolver : public PDESolver {
private:
    amrex::Vector<amrex::MultiFab> mf_grid;
    // Other FDM-specific data members...

public:
    FDMSolver(int nlevel, int ref_ratio) {
        // Initialize FDM-specific data members and grid information
    }

    // Implement FDM-specific methods...
};

// Add constructors and data members as needed for other solver classes



