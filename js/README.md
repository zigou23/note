# JavaScript

## 

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

## 循环

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

#### while

```js
// 当条件表达式结果为true执行循环体，否则退出循环（不要死循环，会卡死
while(条件表达式){
    //循环体
}
```

##### do while

```js
do{
    //循环体
} while (条件表达式)
```

#### continue break

```js
continue; //只要遇见，则退出本次循环，执行下一次循环
break; //退出整个循环（吃苹果吃到一个虫子
```

## 数组

创建数组

```js
var arr = new Array(); //利用new创建数组
var arr =[]; // 利用数组自面量，可存放任意类型数据
// 获取元素[0,1,2,3,'字符串',...] 
alert(arr[1])
```
#### 求数组中的最大值

```js
var arr = [2,6,1,77,52,25,6];
var max = arr[0];
for (var i =1; i< arr.length; i++){
    if (arr[i] > max){
        max= arr[i];
    }
}
console.log(max);
```

#### 遍历数组

```js
//arr.length 动态监测数组元素的个数
var arr = ['red','green','blue'];
for (var i=0; i< arr.length ; i++){
    console.log(arr[i]);
}
```

数组新增元素

```js
// 修改length长度
arr.length = 7; //未添加元素显示undefined
// 修改数组索引号 追加数组元素
arr1[3] = 'yellow'; //切记里面是否被占用，否则替换
//
```

#### 筛选数组

筛选出>10的

```js
//方法1
var arr = [2,5,2,88,5,22,88,44],j=0;
var newArr = [];
for (var i=0; i < arr.length; i++){
    if(arr[i]>10){ //新数组从0开始
        newArr[j]=arr[i];
        j++;
    }
}
console.log(newArr);
//方法2
var arr = [2,5,2,88,5,22,88,44];
var newArr = []; //newArr.length = 0
for (var i=0; i < arr.length; i++){
    if(arr[i]>10){
        newArr[newArr.length]=arr[i]; //修改的地方
    }
}
console.log(newArr);
```

#### 翻转数组

```js
var arr = ['red','green','blue'];
var newArr = []; 
for (var i=arr.length -1; i >=0; i--){
    newArr[newArr.length]=arr[i];
}
console.log(newArr);
```

#### 数组排序（冒泡排序）

```js
// 冒泡排序
// var arr = [5, 4, 3, 2, 1];
var arr = [4, 1, 2, 3, 5];
for (var i = 0; i <= arr.length - 1; i++) { // 外层循环管趟数 
    // 里面的循环管 每一趟的交换次数
    for (var j = 0; j <= arr.length - i - 1; j++) { 
        // 内部交换2个变量的值 前一个和后面一个数组元素相比较
        if (arr[j] > arr[j + 1]) {
            var temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
    }
}
console.log(arr);
```

## 函数

函数就是封装了一段可以被重复执行调用的代码块 就是让大量代码重复使用

函数不调用自己不执行

```js
function 函数名(){
    //函数体
}
//求和
function getSum(num1,num2){
    var sum=0;
    for(var i=num1; i<=num2; i++)
        sum+=i;
    console.log(sum);
}
getSum(1,100); //1到100的和
getSum(10,50); //10到50的和
getSum(1,1000); //1到1000的和
```

#### 带参数的函数

```js
function 函数名(形参1,形参2...){}
函数名(实参1,实参2...); 
// 如果实参(比形参)多，则取到形参个数(正常); 如果实参少,则返回NaN(多的形参定义为undefined) (Java则要求必须准确)

function cook(aru){ // aru='酸辣土豆丝' 形参可以看作不用声明的变量
    console.log(aru); //不建议console.log在函数内部,使用return
}
cook('酸辣土豆丝');
cook('大肘子');
```

函数的返回值(return)

```js
function 函数名(){
    return 需要返回的结果;// return仅返回一个值，且会终止函数
}
函数名();
```

break, continue, return 区别

```
break: 结束当前循环(如for、while)
continue: 跳出本次循环，继续执行下次循环(如for、while)
return: 不仅退出循环和返回return语句中的值，同时还可以结束当前函数体
```

#### arguments

只有函数才有arguments 且内置好了arguments

```js
function fn(){
    console.log(arguments); //里面存储了所有传递过来的实参
}
fn(1,2,3); //伪数组 不是真正意义上的数组
```

遍历arguments

```js
function fn(){
    for(var i=0; i< arguments.length; i++)
        console.log(arguments[i])
}
```

#### 利用函数求任意个数的最大值

```js
function getMax(){
    var max = arguments[0];
    for(var i=1; i<arguments.length; i++){
        if(arguments[i]>max)
            max = arguments[i];
    }
    return max;
}
console.log(getMax(1,22,5,555,44,2255));
```

#### 翻转数组

```js
function reverse(arr){
    var newArr = [];
    for (var i=arr.length-1; i>=0; i--)
        newArr[newArr.length] = arr[i];
    return newArr;
}
```

