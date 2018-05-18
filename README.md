# smart-IOT(仅供自己参考)
前端：vuejs(vue-cli)
后端：express(express-enerator)
esp8266(arduino)

point:
  npm run build打包后，将dist文件夹内的index.html和static文件夹放入express项目内的public中，用npm start打开
  websocket放在express中的/bin/www文件中(最后面)

modify:
  修改/前端/src/main.js P10:Vue.use(VueSocketio, 'http://host:port');     host，port自定义
  修改/esp8266/main.ino ssid,password,host                       
  注意端口号和后端的配合 后端目前采用socket/http采用3000，net采用3001
  
  
END
