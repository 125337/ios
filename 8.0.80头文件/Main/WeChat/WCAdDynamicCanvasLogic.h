@interface WCAdDynamicCanvasLogic : NSObject <ForwardMessageLogicDelegate, WCWeAppBizTempSessionHelperDelegate, WCCommitViewResultDelegate, MMLiteAppGetOfflineResourceExt, SKStoreProductViewControllerDelegate, UIViewControllerTransitioningDelegate>
{
    NSMutableDictionary * _pageInfoCache; // +0x8
    WCWeAppBizTempSessionHelper * _bizSessionHelper; // +0x10
    ForwardMessageLogicController * _forwardLogic; // +0x18
    SKStoreProductViewController * _productViewController; // +0x20
    WCAdWebStoreAnimatedTransitioning * _webStoreAnimatedTransitioning; // +0x28
}
- (id)init;
- (void)initData;
- (id)getPageInfoFromCache:(id)arg1;
- (void)setPageInfoToCache:(id)arg1 cacheKey:(id)arg2;
- (void)removePageInfoFromCache:(id)arg1;
- (void)jumpToWeAppBizTempSessionWithInfo:(id)arg1;
- (void)shareToFriend:(id)arg1 shareTitle:(id)arg2 shareDesc:(id)arg3 shareThumbUrl:(id)arg4 shareThumbImage:(id)arg5 shareWebUrl:(id)arg6 canvasDynamicExtInfo:(id)arg7 canvasDynamicLoadExtInfo:(id)arg8;
- (void)shareToTimeline:(id)arg1 shareTitle:(id)arg2 shareDesc:(id)arg3 shareThumbUrl:(id)arg4 shareWebUrl:(id)arg5 canvasDynamicExtInfo:(id)arg6 canvasDynamicLoadExtInfo:(id)arg7;
- (id)genUploadTask:(id)arg1 shareTitle:(id)arg2 shareDesc:(id)arg3 shareThumbUrl:(id)arg4 shareWebUrl:(id)arg5;
- (BOOL)showEmbeddedWebStore:(id)arg1 currentVC:(id)arg2 appUrl:(id)arg3 viewHeight:(double)arg4 skAdItem:(id)arg5;
- (void)hideEmbeddedWebStore;
- (void)downgradeInPageSheetStyle:(id)arg1;
- (void)onGetRandomSelectCardDoneWith:(id)arg1 vangoghId:(id)arg2 selectedCards:(id)arg3;
- (void)productViewControllerDidFinish:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)getCurrentViewController;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)forwardViewController:(id)arg1 didFinishForwardingWithDataItem:(id)arg2;
- (void)forwardViewControllerDidCancel:(id)arg1;
- (void)startBizTempSessionLoadingView;
- (void)stopBizTempSessionLoadingView;
- (void)bizTempSessionJumpWithSuccess:(id)arg1;
- (void)bizTempSessionEndWithSuccess:(id)arg1;
- (void)bizTempSessionEndWithError:(id)arg1;
- (id)getOfflineResource:(id)arg1 tag:(id)arg2 url:(id)arg3;
- (id)pageInfoCache;
- (void)setPageInfoCache:(id)arg1;
- (id)bizSessionHelper;
- (void)setBizSessionHelper:(id)arg1;
- (id)forwardLogic;
- (void)setForwardLogic:(id)arg1;
- (id)productViewController;
- (void)setProductViewController:(id)arg1;
- (id)webStoreAnimatedTransitioning;
- (void)setWebStoreAnimatedTransitioning:(id)arg1;
- (void).cxx_destruct;
@end
