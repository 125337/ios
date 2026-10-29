@interface WAJSCanvasBaseService : NSObject <JSCanvasEventHandlerContextDelegate, WAJSCanvasJSEventHandlerContextDelegate>
{
    id <WAJSCanvasBaseServiceDelegate> _delegate; // +0x8
    NSThread * _thread; // +0x10
    WACanvasPluginScheduler * _pluginScheduler; // +0x18
    NSMutableArray * _eventHandlers; // +0x20
    NSMutableArray * _eventHandlersContext; // +0x28
    WAJSNativeBufferBase * _nativeBufferBase; // +0x30
}
- (id)init;
- (void)initNativeBuffer;
- (void)injectWeiXinNativeBuffer:(id)arg1;
- (void)weAppJsApiCallbackWithScript:(id)arg1;
- (void)injectWxConfig:(id)arg1;
- (void)setupWeAppJSAPI:(id)arg1;
- (void)setupInvokeHandler:(id)arg1 param:(id)arg2 callbackId:(unsigned int)arg3 appId:(id)arg4;
- (id)hookClassNameWithEventName:(id)arg1;
- (void)endWithResultWithParams:(id)arg1 handler:(id)arg2 context:(id)arg3;
- (void)__innerEndWithResultWithParams:(id)arg1;
- (id)getParentViewController;
- (id)getWebViewPluginByName:(id)arg1;
- (id)getWeAppPluginByName:(id)arg1;
- (id)getDataFromAppPkgFullPath:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)thread;
- (void)setThread:(id)arg1;
- (id)pluginScheduler;
- (void)setPluginScheduler:(id)arg1;
- (id)eventHandlers;
- (void)setEventHandlers:(id)arg1;
- (id)eventHandlersContext;
- (void)setEventHandlersContext:(id)arg1;
- (id)nativeBufferBase;
- (void)setNativeBufferBase:(id)arg1;
- (void).cxx_destruct;
@end

