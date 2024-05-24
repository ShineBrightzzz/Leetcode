select project_id,round(avg(experience_years*1.0),2) as average_years from employee e join project p on e.employee_id = p.employee_id
group by project_id
order by project_id asc