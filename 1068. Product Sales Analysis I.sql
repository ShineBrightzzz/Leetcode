select product_name,year,price from sales s join product p on s.product_id = p.product_id
group by sale_id,product_name,year,price