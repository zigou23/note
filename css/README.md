#CSS优化技巧

## background 防止白边
```css
body{
margin: 0;/*防止超出边框*/
background: url(https://www.bing.com/th?id=OHR.PontaDelgada_ZH-CN8596828822_1920x1080.jpg) no-repeat center;
background-size: cover, cover;
min-height: 100vh; /*此处防止body未铺满屏幕*/
}
```
