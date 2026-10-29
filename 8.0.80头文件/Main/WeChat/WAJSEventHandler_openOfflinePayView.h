@interface WAJSEventHandler_openOfflinePayView : WAJSEventHandler_BaseEvent <WCPayJSOpenOfflinePayControlLogicDelegate>
{
    NSMutableDictionary * _params; // +0x8
    WCPayJSOpenOfflinePayControlLogic * _openOfflinePayLogic; // +0x10
}
- (void)handleJSEvent:(id)arg1;
- (void)succToOpenOfflinePayLogic;
- (void)failToStartOpenOfflinePayLogic;
- (void)returnToOfflinePayView;
- (id)params;
- (void)setParams:(id)arg1;
- (id)openOfflinePayLogic;
- (void)setOpenOfflinePayLogic:(id)arg1;
- (void).cxx_destruct;
@end
