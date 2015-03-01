#include "../include/agent_team/multipleteams.hpp"
#include "../include/utils/customprint.hpp"

int main(int argc, char *argv[]) {

    // Solve and print results
    MultipleTeams MT(argv[1]);
    print(MT.solve());
    print(MT.cdf);

    // Save results to file
    save_to_file(argv[2], MT.best_solution);

    return 0;
}