@interface H5VideoProxyManager : MMUserService <MMServiceProtocol>
{
    BOOL _isInit; // +0x8
    BOOL _isNeedReInitFromSuspend; // +0x9
    id <WXCustomWebViewControllerProtocol> _proxyWebviewController; // +0x10
}
- (void)onServiceInit;
- (void)dealloc;
- (void)applicationWillSuspend;
- (void)onServiceEnterForeground;
- (BOOL)initProxyFromWebVC:(id)arg1;
- (BOOL)tryInit;
- (void)deinitProxy;
- (void)doDeinitProxy;
- (void)stopPlay:(int)arg1;
- (id)startPlay:(id)arg1;
- (void)setRemainTime:(int)arg1 PlayDataId:(int)arg2;
- (void)setPlayState:(int)arg1;
- (int)preload:(int)arg1 Time:(int)arg2;
- (void)reportInitIDKeyForResult:(int)arg1;
- (void)tryDeinitProxyWhenSuspend;
- (void)tryReInitProxyWhenEnterForground;
- (id)proxyWebviewController;
- (void)setProxyWebviewController:(id)arg1;
- (BOOL)isNeedReInitFromSuspend;
- (void)setIsNeedReInitFromSuspend:(BOOL)arg1;
- (void).cxx_destruct;
@end
