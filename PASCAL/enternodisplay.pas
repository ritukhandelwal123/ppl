var n:array[1..20]of integer;
i,n1:integer;
begin
    writeln('Enter size[1..20]:');
    readln(n1);
    writeln('Enter elements:');
    for i:=1 to n1 do 
    begin
        readln(n[i]);
    end;
    for i:=1 to n1 do 
    writeln('the element are [',i,']=',n[i]);
end.