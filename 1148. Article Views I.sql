select distinct v1.author_id as id from views v1 join views v2 on 
v1.article_id = v2.article_id and v1.author_id = v2.viewer_id
order by id asc