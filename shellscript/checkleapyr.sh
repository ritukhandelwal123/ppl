echo "Enter yr:"
read n 
if [ $((n%400)) -eq 0 -o $(($n%4)) -eq 0 -a $(($n%100)) -ne 0 ]
then
echo "$n is a leap yr"
else
echo "$n is not a leap yr"
fi