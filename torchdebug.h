#ifndef TORCHDEBUG_H_
#define TORCHDEBUG_H_


#include <iostream>

#include <torch/torch.h>


void tprint(torch::Tensor &x) {
    std::cout << x << "\n";
}
void tprint(torch::Tensor &&x) { tprint(x); }

torch::Tensor ti(torch::Tensor &x, int i) { return x.index({i}); }
torch::Tensor ti(torch::Tensor &&x, int i) { return ti(x, i); }

torch::Tensor ti(torch::Tensor &x, int i, int j) { return x.index({i, j}); }
torch::Tensor ti(torch::Tensor &&x, int i, int j) { return ti(x, i, j); }

torch::Tensor ti(torch::Tensor &x, int i, int j, int k) { return x.index({i, j, k}); }
torch::Tensor ti(torch::Tensor &&x, int i, int j, int k) { return ti(x, i, j, k); }

torch::Tensor ti(torch::Tensor &x, int i, int j, int k, int l) { return x.index({i, j, k, l}); }
torch::Tensor ti(torch::Tensor &&x, int i, int j, int k, int l) { return ti(x, i, j, k, l); }

torch::Tensor ti(torch::Tensor &x, int i, int j, int k, int l, int m) { return x.index({i, j, k, l, m}); }
torch::Tensor ti(torch::Tensor &&x, int i, int j, int k, int l, int m) { return ti(x, i, j, k, l, m); }

torch::Tensor tmean(torch::Tensor &x) { return x.mean(); }
torch::Tensor tmean(torch::Tensor &&x) { return tmean(x); }

torch::Tensor tmeani(torch::Tensor &x, int i) { return x.mean(i); }
torch::Tensor tmeani(torch::Tensor &&x, int i) { return tmeani(x, i); }

torch::Tensor tmax(torch::Tensor &x) { return x.max(); }
torch::Tensor tmax(torch::Tensor &&x) { return tmax(x); }

torch::Tensor tsum(torch::Tensor &x) { return x.sum(); }
torch::Tensor tsum(torch::Tensor &&x) { return tsum(x); }

torch::Tensor targmax(torch::Tensor &x) { return x.argmax(); }
torch::Tensor targmax(torch::Tensor &&x) { return targmax(x); }

torch::Tensor treal(torch::Tensor &x) { return torch::real(x); }
torch::Tensor treal(torch::Tensor &&x) { return treal(x); }

torch::Tensor timag(torch::Tensor &x) { return torch::imag(x); }
torch::Tensor timag(torch::Tensor &&x) { return timag(x); }

void tprint(torch::IntArrayRef &ref) {
    for (int i = 0; i < ref.size(); i++) {
        std::cout << ref[i] << " ";
    }
    std::cout << "\n";
}
void tprint(torch::IntArrayRef &&ref) { tprint(ref); }


#endif /* TORCHDEBUG_H_ */
