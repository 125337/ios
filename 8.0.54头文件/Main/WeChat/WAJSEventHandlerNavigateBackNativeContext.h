@interface WAJSEventHandlerNavigateBackNativeContext : NSObject
{
    NSString * _appID; // +0x8
    WAWebViewController * _webViewController; // +0x10
    NSDictionary * _extraData; // +0x18
    WAAppOpenParameter * _openParameter; // +0x20
    WAAppTaskExtInfo * _taskInfo; // +0x28
    WAAppTaskHandlerWrapper * _handlerWrapper; // +0x30
    NSMutableArray * _willJumpToMiniApp; // +0x38
    NSMutableArray * _prepareToMiniApp; // +0x40
    NSMutableArray * _beforeToMiniApp; // +0x48
}
- (id)init;
- (id)appID;
- (void)setAppID:(id)arg1;
- (id)webViewController;
- (void)setWebViewController:(id)arg1;
- (id)extraData;
- (void)setExtraData:(id)arg1;
- (id)openParameter;
- (void)setOpenParameter:(id)arg1;
- (id)taskInfo;
- (void)setTaskInfo:(id)arg1;
- (id)handlerWrapper;
- (void)setHandlerWrapper:(id)arg1;
- (id)willJumpToMiniApp;
- (id)prepareToMiniApp;
- (id)beforeToMiniApp;
- (void).cxx_destruct;
@end

