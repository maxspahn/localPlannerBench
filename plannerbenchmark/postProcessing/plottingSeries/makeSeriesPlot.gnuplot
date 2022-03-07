set term postscript eps color size 1, 7 font "RomanSerif.ttf" 14
seriesFolder=ARG1
planner=ARG2
N=ARG3
inFile=seriesFolder."resultsTable_".planner.".csv"

set datafile separator ' '
#set bmargin at screen 0.40
#set lmargin at screen 0.30
#set rmargin at screen 0.9
set bmargin at screen 0.32

set style fill solid 0.5 border -1
set border 9
set style boxplot nooutliers
# set style boxplot outliers pointtype -1
set style data boxplot
# set log y2 2
# set y2range [0.9:2.00]
set grid y2tics
unset ytics

firstrow = system('head -1 '.inFile)

unset key
unset xtics
set xtics () scale 1.0 font ",35" rotate by 90 out offset -0.5, -18.0
set xtics nomirror
do for [i=2:N] {
  metricName = word(firstrow, i)
  outFileBox=seriesFolder."/results_".planner."_".metricName.".eps"
  set output outFileBox
  if (metricName eq "solverTime"){
    set xtics add ("Solver Time [s]" i);
    set y2tics nomirror font ',35' rotate by 90 out offset 0.5,-2.5
    set y2range [0.6:0.80]
    set y2tics (0.65, 0.7, 0.75)
    colorName = 'green'
  }
  if (metricName eq "integratedError") {
    set xtics add ("Summed Error" i);
    colorName = 'red'
  }
  if (metricName eq "pathLength") {
    set xtics add ("Path Length [m]" i);
    set y2range [0.0:10.00]
    set y2tics (0.0, 2.0, 4, 6, 8.0, 10)
    set y2tics nomirror font ',35' rotate by 90 out offset 0.5,-1.0
    colorName = 'violet'
  }
  if (metricName eq "clearance") {
    set xtics add ("Clearance [m]" i);
    set y2range [0.0:1.00]
    set y2tics (0.0, 0.25, 0.5, 0.75, 1.0)
    set y2tics nomirror font ',35' rotate by 90 out offset 0.5,-2.5
    colorName = 'dark-blue'
  }
  if (metricName eq "selfClearance") {
    set xtics add ("Self Clearence [m]" i);
    colorName = 'blue'
  }
  if (metricName eq "time2Goal") {
    set xtics add ("Time to Goal [s]" i);
    set y2range [2.0:14.00]
    set y2tics (2.5, 5.0, 7.5, 10, 12.5)
    set y2tics nomirror font ',35' rotate by 90 out offset 0.5,-2.0
    colorName = 'blue'
  }
  plot inFile using (i):i lw 2 lc rgb colorName  axes x1y2
}
# plot for [i=2:N] inFile using (i):i lw 2 axes x1y2