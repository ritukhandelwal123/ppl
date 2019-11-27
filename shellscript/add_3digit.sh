echo "Enter a three digit no:";
read n
n1=$(($n%10));
n=$(($n/10));
n2=$(($n%10));
n=$(($n/10));
sum=$(($n+$n1+$n2));
echo "sum is $sum";