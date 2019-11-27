for i in `seq 1 10`
do
if [ $((i%2)) -eq 0 -a $((i%3)) -eq 0 ]
then
echo "nos divisble by 2 and 3 between 1 to 10 are:$i"
fi
done
