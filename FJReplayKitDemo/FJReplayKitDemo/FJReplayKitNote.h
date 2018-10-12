录屏工具使用说明：
如果需要显示录屏按钮只需要在AppDelegate代理方法中写以下代码即可,隐藏的话，传NO 写完这行代码便可以运行程序看看效果了，目前只能录制自己APP里面的内容，还没想到办法通过自己APP录制手机桌面或者别人APP里面的内容；

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    
    [[FJReplayKit sharedReplay] catreButton:YES];
    
}

