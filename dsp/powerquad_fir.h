#include <concepts>
#include <complex>
#include <memory>
#include <vector>

using namespace std;

template <floating_point FloatType>
class powerquad_fir {
  public:
    powerquad_fir(vector<complex<FloatType>> input_taps);
    ~powerquad_fir();

    int set_taps(vector<complex<FloatType>> input_taps);

    int process(vector<complex<FloatType>>& block_in, 
                vector<complex<FloatType>>& block_out);
  private:
    unique_ptr<vector<complex<FloatType>>> taps;
};
