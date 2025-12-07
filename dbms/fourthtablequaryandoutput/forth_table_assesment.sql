use asignment_2;
create table salepeople
(salesman_id  int primary key ,
name  varchar(150) ,
city varchar(160) , 
comission float 
);
insert into salepeople (salesman_id , name , city , comission) 
values
(5001 , 'james hoog' ,'new york' , 0.15) ,
(5002 , 'nail knite' , 'paries' , 0.13) ,
(5005 , 'pit  alex' , 'london' , '0.11') ,
(5006 , 'mc lyone' , 'paries' , 0.14) ,
(5007 , 'paul adam' , 'rome' , 0.13) ,
(5003 , 'lauson  hen' , 'san jose'  , 0.12);

select * from salepeople;
