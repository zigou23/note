# JavaScript
### 三元表达式
> 即简化的if else

> 条件表达式 ? 表达式1(条件为真) : 表达式2(条件为假)

例：数字小于10自动在前面加0
```js
var time = prompt('输入0-99数字：');
var result = time <10 ? '0' + time : time;
alert(result);
```

### switch
直接跳转，不会一个一个判断
```js
switch(表达式){
  case value1:
    执行语句1;
    break;
  case value2:
    执行语句2;
    break;
    ...
    default:
      执行最后的语句;
}
```

### for
for 循环
```js
for(var i=1; i<=100; i++){
  console.log('msg');
}
// 按照1234 234 234~操作
for(初始化变量1; 条件表达式2; 操作表达式4){
  //循环体3
}
```

