var a:array[1..10,1..10]of integer;
var b:array[1..10,1..10]of integer;
var sum:array[1..10,1..10]of integer;
i,j,r,c:integer;
begin
    writeln('Enter size of row:');
    readln(r);
    writeln('Enter size of column:');
    readln(c);
    writeln('Enter elements of 1st matrix:');
    for i:=1 to r do 
    for j:=1 to c do 
        readln(a[i][j]);
    writeln('Enter elements of 2nd matrix:');
    for i:=1 to r do 
    for j:=1 to c do 
        readln(b[i][j]);
    writeln('After addition');
    for i:=1 to r do 
    begin 
    for j:=1 to c do 
    sum[i][j]:=a[i][j]+b[i][j];
    end;
    for i:=1 to r do
    begin
        for j:=1 to c do 
        write(#9,sum[i][j]);
        writeln(#10);
    end;
end.