# Write your MySQL query statement belows
select t.teacher_id, 
count(distinct t.subject_id) 
as cnt
from Teacher as t
group by teacher_id;