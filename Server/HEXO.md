## HEXO-BLOG
###MY HEXOBLOG

### 一、环境安装

1.查看node版本：`` node -v ``
 
2.查看npm版本：`` npm -v ``

3.安装cnpm：
```
npm install -g cnpm --registry=http://registry.npm.taobao.org	
```

4.查看cnpm版本：`` cnpm -v ``

5.安装hexo框架, 全局安装：
```
cnpm install -g hexo-cli
```

6.查看hexo版本：`` hexo -v ``


### 二、创建工程

1.初始化博客：`` hexo init ``	 
```
hexo s	#启动本地博客服务

http://localhost:4000/	#本地访问地址
```

2.安装部署插件：
```
npm install --save hexo-deployer-git
```

3.创建新的文章：
``` 
hexo n "NewBlog"
```

4.下载主题到本地：
```
git clone xxx themes/xxx
```

5.修改_config.yml 文件 
```
theme: xxx

deploy:
	type: git
	repo: https://github.com/xxxx.github.io.git
	branch: master
```

6.部署到Github仓库里：
```
hexo clean && hexo g -d

https://xxx.github.io/  #查看博客
```
