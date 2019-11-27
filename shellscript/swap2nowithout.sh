echo "Enter two numbers:"
read a
read b
a=$(($a + $b));
b=$(($a - $b));
a=$(($a - $b));
echo "after swapping :$a $b"