echo "Enter three no:"
read a
read b
read c
if [ $a -gt $b -a $a -gt $c ]
then
echo "$a is greatest"
fi
if [ $b -gt $a -a $b -gt $c ]
then
echo "$b is greatest"
fi
if [ $c -gt $a -a $c -gt $b ]
then
echo "$c is greatest"
fi