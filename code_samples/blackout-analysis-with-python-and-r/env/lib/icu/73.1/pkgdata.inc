GENCCODE_ASSEMBLY_TYPE=-a gcc-darwin
SO=dylib
SOBJ=dylib
A=a
LIBPREFIX=lib
LIB_EXT_ORDER=.73.1.dylib
COMPILE=x86_64-apple-darwin13.4.0-clang -DU_ATTRIBUTE_DEPRECATED= -D_FORTIFY_SOURCE=2 -isystem /Users/marierivers/Documents/Data_Science/marierivers.github.io/code_samples/blackout-analysis-with-python-and-r/env/include -mmacosx-version-min=10.9   -DU_HAVE_STRTOD_L=1 -DU_HAVE_XLOCALE_H=1 -DU_HAVE_STRING_VIEW=1  -march=core2 -mtune=haswell -mssse3 -ftree-vectorize -fPIC -fPIE -fstack-protector-strong -O2 -pipe -isystem /Users/marierivers/Documents/Data_Science/marierivers.github.io/code_samples/blackout-analysis-with-python-and-r/env/include -fdebug-prefix-map=/var/folders/sy/f16zz6x50xz3113nwtb9bvq00000gp/T/abs_09mis60fnk/croot/icu_1692293053186/work=/usr/local/src/conda/icu-73.1 -fdebug-prefix-map=/Users/marierivers/Documents/Data_Science/marierivers.github.io/code_samples/blackout-analysis-with-python-and-r/env=/usr/local/src/conda-prefix -std=c11 -Wall -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings   -fno-common -c
LIBFLAGS=-I/Users/marierivers/Documents/Data_Science/marierivers.github.io/code_samples/blackout-analysis-with-python-and-r/env/include  -dynamic
GENLIB=x86_64-apple-darwin13.4.0-clang -dynamiclib -dynamic -march=core2 -mtune=haswell -mssse3 -ftree-vectorize -fPIC -fPIE -fstack-protector-strong -O2 -pipe -isystem /Users/marierivers/Documents/Data_Science/marierivers.github.io/code_samples/blackout-analysis-with-python-and-r/env/include -fdebug-prefix-map=/var/folders/sy/f16zz6x50xz3113nwtb9bvq00000gp/T/abs_09mis60fnk/croot/icu_1692293053186/work=/usr/local/src/conda/icu-73.1 -fdebug-prefix-map=/Users/marierivers/Documents/Data_Science/marierivers.github.io/code_samples/blackout-analysis-with-python-and-r/env=/usr/local/src/conda-prefix -std=c11 -Wall -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings   -Wl,-pie -Wl,-headerpad_max_install_names -Wl,-dead_strip_dylibs -Wl,-rpath,/Users/marierivers/Documents/Data_Science/marierivers.github.io/code_samples/blackout-analysis-with-python-and-r/env/lib -L/Users/marierivers/Documents/Data_Science/marierivers.github.io/code_samples/blackout-analysis-with-python-and-r/env/lib -Wl,-rpath,/Users/marierivers/Documents/Data_Science/marierivers.github.io/code_samples/blackout-analysis-with-python-and-r/env/lib 
LDICUDTFLAGS=
LD_SONAME=-Wl,-compatibility_version -Wl,73 -Wl,-current_version -Wl,73.1 -install_name /Users/marierivers/Documents/Data_Science/marierivers.github.io/code_samples/blackout-analysis-with-python-and-r/env/lib/
RPATH_FLAGS=
BIR_LDFLAGS=
AR=x86_64-apple-darwin13.4.0-ar
ARFLAGS=r -c
RANLIB=x86_64-apple-darwin13.4.0-ranlib
INSTALL_CMD=/usr/bin/install -c
