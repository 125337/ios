@interface WCCanvasHalfRandomSubCard : UIView <MMWebViewDelegate, WCFinderEmptyTipsViewDelegate, WCCanvasHalfRandomSubCardBulletCommentsViewDelegate>
{
    id <WCCanvasHalfRandomSubCardDelegate> _delegate; // +0x8
    WCCanvasComponentHalfRandomCardItemInfo * _itemInfo; // +0x10
    UILabel * _preTitleView; // +0x18
    UILabel * _titleView; // +0x20
    UILabel * _descView; // +0x28
    WCCanvasComponent * _contentItemComponent; // +0x30
    WCCanvasComponent * _buttonItemComponent; // +0x38
    WCCanvasHalfRandomSubCardBulletCommentsView * _bulletCommentsView; // +0x40
    MMWebViewController * _webViewController; // +0x48
    WCFinderEmptyTipsView * _emptyTipsView; // +0x50
    WCAdvertiseInfo * _advertiseInfo; // +0x58
    long long _orientation; // +0x60
    id <WCCanvasComponentDelegate> _componentDelegate; // +0x68
}
- (id)initWithFrame:(CGRect)arg1 itemInfo:(id)arg2 delegate:(id)arg3 componentDelegate:(id)arg4 advertiseInfo:(id)arg5 orientation:(long long)arg6;
- (void)prepareComponentsInfo;
- (void)initSubviews;
- (void)layoutSubviews;
- (id)preTitleView;
- (id)titleView;
- (id)descView;
- (id)generateSimpleLabelWithFont:(id)arg1 textColor:(id)arg2 text:(id)arg3;
- (id)contentItemComponent;
- (id)buttonItemComponent;
- (double)fetchLineHeightForText:(id)arg1 maxWidth:(double)arg2 font:(id)arg3;
- (double)calcRealHeightFor:(double)arg1;
- (void)setContentItemSize:(CGSize)arg1;
- (CGSize)getContentItemSizeWithHeightRemain:(double)arg1;
- (id)bulletCommentsView;
- (CGSize)calcBulletCommentsViewSizeWithMaxWidth:(double)arg1;
- (void)setSubviewsHidden:(BOOL)arg1;
- (void)showContentWithAnimation;
- (void)componentWillAppearInMainScreen:(BOOL)arg1;
- (void)componentWillDisappearInMainScreen:(BOOL)arg1;
- (void)componentAppearFactorChagneInMainScreen;
- (void)componentDidEnterBackground;
- (void)componentWillEnterForeground;
- (void)componentDidFullyAppearInMainScreen:(BOOL)arg1;
- (void)componentWillResumeState:(BOOL)arg1;
- (void)componentWillStopState:(BOOL)arg1;
- (void)componentReportAddExposureCount;
- (void)resetSightViewAudioState:(BOOL)arg1;
- (void)initWebView;
- (id)emptyTipsView;
- (id)fetchRequestUrlWithUrl:(id)arg1 andUpdateExtraInfo:(id)arg2;
- (void)onWebViewDidReceiveResponse:(id)arg1 Response:(id)arg2;
- (void)onWebViewDidFinishLoad:(id)arg1;
- (id)webViewFailToLoad:(id)arg1 Error:(id)arg2;
- (void)finderEmptyTipsView:(id)arg1 didClickOnState:(unsigned long long)arg2;
- (id)onSubCardBulletCommentsViewFetchCanvasPageId;
- (id)onSubCardBulletCommentsViewFetchCanvasItemCardId;
- (int)onSubCardBulletCommentsViewFetchCanvasFinderCommentScene;
- (BOOL)shouldShowBulletCommentsView;
- (id)fetchBulletCommentsTitle;
- (id)fetchBulletComments;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)itemInfo;
- (void)setItemInfo:(id)arg1;
- (void)setPreTitleView:(id)arg1;
- (void)setTitleView:(id)arg1;
- (void)setDescView:(id)arg1;
- (void)setContentItemComponent:(id)arg1;
- (void)setButtonItemComponent:(id)arg1;
- (void)setBulletCommentsView:(id)arg1;
- (id)webViewController;
- (void)setWebViewController:(id)arg1;
- (void)setEmptyTipsView:(id)arg1;
- (id)advertiseInfo;
- (void)setAdvertiseInfo:(id)arg1;
- (long long)orientation;
- (void)setOrientation:(long long)arg1;
- (id)componentDelegate;
- (void)setComponentDelegate:(id)arg1;
- (void).cxx_destruct;
@end
