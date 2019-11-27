echo "Enter no:"
read n
q=$n
a=0
while [ $q -gt 0 ]
do
m=$(($q%10))
q=$(($q/10))
a=$(( $a + $m * $m * $m ))
done
if [ $a = $n ]
then
echo "$n is an armstrong number"
else
echo "$n is not an armstrong no"
fi