-----------------------------------------  
  
# Introduction  
Here are the tasks that we gonna do:  
Task 1: Starting issues @CaseyChu960617  
Task 2: Project board @ntanryo9  
Task 3: Set up readme.md @cwlo8  
Task 4: Show your team to the Internet @IamMrandrew  
Task 5: Keep checking... @saranyagupta05  
Task 6: Write C code @kelvinwongbs  
Task 7: Get a status badge @PeterShone  
Task 8: Promote your repo @nikunj-cuhk
    
# Code
```c
{% include_relative code.c %}
```
![](https://github.com/csci3251-2020/project-team-j/workflows/CodeOfteamJ/badge.svg)
  
# Contributors  
{% for stu in site.stu %}
   <p>&nbsp;&nbsp;&nbsp;&nbsp;>> <img src="{{ stu.image }}" width="50" height="50"> @{{ stu.user }}&nbsp;({{ stu.name }})</p>
   <p>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;>> {{ stu.content | markdownify | remove: '<p>' | remove: '</p>'}}</p>
 {% endfor %}
  
---
Last updated: {{ site.time }}
