# GenKern

Functions for generating and manipulating binned kernel density estimates.

Compatibility updates by Renova.

Version 1.2.60.9001: native routines are registered (`src/init.c`, `useDynLib(GenKern, .registration = TRUE, .fixes = "C_")`), `getlims()` in `src/getlims.c` is declared `void` to match its `.C()` use, `NAMESPACE` imports the stats and KernSmooth functions the package calls, and the DESCRIPTION title, Description, `Authors@R` and stale `Date` are updated.

## Install

```r
install.packages("GenKern", repos = c(
  Renova = "https://renova-r.r-universe.dev",
  CRAN = "https://cloud.r-project.org"
))
```

See the [R-universe package page](https://renova-r.r-universe.dev/GenKern) for builds and installation. This release is tagged on GitHub as `renova-1.2.60.9001`:

```r
remotes::install_github("renova-r/GenKern@renova-1.2.60.9001")
```

[Release notes](NEWS.md) · [Renova package directory](https://github.com/renova-r/revival-catalog)

GenKern is by David Lucy (maintainer) and Robert Aykroyd; the original CRAN package is at <https://CRAN.R-project.org/package=GenKern>. License: GPL-2; see [COPYING](COPYING).
