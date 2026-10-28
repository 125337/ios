@interface _TtC6WeChat23MagicCardStarterService : MMUserService <MMServiceProtocol, _TtP25MagicCardStarterProtocols24IMagicCardStarterService_>
{
     handleToBiz; // +0x8
     handleToBizCreator; // +0x10
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceTerminate;
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
- (void)releaseBizWithHandle:(id)arg1;
- (id)init;
- (void).cxx_destruct;
@end
