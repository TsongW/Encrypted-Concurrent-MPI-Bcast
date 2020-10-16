
set style data histograms
set style fill pattern border lt -1
set key left top Left samplen 1 reverse
set key font "Times-Roman,28"
set xlabel "Message Size" font "Times-Roman,32"
set ylabel "Latency (us)" font "Times-Roman,32"
set grid ytics lw 0.7 lt 0
#set yrange [:140]

set term postscript eps font "Times-Roman, 30" enhanced color
set output label.'.eps'

plot file using 5:xtic(1) title "Naive+ RDB" lc rgb "#e0f3db" fillstyle pattern 3,\
 "" using 10 title "C-RDB" lt rgb "#a8ddb5" fillstyle pattern 3,\
 "" using 12 title "ShMem-NB" lt rgb "#43a2ca" fillstyle pattern 3




