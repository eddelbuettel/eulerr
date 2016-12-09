// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// choose_two
arma::umat choose_two(arma::uvec x);
RcppExport SEXP eulerr_choose_two(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::uvec >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(choose_two(x));
    return rcpp_result_gen;
END_RCPP
}
// intersect_all
arma::mat intersect_all(arma::vec r1, arma::vec r2, arma::vec x_d, arma::vec y_d, arma::vec x_c, arma::vec y_c, arma::vec d);
RcppExport SEXP eulerr_intersect_all(SEXP r1SEXP, SEXP r2SEXP, SEXP x_dSEXP, SEXP y_dSEXP, SEXP x_cSEXP, SEXP y_cSEXP, SEXP dSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type r1(r1SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type r2(r2SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type x_d(x_dSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y_d(y_dSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type x_c(x_cSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y_c(y_cSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type d(dSEXP);
    rcpp_result_gen = Rcpp::wrap(intersect_all(r1, r2, x_d, y_d, x_c, y_c, d));
    return rcpp_result_gen;
END_RCPP
}
// discdisc
NumericVector discdisc(NumericVector r1, NumericVector r2, NumericVector d);
RcppExport SEXP eulerr_discdisc(SEXP r1SEXP, SEXP r2SEXP, SEXP dSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type r1(r1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type r2(r2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type d(dSEXP);
    rcpp_result_gen = Rcpp::wrap(discdisc(r1, r2, d));
    return rcpp_result_gen;
END_RCPP
}
// subv
arma::vec subv(arma::vec x, arma::uvec index);
RcppExport SEXP eulerr_subv(SEXP xSEXP, SEXP indexSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type index(indexSEXP);
    rcpp_result_gen = Rcpp::wrap(subv(x, index));
    return rcpp_result_gen;
END_RCPP
}
// polyarc_areas
double polyarc_areas(arma::vec x_int, arma::vec y_int, arma::vec radiuses, arma::umat circles);
RcppExport SEXP eulerr_polyarc_areas(SEXP x_intSEXP, SEXP y_intSEXP, SEXP radiusesSEXP, SEXP circlesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x_int(x_intSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y_int(y_intSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type radiuses(radiusesSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type circles(circlesSEXP);
    rcpp_result_gen = Rcpp::wrap(polyarc_areas(x_int, y_int, radiuses, circles));
    return rcpp_result_gen;
END_RCPP
}
// return_intersections
std::vector<double> return_intersections(arma::vec par, arma::vec areas, arma::umat id, arma::umat two, arma::uvec twos, arma::uvec ones);
RcppExport SEXP eulerr_return_intersections(SEXP parSEXP, SEXP areasSEXP, SEXP idSEXP, SEXP twoSEXP, SEXP twosSEXP, SEXP onesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type par(parSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type areas(areasSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type id(idSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type two(twoSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type twos(twosSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type ones(onesSEXP);
    rcpp_result_gen = Rcpp::wrap(return_intersections(par, areas, id, two, twos, ones));
    return rcpp_result_gen;
END_RCPP
}
// stress
double stress(arma::vec areas, arma::vec fit);
RcppExport SEXP eulerr_stress(SEXP areasSEXP, SEXP fitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type areas(areasSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type fit(fitSEXP);
    rcpp_result_gen = Rcpp::wrap(stress(areas, fit));
    return rcpp_result_gen;
END_RCPP
}
// compute_fit
double compute_fit(arma::vec par, arma::vec areas, arma::umat id, arma::umat two, arma::uvec twos, arma::uvec ones, arma::uword cost);
RcppExport SEXP eulerr_compute_fit(SEXP parSEXP, SEXP areasSEXP, SEXP idSEXP, SEXP twoSEXP, SEXP twosSEXP, SEXP onesSEXP, SEXP costSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type par(parSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type areas(areasSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type id(idSEXP);
    Rcpp::traits::input_parameter< arma::umat >::type two(twoSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type twos(twosSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type ones(onesSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type cost(costSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_fit(par, areas, id, two, twos, ones, cost));
    return rcpp_result_gen;
END_RCPP
}
