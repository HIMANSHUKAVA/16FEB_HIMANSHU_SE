create database asignment;
use asignment;
create table salesman(
salesman_id int  , 
name varchar(150),
city varchar(60),
comission float,
primary key(salesman_id)
);
create table customer(
customer_id int,
customer_name varchar(200),
city varchar(50),
grade varchar(12),
salesman_id int,
foreign key (salesman_id) references salesman(salesman_id)
);
alter table salesman
rename column name to salesman_name;
alter table customer 
modify column grade  int;



insert into salesman(salesman_id , salesman_name ,city , comission)values
(5001 , 'james hoog', 'new york' , 0.15) , 
(5002,'nail  knite','paries',0.13) , 
(5005,'pit alex','london',0.11),
(5006,'mc lyon','paries',0.14),
(5007,'paul adam','rome',0.13),
(5003,'lauson hen ','san jose',0.12);
insert into customer(customer_id , customer_name , city , grade , salesman_id)values
(3002,'nick rimando','new york',100,5001),
(3007,'brad davies', 'new york',200,5001),
(3005,'graham zusi','california',200,5002),
(3008,'julian green','london',300,5002),
(3004,'fabian johnson','paries',300,5002),
(3009,'geoff cameron','berlin',100,5003),
(3003,'jozy altidor','moscow',200,5007),
(3001,'brad  guzan','london',100,5005);
select customer_name , city  from customer;
select comission from salesman;
select *from salesman  where salesman_name like 's';
select * from customer where customer_name like 'c';



 


