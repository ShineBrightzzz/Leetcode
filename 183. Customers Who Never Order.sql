select name as Customers from customers left join orders on orders.customerid = customers.id
where orders.id is null