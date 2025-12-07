use asignment_2;
create table item_mast(
pro_id int , 
pro_name varchar(150) ,
pro_price float , 
pro_comission float ,
primary key (pro_id) 
);
insert into item_mast(pro_id  , pro_name , pro_price , pro_comission)values
(101 , 'mother bord' , 3200 , 15) ,
(102 , 'key bord'  , 450 , 16) ,
(103 , 'zip drive' , 250 , 14) , 
(104 , 'speaker' , 550 , 16) ,
(105 , 'monitor' , 5000 , 11) ,
(106 , 'dvd drive' , 900 , 12) ,
(107 , 'cd drive' , 800 , 12) ,
(108 , 'printer' , 2600 , 13) ,
(109 , 'refil' , 350 , 13) ,
(110 , 'mouse' , 250 , 12);

select *from item_mast
where pro_price>200 and pro_price<600;
