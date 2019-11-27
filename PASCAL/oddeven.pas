var n:array [1..50] of integer;
i,odd,even:integer;
begin
    odd:=0;
    even:=0;
    WriteLn('Enter no:');
    for i:=1 to 10 do 
    ReadLn(n[i]);
    for i:=1 to 10 do
    begin
        if(n[i] mod 2 = 0)then
        even:=even+1
        else
        begin
            odd:=odd+1;
        end;
    end;
    WriteLn('even no',even,'odd no',odd);
end.