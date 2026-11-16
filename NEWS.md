# GenKern 1.2.60.9001

Renova release, based on CRAN GenKern 1.2-60 (archived on CRAN 2022-05-23).

- `src/init.c` (new): registers the `.C()` routines `GenKernSec`, `GenKernSur` and `getlims` with their argument types and disables dynamic symbol lookup.
- `NAMESPACE`: `useDynLib(GenKern, .registration = TRUE, .fixes = "C_")`; `importFrom("stats", "cor", "na.fail", "na.omit")` and `importFrom("KernSmooth", "dpik")` added.
- `src/getlims.c`: `getlims()` declared `void` and ends with `return;` instead of returning `*limits` from an implicit-int function; results are still written through the `limits` pointer.
- `R/zzz.r`: trailing whitespace removed from a comment (no code change).
- `DESCRIPTION`: `Title` in title case, `Description` reads `Computes generalised kernel density estimates.`, and `Authors@R` added with `Author` as `David Lucy [aut, cre], Robert Aykroyd [aut]` (metadata only).
- `DESCRIPTION`: stale optional `Date` field removed (metadata only).

Release preparation:

- `DESCRIPTION`: `Version` set to `1.2.60.9001`; "Compatibility updates by Renova." appended to `Description`.
- The stale `MD5` file was removed.
- `COPYING` (GNU GPL version 2 text) was added; the `License` field is unchanged.
- `README.md` was added and is excluded from the R build.
- `NEWS.md` was added and is excluded from the R build.
