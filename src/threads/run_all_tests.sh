#!/bin/sh

array[0]=alarm-single
array[1]=alarm-multiple
array[2]=alarm-simultaneous
array[3]=alarm-priority
array[4]=alarm-zero
array[5]=alarm-negative
array[6]=priority-change
array[7]=priority-donate-one
array[8]=priority-donate-multiple
array[9]=priority-donate-multiple2
array[10]=priority-donate-nest
array[11]=priority-donate-sema
array[12]=priority-donate-lower
array[13]=priority-fifo
array[14]=priority-preempt
array[15]=priority-sema
array[16]=priority-condvar
array[17]=priority-donate-chain
array[18]=mlfqs-load-1
array[19]=mlfqs-load-60
array[20]=mlfqs-load-avg
array[21]=mlfqs-recent-1
array[22]=mlfqs-fair-2
array[23]=mlfqs-fair-20
array[24]=mlfqs-nice-2
array[25]=mlfqs-nice-10
array[26]=mlfqs-block

# for((i=0;i<27;i++));
# do
#     pintos run ${array[$i]} > test_log/${array[$i]}_record.txt
# done

pintos run ${array[$1]} > test_log/${array[$1]}_record.txt
# $1 means the first argument in the command line

echo "all done"