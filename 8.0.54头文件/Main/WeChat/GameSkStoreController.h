@interface GameSkStoreController : NSObject
{
    BOOL _enableStatusCheck; // +0x8
    MMUIViewController<WXCustomWebViewControllerProtocol> * _webViewController; // +0x10
    NSMutableDictionary * _preloadItemDictInfo; // +0x18
    GameSKStoreDelgeate * _currentSkStoreModel; // +0x20
    GameAppStorePreloadItem * _currentShowStoreItem; // +0x28
    double _showStimeStamp; // +0x30
}
- (id)init;
- (void)cleanPreloadProdctVc;
- (void)cleaAllSkStoreValue;
- (void)preloadSKStoreProductViewController:(id)arg1 reportInfo:(id)arg2;
- (void)report12909AppStoreWithAction:(long long)arg1 item:(id)arg2;
- (void)report12909AppStoreWithAction:(long long)arg1 item:(id)arg2 extInfo:(id)arg3;
- (id)createSKStoreProductItem:(id)arg1 reportInfo:(id)arg2;
- (void)triggerAppStoreItemLoad:(id)arg1;
- (id)getSKStoreProductItem:(id)arg1 reportInfo:(id)arg2;
- (void)searchStoreViewDisplayLink:(id)arg1;
- (id)searchStoreViewInView:(id)arg1;
- (id)presentAppStoreWithParam:(id)arg1 onCloseBlock:(id /* block */)arg2;
- (id)getHostVC;
- (BOOL)getPopWhenDismiss:(id)arg1;
- (void)checkAppStorePageStatus;
- (void)reportStayDurationWithActionId:(id)arg1;
- (void)onStoreVcClosed:(id)arg1;
- (void)notifyWebViewEvent:(id)arg1 appStoreItem:(id)arg2;
- (id)halfScreenTestParamWithAppInstallUrl:(id)arg1;
- (void)reportAppStoreCloseOrEnterBackGround;
- (void)onApplicationDidEnterBackground:(id)arg1;
- (void)reportProfile:(unsigned int)arg1 withTime:(unsigned int)arg2 status:(int)arg3;
- (id)webViewController;
- (void)setWebViewController:(id)arg1;
- (id)preloadItemDictInfo;
- (void)setPreloadItemDictInfo:(id)arg1;
- (id)currentSkStoreModel;
- (void)setCurrentSkStoreModel:(id)arg1;
- (id)currentShowStoreItem;
- (void)setCurrentShowStoreItem:(id)arg1;
- (double)showStimeStamp;
- (void)setShowStimeStamp:(double)arg1;
- (BOOL)enableStatusCheck;
- (void)setEnableStatusCheck:(BOOL)arg1;
- (void).cxx_destruct;
@end

