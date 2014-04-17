// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef __FDRreg_RcppExports_h__
#define __FDRreg_RcppExports_h__

#include <RcppArmadillo.h>
#include <Rcpp.h>

namespace FDRreg {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("FDRreg", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("FDRreg", "FDRreg_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in FDRreg");
            }
        }
    }

    inline double rtgamma_once(double shape, double rate, double lb, double ub) {
        typedef SEXP(*Ptr_rtgamma_once)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_rtgamma_once p_rtgamma_once = NULL;
        if (p_rtgamma_once == NULL) {
            validateSignature("double(*rtgamma_once)(double,double,double,double)");
            p_rtgamma_once = (Ptr_rtgamma_once)R_GetCCallable("FDRreg", "FDRreg_rtgamma_once");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_rtgamma_once(Rcpp::wrap(shape), Rcpp::wrap(rate), Rcpp::wrap(lb), Rcpp::wrap(ub));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<double >(__result);
    }

    inline NumericVector rdirichlet_once(NumericVector alpha) {
        typedef SEXP(*Ptr_rdirichlet_once)(SEXP);
        static Ptr_rdirichlet_once p_rdirichlet_once = NULL;
        if (p_rdirichlet_once == NULL) {
            validateSignature("NumericVector(*rdirichlet_once)(NumericVector)");
            p_rdirichlet_once = (Ptr_rdirichlet_once)R_GetCCallable("FDRreg", "FDRreg_rdirichlet_once");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_rdirichlet_once(Rcpp::wrap(alpha));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericVector >(__result);
    }

    inline SEXP FDRregCPP(NumericVector z, const arma::mat& X, NumericVector M0, NumericVector MTot, const arma::mat& PriorPrecision, const arma::vec& PriorMean, int nmc, int nburn, double p0, const arma::vec& betaguess) {
        typedef SEXP(*Ptr_FDRregCPP)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_FDRregCPP p_FDRregCPP = NULL;
        if (p_FDRregCPP == NULL) {
            validateSignature("SEXP(*FDRregCPP)(NumericVector,const arma::mat&,NumericVector,NumericVector,const arma::mat&,const arma::vec&,int,int,double,const arma::vec&)");
            p_FDRregCPP = (Ptr_FDRregCPP)R_GetCCallable("FDRreg", "FDRreg_FDRregCPP");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_FDRregCPP(Rcpp::wrap(z), Rcpp::wrap(X), Rcpp::wrap(M0), Rcpp::wrap(MTot), Rcpp::wrap(PriorPrecision), Rcpp::wrap(PriorMean), Rcpp::wrap(nmc), Rcpp::wrap(nburn), Rcpp::wrap(p0), Rcpp::wrap(betaguess));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<SEXP >(__result);
    }

    inline SEXP EmpiricalBayesFDRregCPP(NumericVector z, const arma::mat& X, NumericVector M0, NumericVector M1, const arma::mat& PriorPrecision, const arma::vec& PriorMean, int nmc, int nburn, const arma::vec& betaguess) {
        typedef SEXP(*Ptr_EmpiricalBayesFDRregCPP)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_EmpiricalBayesFDRregCPP p_EmpiricalBayesFDRregCPP = NULL;
        if (p_EmpiricalBayesFDRregCPP == NULL) {
            validateSignature("SEXP(*EmpiricalBayesFDRregCPP)(NumericVector,const arma::mat&,NumericVector,NumericVector,const arma::mat&,const arma::vec&,int,int,const arma::vec&)");
            p_EmpiricalBayesFDRregCPP = (Ptr_EmpiricalBayesFDRregCPP)R_GetCCallable("FDRreg", "FDRreg_EmpiricalBayesFDRregCPP");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_EmpiricalBayesFDRregCPP(Rcpp::wrap(z), Rcpp::wrap(X), Rcpp::wrap(M0), Rcpp::wrap(M1), Rcpp::wrap(PriorPrecision), Rcpp::wrap(PriorMean), Rcpp::wrap(nmc), Rcpp::wrap(nburn), Rcpp::wrap(betaguess));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<SEXP >(__result);
    }

    inline SEXP FullyBayesFDRregCPP(NumericVector z, const arma::mat& X, NumericVector M0, NumericVector M1, const arma::mat& PriorPrecision, const arma::vec& PriorMean, int nmc, int nburn, const arma::vec& betaguess) {
        typedef SEXP(*Ptr_FullyBayesFDRregCPP)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_FullyBayesFDRregCPP p_FullyBayesFDRregCPP = NULL;
        if (p_FullyBayesFDRregCPP == NULL) {
            validateSignature("SEXP(*FullyBayesFDRregCPP)(NumericVector,const arma::mat&,NumericVector,NumericVector,const arma::mat&,const arma::vec&,int,int,const arma::vec&)");
            p_FullyBayesFDRregCPP = (Ptr_FullyBayesFDRregCPP)R_GetCCallable("FDRreg", "FDRreg_FullyBayesFDRregCPP");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_FullyBayesFDRregCPP(Rcpp::wrap(z), Rcpp::wrap(X), Rcpp::wrap(M0), Rcpp::wrap(M1), Rcpp::wrap(PriorPrecision), Rcpp::wrap(PriorMean), Rcpp::wrap(nmc), Rcpp::wrap(nburn), Rcpp::wrap(betaguess));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<SEXP >(__result);
    }

    inline int mysample(NumericVector probs) {
        typedef SEXP(*Ptr_mysample)(SEXP);
        static Ptr_mysample p_mysample = NULL;
        if (p_mysample == NULL) {
            validateSignature("int(*mysample)(NumericVector)");
            p_mysample = (Ptr_mysample)R_GetCCallable("FDRreg", "FDRreg_mysample");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_mysample(Rcpp::wrap(probs));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<int >(__result);
    }

    inline double trapezoid(NumericVector x, NumericVector y) {
        typedef SEXP(*Ptr_trapezoid)(SEXP,SEXP);
        static Ptr_trapezoid p_trapezoid = NULL;
        if (p_trapezoid == NULL) {
            validateSignature("double(*trapezoid)(NumericVector,NumericVector)");
            p_trapezoid = (Ptr_trapezoid)R_GetCCallable("FDRreg", "FDRreg_trapezoid");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_trapezoid(Rcpp::wrap(x), Rcpp::wrap(y));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<double >(__result);
    }

    inline NumericVector dnormix(NumericVector y, NumericVector weights, NumericVector mu, NumericVector tau2) {
        typedef SEXP(*Ptr_dnormix)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_dnormix p_dnormix = NULL;
        if (p_dnormix == NULL) {
            validateSignature("NumericVector(*dnormix)(NumericVector,NumericVector,NumericVector,NumericVector)");
            p_dnormix = (Ptr_dnormix)R_GetCCallable("FDRreg", "FDRreg_dnormix");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_dnormix(Rcpp::wrap(y), Rcpp::wrap(weights), Rcpp::wrap(mu), Rcpp::wrap(tau2));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericVector >(__result);
    }

    inline NumericVector marnormix(NumericVector y, NumericVector sigma2, NumericVector weights, NumericVector mu, NumericVector tau2) {
        typedef SEXP(*Ptr_marnormix)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_marnormix p_marnormix = NULL;
        if (p_marnormix == NULL) {
            validateSignature("NumericVector(*marnormix)(NumericVector,NumericVector,NumericVector,NumericVector,NumericVector)");
            p_marnormix = (Ptr_marnormix)R_GetCCallable("FDRreg", "FDRreg_marnormix");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_marnormix(Rcpp::wrap(y), Rcpp::wrap(sigma2), Rcpp::wrap(weights), Rcpp::wrap(mu), Rcpp::wrap(tau2));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericVector >(__result);
    }

    inline NumericVector rnormix(int n, NumericVector weights, NumericVector mu, NumericVector tau2) {
        typedef SEXP(*Ptr_rnormix)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_rnormix p_rnormix = NULL;
        if (p_rnormix == NULL) {
            validateSignature("NumericVector(*rnormix)(int,NumericVector,NumericVector,NumericVector)");
            p_rnormix = (Ptr_rnormix)R_GetCCallable("FDRreg", "FDRreg_rnormix");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_rnormix(Rcpp::wrap(n), Rcpp::wrap(weights), Rcpp::wrap(mu), Rcpp::wrap(tau2));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<NumericVector >(__result);
    }

    inline IntegerVector draw_mixture_component(NumericVector y, NumericVector sigma2, NumericVector weights, NumericVector mu, NumericVector tau2) {
        typedef SEXP(*Ptr_draw_mixture_component)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_draw_mixture_component p_draw_mixture_component = NULL;
        if (p_draw_mixture_component == NULL) {
            validateSignature("IntegerVector(*draw_mixture_component)(NumericVector,NumericVector,NumericVector,NumericVector,NumericVector)");
            p_draw_mixture_component = (Ptr_draw_mixture_component)R_GetCCallable("FDRreg", "FDRreg_draw_mixture_component");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_draw_mixture_component(Rcpp::wrap(y), Rcpp::wrap(sigma2), Rcpp::wrap(weights), Rcpp::wrap(mu), Rcpp::wrap(tau2));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<IntegerVector >(__result);
    }

    inline List PredictiveRecursionFDR(NumericVector z, NumericVector grid_x, NumericVector theta_guess, double nullprob = 0.95, double mu0 = 0.0, double sig0 = 1.0, double decay = -0.67) {
        typedef SEXP(*Ptr_PredictiveRecursionFDR)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_PredictiveRecursionFDR p_PredictiveRecursionFDR = NULL;
        if (p_PredictiveRecursionFDR == NULL) {
            validateSignature("List(*PredictiveRecursionFDR)(NumericVector,NumericVector,NumericVector,double,double,double,double)");
            p_PredictiveRecursionFDR = (Ptr_PredictiveRecursionFDR)R_GetCCallable("FDRreg", "FDRreg_PredictiveRecursionFDR");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_PredictiveRecursionFDR(Rcpp::wrap(z), Rcpp::wrap(grid_x), Rcpp::wrap(theta_guess), Rcpp::wrap(nullprob), Rcpp::wrap(mu0), Rcpp::wrap(sig0), Rcpp::wrap(decay));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<List >(__result);
    }

    inline List eval_pr_dens(NumericVector z, NumericVector grid_x, NumericVector grid_theta, double sig0) {
        typedef SEXP(*Ptr_eval_pr_dens)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_eval_pr_dens p_eval_pr_dens = NULL;
        if (p_eval_pr_dens == NULL) {
            validateSignature("List(*eval_pr_dens)(NumericVector,NumericVector,NumericVector,double)");
            p_eval_pr_dens = (Ptr_eval_pr_dens)R_GetCCallable("FDRreg", "FDRreg_eval_pr_dens");
        }
        RObject __result;
        {
            RNGScope __rngScope;
            __result = p_eval_pr_dens(Rcpp::wrap(z), Rcpp::wrap(grid_x), Rcpp::wrap(grid_theta), Rcpp::wrap(sig0));
        }
        if (__result.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (__result.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(__result).c_str());
        return Rcpp::as<List >(__result);
    }

}

#endif // __FDRreg_RcppExports_h__
