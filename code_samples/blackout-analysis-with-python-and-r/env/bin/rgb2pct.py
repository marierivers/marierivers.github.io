#!/Users/marierivers/Documents/Data_Science/marierivers.github.io/code_samples/blackout-analysis-with-python-and-r/env/bin/python

import sys

from osgeo.gdal import deprecation_warn

# import osgeo_utils.rgb2pct as a convenience to use as a script
from osgeo_utils.rgb2pct import *  # noqa
from osgeo_utils.rgb2pct import main

deprecation_warn("rgb2pct")
sys.exit(main(sys.argv))
