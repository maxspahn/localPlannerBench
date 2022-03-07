import subprocess
import os
import re

from plannerbenchmark.generic.experiment import Experiment
pkg_path = os.path.dirname(__file__) + '/../postProcessing/'


class SeriesPlotting(object):

    def __init__(self, folder, nbMetrics):
        self._folder = folder
        self._nbMetrics = nbMetrics

    def getPlannerNames(self):
        plannerNames = set()
        pattern = re.compile(r'(\D*)_\d{8}_\d{6}')
        for fname in os.listdir(self._folder):
            match = re.match(pattern, fname)
            if match:
                plannerNames.add(match.group(1))
        return plannerNames

    def plot(self):
        plannerNames = self.getPlannerNames()
        curPath = os.path.dirname(os.path.abspath(__file__)) + "/"
        curPath = pkg_path
        createPlotFolder = curPath + "plottingSeries"
        for plannerName in plannerNames:
            subprocess.Popen(
                [
                    "./createPlot",
                    self._folder,
                    plannerName,
                    str(self._nbMetrics),
                ],
                cwd=createPlotFolder,
                stdout=subprocess.PIPE,
            ).wait()