echo "Enter principal:"
read p
echo "Enter rate of interest:"
read r
echo "Enter time:"
read t
k=`expr $p`
s=`expr $p \* $r \* $t`
a=`expr $s / 100`
echo "simple interest of $k=$a"
