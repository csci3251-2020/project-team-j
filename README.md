###### __Oke We are started working on it !!__   
-----------------------------------------  
  
# Introduction  
Here are the tasks that we gonna do:  
- [x] Task 1: Starting issues @CaseyChu960617  
- [x] Task 2: Project board @ntanryo9  
- [x] Task 3: Set up readme.md @cwlo8  
- [x] Task 4: Show your team to the Internet @IamMrandrew  
- [ ] Task 5: Keep checking... @saranyagupta05  
- [x] Task 6: Write C code @kelvinwongbs   
- [ ] Task 7: Get a status badge
- [ ] Task 8: Promote your repo
    
# Code
```ruby
{% include_relative code.c %}
```
  
# Contributors  
{% for stu in site.stu %}
   <p>&nbsp;&nbsp;&nbsp;&nbsp;>> <img src="{{ stu.image }}" width="50" height="50"> @{{ stu.user }}&nbsp;({{ stu.name }})</p>
   <p>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;>> {{ stu.content | markdownify | remove: '<p>' | remove: '</p>'}}</p>
 {% endfor %}
  
# Remarks
I will try my best to update this readme.dm all the time,  
**Maybe** this readme.dm is **not up-to-date**,  
pls refer to [Issues](https://github.com/csci3251-2020/project-team-j/issues) and see which task is calling u :P !!
