Getting started
=====================================

This is the guide to quickly get going with the local motion planning benchmark suite.


Pre-requisites
-----------------

- Linux Ubuntu LTS >= 18.04
- Python >3.6, < 3.10
- pip3
- gnuplot (``sudo apt install gnuplot``)
- [Optional] `poetry <https://python-poetry.org/docs/>`_
- [Optional] `embotech forces pro <https://www.embotech.com/products/forcespro/overview/>`_ for mpc


Installation
------------

You first have to download the repository

.. code:: bash

    git clone git@github.com:maxspahn/localPlannerBench.git

Then, you can install the package using pip as:

.. code:: bash

    pip3 install .

Optional: Installation with poetry
------------------------------------

If you want to use `poetry <https://python-poetry.org/docs/>`_, you have
to install it first. See their webpage for instructions
`docs <https://python-poetry.org/docs/>`_. Once poetry is installed, you can
install the virtual environment with the following commands. Note that during 
the first installation ``poetry update`` takes up to 300 secs.

.. code:: bash

    poetry update
    poetry install

The virtual environment is entered by

.. code:: bash

    poetry shell

Tutorial
------------

The following is a very simple example case.

Run an experiments:

Experiments should be added in separate folder in ``experiments``. 
One very simple example can be found in this folder.
Note that you need to active your poetry shell if you have installed the package using
poetry by

.. code:: bash

    poetry shell

Then you navigate there by

.. code:: bash

    cd experiments/example

Then the experiment is run with the command line interface

.. code:: bash

    ../../plannerbenchmark/exec/runner -c setup/exp.yaml -p pdplanner setup/planner.yaml --render

Postprocessing:

The experiments can be postprocessed using the provide executable. When
using poetry, make sure you are in the virtual environment (``poetry shell``)

.. code:: bash

    cd experiments/example

The you can run the post processor with arguments as

.. code:: bash

    ../../plannerbenchmark/exec/postProcessor --exp path/to/experiment -k time2Goal pathLength --plot --no-open

More detailed information about this example can be found in :ref:`example_long`
