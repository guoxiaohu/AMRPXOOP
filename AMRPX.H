class PDESolver {
public:
    virtual void solve() = 0;
    virtual void setInitialConditions() = 0;
    virtual void applyBoundaryConditions() = 0;
    virtual void writeOutput() = 0;
    // Other common methods and members...
};

class FEMSolver : public PDESolver {
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
};

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

