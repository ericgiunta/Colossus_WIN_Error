// header file.
#include <testthat.h>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <chrono>
#include <random>
#include <ctime>
#include <Eigen/Core>
#include <RcppEigen.h>

#include "R_Interface.h"


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

// Initialize a unit test context. This is similar to how you
// might begin an R test file with 'context()', expect the
// associated context should be wrapped in braced.
context("Default Cox PH tests") {

  // The format for specifying tests is similar to that of
  // testthat's R functions. Use 'test_that()' to define a
  // unit test, and use 'expect_true()' and 'expect_false()'
  // to test the desired conditions.
  test_that("Default Cox Test Works") {
    IntegerVector Term_n = IntegerVector::create(0 );
    StringVector tform = StringVector::create(   "loglin");
    NumericVector a_n = NumericVector::create( 0.01);
    NumericVector x_vec = NumericVector::create( 0  ,1  ,0  ,0  ,1);
    NumericMatrix x_all( 5 , 1 , x_vec.begin() );
    IntegerVector dfc = IntegerVector::create(1);
    NumericVector groups_vec = NumericVector::create(0,0 ,1 ,0 ,2,10,12,11,10,9,0,0 ,1 ,0 ,0);
    NumericMatrix df_groups( 5 , 3 , groups_vec.begin() );
    NumericVector tu = NumericVector::create(10);
    IntegerVector KeepConstant = IntegerVector::create(0);
    expect_true(Term_n.length() == 1);
    expect_true(tform.length() == 1);
    expect_true(a_n.length() == 1);
    expect_true(x_vec.length() == 5);
    expect_true(dfc.length() == 1);
    expect_true(groups_vec.length() == 15);
    expect_true(tu.length() == 1);
    expect_true(KeepConstant.length() == 1);
    //
    expect_true(x_all.rows() == 5);
    expect_true(x_all.cols() == 1);
    expect_true(df_groups.rows() == 5);
    expect_true(df_groups.cols() == 3);
    //
    //
  }
}

context("Default Repeated tests") {

  // The format for specifying tests is similar to that of
  // testthat's R functions. Use 'test_that()' to define a
  // unit test, and use 'expect_true()' and 'expect_false()'
  // to test the desired conditions.
  test_that("Checking simple functions") {
    vector<double> a_n = { 1,2,3,4,5};
//    a_norm = vec_norm(a_n,5);
//    expect_true(a_norm == sqrt(1+4+9+16+25));
  }
}
