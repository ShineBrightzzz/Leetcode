select p.product_id,coalesce(round(sum(units*price)*1.0/sum(u.units),2),0) as average_price from prices p 
left join unitssold u on p.product_id = u.product_id and purchase_date between start_date and end_date
group by p.product_id