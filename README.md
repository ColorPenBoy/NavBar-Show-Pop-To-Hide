# NavBar-Show-Pop-To-Hide
从NavigationBar显示的VC，Pop回NavigationBar隐藏的VC，平滑过渡，转场动画

在iOS APP开发过程中，我们经常会遇到这样的场景：

在个人中心页面，或者首页，产品为了设计需求或者展示更多的信息，而第一层级的ViewController通常都是由TabbarController来承载、跳转的，所以通常都会把导航栏NavigationBar（顶部64个点）给隐藏掉。

但是Push到下一层级的ViewController以后，NavigationBar都会显示出来，首先是要显示这个VC的title，还有承担返回按钮的作用（虽然有侧滑返回，但是返回按钮是必不可少的）。