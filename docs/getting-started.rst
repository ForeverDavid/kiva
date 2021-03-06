Getting Started
===============

Kiva is a command line tool. You can execute Kiva from the command line as follows::

  kiva input.yaml weather.epw output.csv

Kiva will simulate the foundation defined in ``input.yaml`` using the weather conditions specfified in ``weather.epw`` and generate time series results in ``output.csv``. Execute the ``run-kiva`` file in the installation to see a demonstration of how to use Kiva.

Input files are YAML formatted descriptions of building foundations and simulation control settings. This is described in more detail in the following sections.

Weather files are read in the EnergyPlus weather (EPW) file format.

Output files are a simple comma separated variable (CSV) file format, with results corresponding to output requested in the ``input.yaml`` file.
