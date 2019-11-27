var a:array[1..20,1..20]of integer;
i,j,r,c:integer;
begin
    writeln('Enter rows:');
    readln(r);
    writeln('Enter columns:');
    readln(c);
    writeln('Enter elements:');
    for i:=1 to r do 
    for j:=1 to c do 
    readln(a[i][j]);
    for i:=1 to r do 
    begin 
    for j:=1 to c do 
    write(#9,a[i][j]);
    writeln(#10);
    end;
end.