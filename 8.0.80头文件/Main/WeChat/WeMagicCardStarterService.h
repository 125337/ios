@interface WeMagicCardStarterService : NSObject
{
     handleToBiz; // +0x8
     handleToBizId; // +0x10
     syncQueue; // +0x18
}
+ (id)sharedInstance;
- (id)init;
- (id)acquireBizWithConfig:(id)arg1 instanceKey:(id)arg2;
- (unsigned long long)bizIdForHandle:(id)arg1;
- (void)activateWithHandle:(id)arg1;
- (void)deactivateWithHandle:(id)arg1;
- (void)pauseBizWithHandle:(id)arg1;
- (void)resumeBizWithHandle:(id)arg1;
- (id)bindFrameSetViewWithHandle:(id)arg1 rootConfig:(id)arg2 containerView:(id)arg3 frameSetName:(id)arg4 frameSetData:(id)arg5 callback:(id /* block */)arg6;
- (void)removeFrameSetViewWithHandle:(id)arg1 rootConfig:(id)arg2 frameSetName:(id)arg3;
- (void)removeAllFrameSetViewWithHandle:(id)arg1 rootConfig:(id)arg2;
- (void)notifyJsEventWithHandle:(id)arg1 jsEvent:(id)arg2;
- (void)testEvaluateScriptWithHandle:(id)arg1 script:(id)arg2 completion:(id /* block */)arg3;
- (void).cxx_destruct;
@end
