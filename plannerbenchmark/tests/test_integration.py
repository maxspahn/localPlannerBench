import os

from plannerbenchmark.tests.test_functions import *


def test_all_cases():
    absPath = os.path.dirname(os.path.abspath(__file__))
    caseFolders = absPath + '/cases/'
    for case in os.listdir(caseFolders):
        run_integration_test_case('cases/' + case)
