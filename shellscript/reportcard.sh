echo "Enter marks of 5 subjects:"
read a
read b
read c
read d
read e
sum=$(($a+$b+$c+$d+$e));
avg=$((sum/5));
if [ $avg -gt 95 -a $avg -le 100 ]
then 
g="O"
fi
if [ $avg -gt 90  -a $avg -le 95 ]
then 
g="A+"
fi
if [ $avg -gt 85 -a $avg -le 90 ]
then 
g="A"
fi
if [ $avg -gt 80 -a $avg -le 85 ]
then 
g="B+"
fi
if [ $avg -gt 75 -a $avg -le 80 ]
then 
g="B"
fi
if [ $avg -gt 70 -a $avg -le 75 ]
then 
g="C+"
fi
if [ $avg -gt 65 -a $avg -le 70 ]
then 
g="C"
fi
if [ $avg -gt 60 -a $avg -le 65 ]
then 
g="D+"
fi
if [ $avg -gt 55 -a $avg -le 60 ] 
then 
g="D"
fi
if [ $avg -gt 50 -a $avg -le 55 ] 
then 
g="E+"
fi
if [ $avg -gt 45 -a $avg -le 50 ]
then 
g="E"
fi
if [ $avg -lt 45 ]
then
g="FAIL"
fi
echo "SGPA = $avg   grade=$g"
