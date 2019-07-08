# MySpace-梦幻VR空间 计算机逻辑门算法教学展示

VR的本质在我看来就是对现实世界的模拟和重现。从一定程度上接管了人类的视觉和听觉系统，使得人们可以只透过VR眼镜就可以低成本地获取各种非常真实的体验。这里的低成本可以是金钱的成本，时间的成本和位移的成本。随着信息的爆发，以及获取信息的途径的便捷，人们也越来越希望通过有限的个体寿命来获取更多的信息和体验。人们热衷于刷各种短视频可能也有这方面的原因，瘫在沙发上就可以惊叹世间的无奇不有。

这也是我选择做这个原因，我觉得未来人们会越来越离不开虚拟的世界，虚拟世界的出现将会改变这个世界。虚拟世界可以减少交通拥堵，减少能源的消耗，也就意味着更少的尾气，更少的垃圾产生，更少的环境污染。因此我希望在搭建虚拟世界的这条路上能有所为。

这个项目是结合这些想法的一个demo，我用模拟的想法来，模拟计算机基本逻辑元件，连接件，操作件，然后通过这些基本元件的组合可以模拟真正的逻辑计算。

点击可以播放演示视频：
<a href="https://www.bilibili.com/video/av57123286"><img src="https://github.com/DreamingPoet/MySpace/blob/master/README_img/looks_11.JPG" alt="bilibili" border="5" /></a>

## Software and Device

* 构思：Office Visio
* 图片处理：Adobe Photoshop CC 2018
* Modeling：SketchUp 2017
* Code：Notepad++ & Visual studio 2017
* Version Control: GitHub
* Engine: Unreal 4.21 ( C++  and Blueprint)
* Audio: GoldWave
* Video: Adobe AfterEffect CC 2017
* Test Device: HTC vive focus plus

## 部分构思图片

用 Visio 制作出元件的原理图和说明，然后转换为贴图在 Level 中使用。

<img src="https://github.com/DreamingPoet/MySpace/blob/master/README_img/visio_0004_%207.jpg" width="300" style="display:inlne;"/><img src="https://github.com/DreamingPoet/MySpace/blob/master/README_img/visio_0002_%209.jpg" width="300" style="display:inlne;"/><img src="https://github.com/DreamingPoet/MySpace/blob/master/README_img/visio_0001_%2010.jpg" width="300" style="display:inlne;"/><img src="https://github.com/DreamingPoet/MySpace/blob/master/README_img/visio_0000_%2011.jpg" width="300" style="display:inlne;" />

## 建模

所有的项目使用的模型均为本人采用 Sketchup 制作而成，模型经过减面优化。
![image](https://github.com/DreamingPoet/MySpace/blob/master/README_img/Model.JPG)

## 操作方式

这个项目的一个特点是，不需要空间动作和位置捕捉，只需要坐在椅子上就可以完整体验VR项目，在空间内随意走动，并且几乎不会产生3D眩晕症。

### 操作细节说明

* 通过左手扳机传送进行远距离移动，通过触摸手柄可以调整传送后所面向的方向
* 通过触摸左手面板进行无缝精确移动，移动时会出现引路机器人，目光聚焦机器人几乎可以消除3D眩晕
* 左手的 Forward direction 决定 seamless movement 的 direction
* 右手click 左右键可以实现 Turn 转向。
* 右手的扳机可以实现可以交互物体的交互
* 右手抓握左手上的手表，可以打开包裹
* 激活激光笔可以使用激光笔功能，实现远距离操作

<img src="https://github.com/DreamingPoet/MySpace/blob/master/README_img/Left.png" width="280" style="display:inlne;"/><img src="https://github.com/DreamingPoet/MySpace/blob/master/README_img/Right.png" width="280" style="display:inlne;"/><img src="https://github.com/DreamingPoet/MySpace/blob/master/README_img/hands.png" width="280" style="display:inlne;"/>

## 其他说明

* 场景内的排序展示，并非动画展示，而是在进行真正的排序。只是把排序转换为动画的时候比较有意思。

首先游戏开始后，排序管理Actor 只有一个Tick循环可以用，不能进行 for 循环嵌套。而且Tick 作为函数执行的时候，是不能按我们想象的方式执行Sleep（）函数的，而是先把所有的 Sleep（）函数都执行完了之后（一直处于一个等待状态），才执行其他的语句的。

* 只用一个Tick()循环来替代一个需要多个 for 嵌套的循环，将会是很大的不同。

* 利用这些逻辑元件，是可以组建出，加法器，减法器，乘法器，除法器，存储器，编码器，解码器等等计算机组件的。有无限的可能性。

* 利用游戏设计的思想： 完成任务 → 获得奖励 → 能力成长 → 新任务；最终通过所学，获得打开外太空大门的门卡。

## 场景展示

![image](https://github.com/DreamingPoet/MySpace/blob/master/README_img/looks_2.JPG)
![image](https://github.com/DreamingPoet/MySpace/blob/master/README_img/looks_3.JPG)
![image](https://github.com/DreamingPoet/MySpace/blob/master/README_img/looks_5.JPG)
![image](https://github.com/DreamingPoet/MySpace/blob/master/README_img/looks_4.JPG)
![image](https://github.com/DreamingPoet/MySpace/blob/master/README_img/looks_7.JPG)
![image](https://github.com/DreamingPoet/MySpace/blob/master/README_img/looks_10.JPG)
![image](https://github.com/DreamingPoet/MySpace/blob/master/README_img/looks_8.JPG)
![image](https://github.com/DreamingPoet/MySpace/blob/master/README_img/looks_6.JPG)














