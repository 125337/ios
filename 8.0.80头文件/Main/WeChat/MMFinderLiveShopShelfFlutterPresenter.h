@interface MMFinderLiveShopShelfFlutterPresenter : NSObject <MMFinderLiveShopShelfNativeApiFlutterPluginHost>
{
    BOOL _pendingOpenFlashSale; // +0x8
    MMFinderLiveViewController * _liveViewController; // +0x10
    UINavigationController * _shelfNavVC; // +0x18
    LiveShopShelfFlutterApi * _shelfFlutterApi; // +0x20
    MMFinderLiveShopShelfLiveMsgObserver * _liveMsgObserver; // +0x28
    NSMutableArray * _dismissCompletions; // +0x30
}
+ (id)presenterForLiveViewController:(id)arg1;
- (void)dealloc;
- (BOOL)isOpening;
- (id)cachedShelfInstance;
- (void)presentWithParams:(id)arg1;
- (void)_buildShelfWithParams:(id)arg1;
- (BOOL)pushViewControllerOnShelfIfOpening:(id)arg1 animated:(BOOL)arg2;
- (BOOL)dismissWithCompletion:(id /* block */)arg1;
- (BOOL)shopShelfNativeApiRequestOpenFlashSaleForTaskId:(id)arg1;
- (id)liveViewControllerIfCanOpenFlashSaleForTaskId:(id)arg1;
- (void)onShelfDidClose;
- (void)presentShelfNavVCFromLiveVC:(id)arg1;
- (void)setupInboundBridgeIfNeededWithInstance:(id)arg1 params:(id)arg2;
- (id)liveViewController;
- (void)setLiveViewController:(id)arg1;
- (id)shelfNavVC;
- (void)setShelfNavVC:(id)arg1;
- (id)shelfFlutterApi;
- (void)setShelfFlutterApi:(id)arg1;
- (id)liveMsgObserver;
- (void)setLiveMsgObserver:(id)arg1;
- (id)dismissCompletions;
- (void)setDismissCompletions:(id)arg1;
- (BOOL)pendingOpenFlashSale;
- (void)setPendingOpenFlashSale:(BOOL)arg1;
- (void).cxx_destruct;
@end
