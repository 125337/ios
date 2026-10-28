@interface WCCanvasHalfScreenViewController : MMUIHalfScreenViewController <WCCanvasPageViewControllerDelegate, WCFinderHalfScreenProtocol, WCFinderCardWebViewControllerDelegate, WCFinderFeedBaseViewControllerProtocol>
{
    BOOL _willJumpToHalfOtherContent; // +0x70
    int _scene; // +0x74
    WCAdvertiseInfo * _adInfo; // +0x78
    NSString * _canvasId; // +0x80
    WCAdExpressionCanvasHalfScreenJumpInfo * _halfJumpInfo; // +0x88
    UIView * _floatContainerView; // +0x90
    WCCanvasPageViewController * _canvasViewController; // +0x98
    WCAdCanvasExtraParams * _extraParams; // +0xa0
}
- (id)initWithAdvertiseInfo:(id)arg1 canvasId:(id)arg2 scene:(int)arg3 halfJumpInfo:(id)arg4;
- (void)commonInit;
- (void)viewDidLoad;
- (void)viewWillPush:(BOOL)arg1;
- (void)viewWillPresent:(BOOL)arg1;
- (double)getMaxHalfScreenHeight;
- (void)viewWillPopOrDismiss:(BOOL)arg1;
- (BOOL)shouldChangeDetailScrollViewHeightWhileScrolling;
- (void)willJumpToOthers;
- (BOOL)useTransparentNavibar;
- (BOOL)needCloseOnOrientationChanged;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)doClickCloseWithNeedAnimated:(BOOL)arg1 action:(long long)arg2;
- (void)updateCanvasView;
- (void)updateCommonUI;
- (void)transferFloatContainerView;
- (void)setCanvasExtraParamInfo:(id)arg1;
- (void)onHalfScreenCanvasPageWillShowKeyboardWithDuration:(double)arg1;
- (void)onHalfScreenCanvasPageWillHideKeyboardWithDuration:(double)arg1;
- (double)onHalfScreenCanvasGetMaxHalfScreenHeight;
- (void)onHalfScreenCanvasJumpToH5:(id)arg1 extraInfo:(id)arg2;
- (void)onHalfScreenCanvasJumpToWeApp:(id)arg1 sceneNote:(id)arg2;
- (void)onHalfScreenCanvasJumpToCanvas:(id)arg1 uxInfo:(id)arg2 noStore:(BOOL)arg3;
- (void)onClickWithJumpInfo:(id)arg1 style:(id)arg2;
- (id)onHalfScreenCanvasFetchHalfScreenJumpInfo;
- (void)onFinderCardWebViewControllerJumpToOthers;
- (void)onFinderCardWebViewControllerWillResume;
- (void)onFinderCardWebViewControllerWillBeClosed;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getHalfContainerView;
- (id)getHalfTransformView;
- (BOOL)isHideBorderShadow;
- (BOOL)isHideBackgroupMask;
- (id)getHalfDismissTransition;
- (void)updateHalfScreenHeightRatio:(double)arg1;
- (void)contentTopDidChangeFromTop:(double)arg1 toTop:(double)arg2;
- (id)adInfo;
- (void)setAdInfo:(id)arg1;
- (id)canvasId;
- (void)setCanvasId:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)halfJumpInfo;
- (void)setHalfJumpInfo:(id)arg1;
- (id)floatContainerView;
- (void)setFloatContainerView:(id)arg1;
- (id)canvasViewController;
- (void)setCanvasViewController:(id)arg1;
- (BOOL)willJumpToHalfOtherContent;
- (void)setWillJumpToHalfOtherContent:(BOOL)arg1;
- (id)extraParams;
- (void)setExtraParams:(id)arg1;
- (void).cxx_destruct;
@end
