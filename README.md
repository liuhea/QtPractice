# QtPractice
qt学习记录
## day1 
### Qt的基本模块
> Qt 5 模块分为 Essentials Modules 和 Add-on Modules 两部分。前者是基础模块，在所有平台上都可用；后者是扩展模块，建立在基础模块的基础之上，在能够运行 Qt 的平台之上可以酌情引入。

[参考文章](https://www.cnblogs.com/swarmbees/p/5621407.html)
#### 基础模块
* Qt Core，提供核心的非 GUI 功能，所有模块都需要这个模块。这个模块的类包括了动画框架、定时器、各个容器类、时间日期类、事件、IO、JSON、插件机制、智能指针、图形（矩形、路径等）、线程、XML 等。所有这些类都可以通过  头文件引入。

* Qt Gui，提供 GUI 程序的基本功能，包括与窗口系统的集成、事件处理、OpenGL 和 OpenGL ES 集成、2D 图像、字体、拖放等。这些类一般由 Qt 用户界面类内部使用，当然也可以用于访问底层的 OpenGL ES 图像 API。Qt Gui 模块提供的是所有图形用户界面程序都需要的通用功能。
* Qt Multimedia，提供视频、音频、收音机以及摄像头等功能。这些类可以通过  引入，而且需要在 pro 文件中添加 QT += multimedia。
* Qt Network，提供跨平台的网络功能。这些类可以通过  引入，而且需要在 pro 文件中添加 QT += network。
* Qt Qml，提供供 QML（一种脚本语言，也提供 JavaScript 的交互机制） 使用的 C++ API。这些类可以通过  引入，而且需要在 pro 文件中添加 QT += qml。
* Qt Quick，允许在 Qt/C++ 程序中嵌入 Qt Quick（一种基于 Qt 的高度动画的用户界面，适合于移动平台开发）。这些类可以通过  引入，而且需要在 pro 文件中添加 QT += quick。
* Qt SQL，允许使用 SQL 访问数据库。这些类可以通过  引入，而且需要在 pro 文件中添加 QT += sql。
* Qt Test，提供 Qt 程序的单元测试功能。这些类可以通过  引入，而且需要在 pro 文件中添加 QT += testlib。
* Qt Webkit，基于 WebKit2 的实现以及一套全新的 QML API（顺便说一下，Qt 4.8 附带的是 QtWebkit 2.2）。

#### 扩展模块：

* Qt 3D，提供声明式语法，在 Qt 程序中可以简单地嵌入 3D 图像。Qt 3D 为 Qt Quick 添加了 3D 内容渲染。Qt 3D 提供了 QML 和 C++ 两套 API，用于开发 3D 程序。

* Qt Bluetooth，提供用于访问蓝牙无线设备的 C++ 和 QML API。
* Qt Location，提供定位机制、地图和导航技术、位置搜索等功能的 QML 和 C++ API。
* Qt Widgets，使用 C++ 扩展的 Qt Gui 模块，提供了一些界面组件，比如按钮、单选框等。

