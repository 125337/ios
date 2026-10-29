@interface WAWasmBridgeService : NSObject <WAJSEventHandlerContextDelegate>
{
    void * _linker; // +0x8
    id <WAJSEventHandlerContextDelegate> _context; // +0x10
}
- (id)initWithContextDelegate:(id)arg1;
- (void)setWasmBridgeLinker:(void *)arg1;
- (void)setupInvokeHandler:(id)arg1 param:(id)arg2 callbackId:(unsigned int)arg3 appId:(id)arg4;
- (id)getAppId;
- (void)endWithResult:(id)arg1 callbackId:(unsigned int)arg2;
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
- (void).cxx_destruct;
@end
