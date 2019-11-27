var 
a:array[1..10,1..10]of integer;
i,j,r,c:integer;
begin
    writeln('eneter size of row:');
    readln(r);
    writeln('enter size of column:');
    readln(c);
    writeln('Enter elements:');
    for i:=1 to r do 
    for j:=1 to c do 
    readln(a[i][j]);
    writeln('the giver matrix is:');
    for i:=1 to r do 
    begin 
    for j:=1 to c do 
    write(#9,a[i][j]);
    writeln(#10);
    end;
    writeln('transpose of a matrix:');
    for j:=1 to r do
    begin 
    for i:=1 to c do 
    write(#9,a[i][j]);
    writeln(#10);
    end;
end.