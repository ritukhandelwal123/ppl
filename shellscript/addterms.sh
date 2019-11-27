echo "Enter no:"
read n
while [ $n -ne 0 ]
do
sum=$(($sum+($n%10)))
n=$(($n/10))
done
echo "The sum is $sum"