select distinct salary as SecondHighestSalary from employee order by salary desc 
offset 1 rows fetch next 1 rows only