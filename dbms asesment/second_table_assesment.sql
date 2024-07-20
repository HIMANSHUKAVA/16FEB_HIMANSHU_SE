use asignment_2;
create table employe
(
employe_id int auto_increment , 
first_name varchar(150) ,
last_name varchar(150) ,
salary int , 
joining_date datetime ,
department varchar(140) , 
primary key (employe_id)
);

create table incentive
(
employe_id int , 
incentive datetime , 
incentive_amount  int , 
foreign key (employe_id) references employe(employe_id)
);
insert into employe(first_name ,last_name , salary  , joining_date , department) values
('john' , 'abrahm' ,1000000 , '2013-01-1 12:30:15', 'banking');
insert into employe(first_name ,last_name , salary  , joining_date , department) values
('michel','clark' , 800000 , '2013-01-1 12:30:10' ,'insurence' );
insert into employe(first_name ,last_name , salary  , joining_date , department) values
('roy' , 'thomas' , 700000 ,'13-02-1 12:30:15' , 'banking') , ('tom', 'jose' ,600000 ,'13-02-1 12:30:15','insurence');
insert into employe(first_name ,last_name , salary  , joining_date , department) values
('jerry' , 'pinto' , 650000 , '13-02-1 12:30:15','insurence') , ('phillip' , 'mathew' ,750000 , '13-02-1 12:30:15' , 'service') ;
insert into employe(first_name ,last_name , salary  , joining_date , department) values
 ('testname2','lname%' ,600000 , '13-02-1 12:30:15' , 'insurence');
insert into employe(first_name , last_name , salary , joining_date , department)values
('testname1' ,'123' ,650000,'13-01-01 12:30:15' , 'service');

insert into incentive(employe_id , incentive , incentive_amount)values
(1 , '13-02-1  12:20:15' ,5000 );
insert into incentive(employe_id , incentive , incentive_amount)values
(2 , '13-02-1 12:20:15' , 3000), 
(3 ,'13-02-1 12:20:15 ' , 4000) ,
(1 , '13-01-1 12:20:15' , 4500) ,
(2 , '13-01-1 12:20:15 ', 3500);
select * from employe;
select * from incentive;

select  *from employe where first_name ="tom";
 select first_name , joining_date , salary from employe ;
 
select * from
employe
order by first_name asc;

select * from employe where first_name like 'j%';

select department, max(salary)
from employe
group by department;
 
 select salary 
 from employe
 order by salary asc;
 
select  first_name , incentive_amount from
employe as a
join incentive as b
on  a.employe_id = b.employe_id
where b.incentive_amount > 3000;

                                 -- data backup from employe  trigger--
create table employe_backup
(
employe_id int auto_increment , 
first_name varchar(150) ,
last_name varchar(150) ,
salary int , 
joining_date datetime ,
department varchar(140) , 
insert_time datetime , 
message varchar(150) default  "record inserted please check the table " ,
primary key (employe_id)
);


delimiter //
create trigger backup_data
after insert
on employe
for each row
begin
insert into employe_backup(first_name , last_name , salary , joining_date , department , insert_time)
values(new.first_name , new.last_name , new.salary , new.joining_date , new.department , now());
end //
delimiter ;

                    -- ------------------check the trigger----------------------------

insert into employe(first_name , last_name , salary , joining_date , department)values
('himanshu', 'kava' , 120000 , '2013-01-10 12:30:15 ' , 'service ');

select *from employe_backup;








