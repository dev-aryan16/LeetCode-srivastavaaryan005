# Write your MySQL query statement below
-- Write an SQL query that reports the average experience years of all the employees for each project, rounded to 2 digits.

select p.project_id, round(avg(e.experience_years),2) as average_years from Project as p
left join Employee as e on p.employee_id=e.employee_id 
group by p.project_id;