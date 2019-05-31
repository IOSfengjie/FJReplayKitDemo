# FJReplayKitDemo
实现手机录屏功能

录屏工具使用说明：
如果需要显示录屏按钮只需要在AppDelegate代理方法中写以下代码即可,隐藏的话，传NO 写完这行代码便可以运行程序看看效果了，目前只能录制自己APP里面的内容，还没想到办法通过自己APP录制手机桌面或者别人APP里面的内容；

下载demo后，在录制的时候点击空白处，背景颜色会有变化，后面看视频的时候容易看出效果，保存视频是在最后预览页面点击save按钮，就会将视频保存到相册中

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    
    [[FJReplayKit sharedReplay] catreButton:YES];
    
}
