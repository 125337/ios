@interface WAJSCanvasJSEventHandlerContext : NSObject <WAJSEventHandlerContextDelegate>
{
    NSString * _appId; // +0x8
    id <WAJSCanvasJSEventHandlerContextDelegate> _delegate; // +0x10
}
- (id)getAppId;
- (void)endWithResult:(id)arg1 handler:(id)arg2;
- (id)getWAContact;
- (id)getParentViewController;
- (unsigned long long)getLaunchScene;
- (id)getLaunchPagePath;
- (id)getCurrentPagePath;
- (id)getCurrentPageRelativePath;
- (id)getCurrentPageQuery;
- (unsigned long long)getEnvironmentType;
- (id)GetWebViewPluginByName:(id)arg1;
- (id)sourceOpenSDKAppID;
- (id)getEventHandler:(id)arg1;
- (unsigned long long)getAppVersion;
- (unsigned int)getDebugModeType;
- (unsigned int)getAppType;
- (id)GetWeAppPluginByName:(id)arg1;
- (id)getSessionID;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
