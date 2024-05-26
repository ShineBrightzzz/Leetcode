select sell_date,count(distinct product) as num_sold, STRING_AGG( product, ',') within group (order by product asc) as products from
(select distinct sell_date,product from activities) as distinct_prod
group by sell_date
order by sell_date asc;