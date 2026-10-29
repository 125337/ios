@interface _TtC6WeChat23MagicCardStarterService : MMUserService <MMServiceProtocol, _TtP25MagicCardStarterProtocols24IMagicCardStarterService_>
{
     preloadBizMap; // +0x8
     handleToBiz; // +0x10
     handleToBizCreator; // +0x18
     checkUDRCallbacks; // +0x20
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)mbPauseWithBizHandle:(id)arg1;
- (void)mbResumeWithBizHandle:(id)arg1;
- (BOOL)checkBizValid:(id)arg1 ensurePkg:(BOOL)arg2 ensurePkgCallback:(id /* block */)arg3;
- (long long)preloadWithBizConfig:(id)arg1;
- (id)aquireBizWithBizCreator:(id)arg1 instanceKey:(id)arg2;
- (void)pauseBizWithHandle:(id)arg1;
- (void)pauseFrameSetRootWithHandle:(id)arg1;
- (void)resumeBizWithHandle:(id)arg1;
- (void)redrawWithHandle:(id)arg1;
- (void)activeWithHandle:(id)arg1 viewController:(id)arg2;
- (void)deactiveWithHandle:(id)arg1;
- (void)notifyJsEventWithHandle:(id)arg1 jsEvent:(id)arg2;
- (void)preloadWithHandle:(id)arg1 rootConfig:(id)arg2 frameSetName:(id)arg3 frameSetData:(id)arg4 containerRect:(CGRect)arg5 preloadStrategy:(long long)arg6;
- (void)bindFrameSetViewWithHandle:(id)arg1 rootConfig:(id)arg2 containerView:(id)arg3 frameSetName:(id)arg4 frameSetData:(id)arg5 viewId:(long long)arg6 callback:(id /* block */)arg7;
- (void)scrollAllOnScreenFrameSetViewWithHandle:(id)arg1 rootConfig:(id)arg2 offsetHeight:(double)arg3 listViewTop:(double)arg4;
- (void)removeFrameSetViewWithHandle:(id)arg1 rootConfig:(id)arg2 frameSetName:(id)arg3;
- (void)removeAllFrameSetViewWithHandle:(id)arg1 rootConfig:(id)arg2;
- (id)getBizAppConfigWithHandle:(id)arg1;
- (void)testEvaluateScriptWithHandle:(id)arg1 script:(id)arg2 callback:(id /* block */)arg3;
- (void)bindSimpleViewDelegateWithHandle:(id)arg1 viewDelegate:(id)arg2;
- (void)releaseBizWithHandle:(id)arg1;
- (void)onUDRCheckCallback:(id)arg1 name:(id)arg2 isSuccess:(BOOL)arg3 errNo:(long long)arg4 errCode:(long long)arg5;
- (void)onServiceEnterBackground;
- (id)init;
- (void).cxx_destruct;
@end
