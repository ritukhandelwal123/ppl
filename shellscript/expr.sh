echo "Enter value of b,a and c:"
read b
read a
read c
echo "b^2-4ac/2a="
echo "scale=5;($(($b*$b))-$((4*$a*$c))/$((2*$a)))"|bc