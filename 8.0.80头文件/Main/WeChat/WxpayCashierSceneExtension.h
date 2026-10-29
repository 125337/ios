@interface WxpayCashierSceneExtension : WxpayStoreResultSceneExtension
{
    BOOL _dispatched; // +0x8
    BOOL _closed; // +0x9
}
- (void)sceneDidShow:(id)arg1 host:(id)arg2;
- (void)sceneWillClose;
@end
