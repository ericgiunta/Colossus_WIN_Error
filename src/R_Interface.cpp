#include <RcppEigen.h>
#include <RcppParallel.h>
#include <omp.h>
#include "R_Interface.h"
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <chrono>
#include <random>
#include <ctime>
#include <Eigen/Core>


// [[Rcpp::depends(RcppEigen)]]
// [[Rcpp::plugins(openmp)]]
// [[Rcpp::depends(RcppParallel)]]
using namespace std;
using namespace Rcpp;
using namespace Eigen;
using namespace std::chrono;

using Eigen::Map;
using Eigen::MatrixXd;
using Eigen::SparseMatrix;
using Eigen::VectorXd;
using Rcpp::as;




//' Interface between R code and cpp
//' \code{cox_ph_transition} Called directly from R
//' @param Term_n Term numbers
//' @param tform subterm types
//'
//' @return output
// [[Rcpp::export]]
List cox_ph_transition(IntegerVector Term_n, StringVector tform){
    //
    // Performs regression
    //----------------------------------------------------------------------------------------------------------------//
    List res = List::create(_["Term_n"]=Term_n,_["tforms"]=tform); //stores the term information
    //----------------------------------------------------------------------------------------------------------------//
    return res;
}
