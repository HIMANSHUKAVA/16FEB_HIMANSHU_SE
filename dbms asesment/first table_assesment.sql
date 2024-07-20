create database asignment_2;
use asignment_2;
create table student
(
roll_no int  auto_increment ,
name varchar(150) , 
branch varchar(160) ,
primary key (roll_no)
);
create table exam
(
roll_no int , 
s_code varchar(140) , 
marks int  , 
p_code varchar(60) ,
foreign key (roll_no) references student(roll_no)
);
insert into student(name , branch) values
('jay ' , 'computer science') ,('suhani' , 'electronic and com') , ('kriti'  , 'electronic and com');
insert into exam(roll_no , s_code , marks , p_code)values
( 1 , 'CS11' , 50 , 'CS') ,
(1 , 'CS12' , 60 , 'CS') , 
(2 , 'EC101' , 66 , 'EC') , 
(2 , 'EC102' , 70 , 'EC') ,
(3 , 'EC101' , 45 , 'EC') ,
(3 , 'EC102' , 50, 'EC') ;

select *from student ;
select * from exam;
