set term postscript eps color size 2.5, 3.5
seriesFolder=ARG1
planner1Type=ARG2
planner2Type=ARG3
inFile=seriesFolder."success.csv"

outFileHist=seriesFolder."/success.eps"

set output outFileHist
set datafile separator ','
set bmargin at screen 0.4
set rmargin at screen 0.7

set style fill solid 1.0 border -1
set style data histogram
set style histogram rowstacked
set boxwidth 0.5
set xtics (planner1Type 0, planner2Type 1) scale 1.0 font ',25' rotate by -45
set xrange [-0.5:1.5]
set yrange [0:120]
set xtics nomirror font ',25'
set ytics nomirror font ',25'
set ylabel '#Cases' font ',25'

plot inFile using 1 t "Success" lc rgbcolor 'green', '' using 2 t 'Collision' lc rgb 'red', '' using 3 t 'Not reached' lc rgb 'blue'

