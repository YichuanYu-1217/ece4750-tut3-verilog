#=========================================================================
# SortUnitFlat_test
#=========================================================================

import pytest


from pymtl3 import *
from pymtl3.stdlib.test_utils import run_test_vector_sim
from ..MinMaxUnit import MinMaxUnit

#-------------------------------------------------------------------------
# test_basic
#-------------------------------------------------------------------------

# Add header string label each column
header_str = \
  ( "in0",  "in1",  
    "out_min", "out_max")

# We could replace ? with x using this
x = '?'

def test_basic( cmdline_opts ):
  run_test_vector_sim( MinMaxUnit(p_nbits=4), [ header_str,
    [0,  0,  0,  0 ],
    [4,  2,  2,  4 ],
    [1,  3,  1,  3 ],
    [5,  2,  2,  5 ],
    [0,  0,  0,  0 ],
    [11,  1,  1,  11 ],
  ], cmdline_opts )

