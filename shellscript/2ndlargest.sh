echo "Enter 3 no:"
read a
read b
read c
if [ $a -gt $b -a $a -lt $c ]||[ $a -lt $b -a $a -gt $c ]
then
echo "$a is 2nd greatest"
elif [ $b -gt $a -a $b -lt $c ]||[ $b -lt $a -a $b -gt $c ]
then
echo "$b is 2nd greatest"
else
echo "$c is 2nd greatest"
fi
