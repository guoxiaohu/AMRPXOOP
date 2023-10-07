class PDESolverFactory {
public:
    static std::unique_ptr<PDESolver> createSolver(const std::string& method, int nlevel, int ref_ratio) {
        if (method == "FEM") {
            return std::make_unique<FEMSolver>(nlevel, ref_ratio);
        } else if (method == "FDM") {
            return std::make_unique<FDMSolver>(nlevel, ref_ratio);
        } else {
            throw std::runtime_error("Unsupported PDE solver method");
        }
    }
};

