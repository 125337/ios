@interface WAOpenSDKJSAPIContextAdapter : NSObject <WAJSEventHandlerContextDelegate>
{
    WAContact * _contact; // +0x8
    id <WAOpenSDKJSAPIContextAdapterDelegate> _delegate; // +0x10
    WAOpenSDKTransferPluginScheduler * _pluginScheduler; // +0x18
    NSString * _transitiveData; // +0x20
    WAOpenSDKJSEventHandlerContext * _openSDKContext; // +0x28
    long long _apiFrom; // +0x30
}
- (id)initWithWAContact:(id)arg1 apiFrom:(long long)arg2;
- (id)getAppId;
- (void)endWithResult:(id)arg1 handler:(id)arg2;
- (unsigned long long)getAppVersion;
- (unsigned int)getDebugModeType;
- (unsigned int)getAppType;
- (id)getWAContact;
- (void)sendResultBeforeEnd:(id)arg1 resultType:(long long)arg2 handler:(id)arg3;
- (id)getParentViewController;
- (unsigned long long)getLaunchScene;
- (id)getLaunchPagePath;
- (id)getCurrentPagePath;
- (id)getCurrentPageRelativePath;
- (id)getCurrentPageQuery;
- (unsigned long long)getEnvironmentType;
- (id)GetWebViewPluginByName:(id)arg1;
- (id)GetWeAppPluginByName:(id)arg1;
- (BOOL)isService;
- (id)getWxaExternalInfo;
- (BOOL)isParentViewControllerDidAppear:(id)arg1;
- (id)sourceOpenSDKAppID;
- (id)getEventHandler:(id)arg1;
- (void)printConsoleLog:(id)arg1;
- (BOOL)isDebugAndVConsoleOpen;
- (BOOL)isIgnoreRemoteCheckDomain;
- (unsigned int)getCurTaskRunningState;
- (id)getCurPubResLogic;
- (id)_fullPagePath;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)pluginScheduler;
- (void)setPluginScheduler:(id)arg1;
- (id)transitiveData;
- (void)setTransitiveData:(id)arg1;
- (id)openSDKContext;
- (void)setOpenSDKContext:(id)arg1;
- (long long)apiFrom;
- (void)setApiFrom:(long long)arg1;
- (void).cxx_destruct;
@end
