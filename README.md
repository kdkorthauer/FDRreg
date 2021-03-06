# FDRreg

An R package for false discovery rate regression (FDRR), v0.2.

### Overview

Many approaches for multiple testing begin with the assumption that all tests in a given study should be combined into a global false-discovery-rate analysis. But this may be inappropriate for many of today's large-scale screening problems, where auxiliary information about each test is often available, and where a combined analysis can lead to poorly calibrated error rates within different subsets of the experiment.

This package implements false-discovery-rate regression (FDRR), in which auxiliary covariate information is used to improve power while maintaining control over the global error rate. The method can be motivated by a hierarchical Bayesian model in which covariates are allowed to influence the local false discovery rate (or equivalently, the posterior probability that a given observation is a signal) via a logistic regression. 

The main functions are `FDRreg` and `BayesFDRreg`; please see the corresponding help files for details, as well as the companion paper:

James G. Scott, Ryan C. Kelly, Matthew A. Smith, Pengcheng Zhou, and Robert E. Kass (2015).  False discovery rate regression: application to neural synchrony detection in primary visual cortex.  Journal of the American Statistical Association, DOI: 10.1080/01621459.2014.990973. [arXiv:1307.3495](http://arxiv.org/abs/1307.3495) [stat.ME].

### Installation

To install the package in R, first install the devtools package, and then use the commands
`````````
library(devtools)
install_github('jgscott/FDRreg', subdir="R_pkg/")
`````````

### Examples

The simulation study from this paper is contained in `examples/simstudy.R` which should be run in batch mode because of its dependence on multicore packages (these can generate errors in interactive mode).

The analysis of the neural synchrony data can be found in `examples/synchrony_analyze.R`.  The data itself is in the `data` folder, and corresponds to experiments described in the following two papers:  
* Kelly RC, Smith MA, Kass RE, Lee TS (2010) Local field potentials indicate network state and account for neuronal response variability. J. Comput. Neurosci., 29: 567-579.  
* Smith MA, Kohn A (2008) Spatial and temporal scales of neuronal correlation in primary visual cortex. J. Neurosci., 28: 12591-12603.  

If you use the data, please cite both of these papers along with this R package.




