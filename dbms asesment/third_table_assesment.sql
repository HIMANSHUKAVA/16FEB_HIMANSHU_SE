use asignment_2;
create table saleperson(
Sno  int auto_increment ,
Sname varchar(150) ,
city varchar(40) ,
comission float  ,
primary key(Sno)
)  ;

create table customer 
(cnm int primary key auto_increment ,
cnma varchar(150) ,
city varchar(150) ,
rating int ,
sno int ,
foreign key (sno) references saleperson(sno)
);

insert into saleperson(
Sno , Sname , city , comission)
values
(1001 , 'peel' , 'london' , 0.12) ,
(1002 , 'serres' , 'san jose' , 0.13) ,
(1004 , 'motika ' , 'london' , 0.11) ,
(1007 , 'rafkin' , 'barcelona' , 0.15) ,
(1003 , 'axelord' , 'new york' , 0.1) ;

insert into customer(cnm , cnma , city , rating , sno) values
(201 , 'hoffman' , 'london' , 100 , 1001) ,
(202 , 'giovanne' , 'roe' , 200 , 1003) ,
(203 , 'liu' , 'san jose' , 300 , 1002) ,
(204 , 'grass' , 'barcelona'  ,100 ,  1002) ,
(206 , 'clemens' , 'london' , 300 , 1007) ,
(207 , 'perelia' , 'roe ' ,100 , 1004);

select * from saleperson;
select * from customer;

select Sname , comission 
from saleperson 
where city ="london";

select * from 
saleperson
where city = "london" or "london";

select * from
saleperson
where comission between 0.10 and 0.12 ;

select *from 
customer 
where rating >100
or (rating<=100 and city = "roe") ;
