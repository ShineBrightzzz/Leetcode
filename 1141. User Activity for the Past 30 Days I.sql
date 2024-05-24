select activity_date as day, count(distinct user_id) as active_users from activity
where datediff(day,activity_date,'2019-07-27') <30 and activity_date<='2019-07-27'
group by activity_date