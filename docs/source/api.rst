API
=======

Runner
------

Benchmark
^^^^^^^^
.. autoclass:: plannerbenchmark.generic.config_signatures.LocalPlannerBenchConfig()
   :members:

Experiment
^^^^^^^^
.. autoclass:: plannerbenchmark.generic.config_signatures.ExperimentConfig()
   :members:

.. autoclass:: plannerbenchmark.generic.config_signatures.SubGoalCompositionConfig()
   :members:

.. autoclass:: plannerbenchmark.generic.config_signatures.StateConfig()
   :members:

.. autoclass:: plannerbenchmark.generic.config_signatures.LimitsConfig()
   :members:

.. autoclass:: plannerbenchmark.generic.config_signatures.RandomObstaclesConfig()
   :members:

.. autoclass:: plannerbenchmark.generic.config_signatures.GeometryConfig()
   :members:

.. autoclass:: plannerbenchmark.generic.config_signatures.ObstacleConfig()
   :members:

.. autoclass:: plannerbenchmark.generic.config_signatures.SelfCollisionConfig()
   :members:


Planners
^^^^^^^^
.. autoclass:: plannerbenchmark.generic.config_signatures.LocalPlannerConfig()
   :members:

.. autoclass:: plannerbenchmark.generic.config_signatures.PdConfig()
   :members:

.. autoclass:: plannerbenchmark.generic.config_signatures.MpcConfig()
   :members:

.. autoclass:: plannerbenchmark.generic.config_signatures.FabricsConfig()
   :members:



Post Processing
---------------

Metrics
^^^^^^^^

.. autoclass:: plannerbenchmark.postProcessing.metrics.Metric
   :inherited-members: 
   :show-inheritance:

.. autoclass:: plannerbenchmark.postProcessing.metrics.SolverTimesMetric
   :inherited-members: 
   :show-inheritance:

.. autoclass:: plannerbenchmark.postProcessing.metrics.TimeToReachGoalMetric
   :inherited-members: 
   :show-inheritance:

.. autoclass:: plannerbenchmark.postProcessing.metrics.IntegratedErrorMetric
   :inherited-members: 
   :show-inheritance:

.. autoclass:: plannerbenchmark.postProcessing.metrics.ClearanceMetric
   :inherited-members: 
   :show-inheritance:
   
.. autoclass:: plannerbenchmark.postProcessing.metrics.DynamicClearanceMetric
   :inherited-members: 
   :show-inheritance:

.. autoclass:: plannerbenchmark.postProcessing.metrics.PathLengthMetric
   :inherited-members: 
   :show-inheritance:

.. autoclass:: plannerbenchmark.postProcessing.metrics.SelfClearanceMetric
   :inherited-members: 
   :show-inheritance:

.. autoclass:: plannerbenchmark.postProcessing.metrics.SuccessMetric
   :inherited-members: 
   :show-inheritance:

Evaluation
^^^^^^^^^^

.. autoclass:: plannerbenchmark.postProcessing.caseEvaluation.CaseEvaluation
   :inherited-members: 
   :show-inheritance:

.. autoclass:: plannerbenchmark.postProcessing.seriesEvaluation.SeriesEvaluation
   :inherited-members: 
   :show-inheritance:

.. autoclass:: plannerbenchmark.postProcessing.seriesComparison.SeriesComparison
   :inherited-members: 
   :show-inheritance:

Plotting
^^^^^^^^

.. autoclass:: plannerbenchmark.postProcessing.casePlotting.CasePlotting
   :inherited-members: 
   :show-inheritance:

.. autoclass:: plannerbenchmark.postProcessing.seriesPlotting.SeriesPlotting
   :inherited-members: 
   :show-inheritance:

.. autoclass:: plannerbenchmark.postProcessing.seriesComparisonPlotting.SeriesComparisonPlotting
   :inherited-members: 
   :show-inheritance:

Helpers
^^^^^^^^

.. autofunction:: plannerbenchmark.postProcessing.helpers.createMetricsFromNames


