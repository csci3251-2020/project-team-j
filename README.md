# Contributors

{% for stu in site.stu %}
  <p>  >>{{ stu.image }} @{{ stu.user }} {{ stu.name }}(</p>
  <p>    >>{{ stu.content | markdownify }}</p>
{% endfor %}
