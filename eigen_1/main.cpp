#include <iostream>
#include<eigen3/Eigen/Dense>


using namespace Eigen;
using namespace std;


int main(int argc, char **argv) {
  
    MatrixXf A = MatrixXf::Random(3,2);
    cout<<"Here is the matrix A:\n"<<A<<endl;
    VectorXf b = VectorXf::Random(3);
    cout<<"Here is the right hand side b:\n"<<b<<endl;
    cout<<"The least-squares solution is:\n"
        <<A.bdcSvd(ComputeThinU | ComputeThinV).solve(b)<<endl;
    return 0;
}
