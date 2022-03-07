set term postscript eps color size 2, 7 font "RomanSerif.ttf" 14
seriesFolder=ARG1
planner1Type=ARG2
planner2Type=ARG3
N=ARG4
print N
inFile=seriesFolder."resultsTable_comparison.csv"
outFileBox=seriesFolder."/results_comparison.eps"
set output outFileBox

set datafile separator ' '
#set bmargin at screen 0.40
#set lmargin at screen 0.30
#set rmargin at screen 0.9
set bmargin at screen 0.26

set style fill solid 0.5 border -1
set style boxplot nooutliers
set log y2 2
# set style boxplot outliers pointtype -1
set style data boxplot
set y2range [0.015:6.00]
unset ytics
set y2tics nomirror font ',35' rotate by 90 out offset 0.5,-1.0
set y2tics (0.02, 0.1, 0.2, 0.5, 1, 2, 5)
set grid y2tics

# Planner names
if (planner1Type eq 'fabric') planner1 = 'Static Fabric'
if (planner2Type eq 'fabric') planner2 = 'Static Fabric'
if (planner1Type eq 'mpc') planner1 = 'MPC'
if (planner2Type eq 'mpc') planner2 = 'MPC'
if (planner1Type eq 'dynamicFabric') planner1 = 'Dynamic Fabric'
if (planner2Type eq 'dynamicFabric') planner2 = 'Dynamic Fabric'
yLabel = sprintf("%s / %s on logarithmic scale", planner2, planner1)
set y2label yLabel font ",35" rotate by 90


firstrow = system('head -1 '.inFile)

unset key
set xtics () scale 1.0 font ",35" rotate by 90 out offset -0.5, -14.0
set xtics nomirror
do for [i=2:N] {
  metricName = word(firstrow, i)
  if (metricName eq "solverTime"){
    set xtics add ("Solver Time" i);
  }
  if (metricName eq "integratedError") {
    set xtics add ("Summed Error" i);
  }
  if (metricName eq "pathLength") {
    set xtics add ("Path Length" i);
  }
  if (metricName eq "clearance") {
    set xtics add ("Clearance" i);
  }
  if (metricName eq "selfClearance") {
    set xtics add ("Self Clearence" i);
  }
  if (metricName eq "time2Goal") {
    set xtics add ("Time to Goal" i);
  }
}
plot for [i=2:N] inFile using (i):i lw 2 axes x1y2, \
  1 with lines dt 3 lw 6 lt rgb "red" notitle axes x1y2