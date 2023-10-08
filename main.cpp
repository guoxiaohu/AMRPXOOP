#include <iostream>
#include "AMRPX.H"
#include "AMRPX_SolverFactory.H"
#include "AMRPX_FEM.H"


int main() {
    std::string solverMethod = "FEM";  // Change this to select a different method
    int nlevel = 2;
    int ref_ratio = 2;

    // Create a PDE solver based on the selected method
    std::unique_ptr<PDESolver> solver = PDESolverFactory::createSolver(solverMethod, nlevel, ref_ratio);

    // Use the solver to solve the PDE
    solver->setInitialConditions();
    solver->applyBoundaryConditions();
    solver->solve();
    solver->writeOutput();

    return 0;
}
