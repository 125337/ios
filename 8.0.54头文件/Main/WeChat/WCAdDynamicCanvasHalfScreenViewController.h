@interface WCAdDynamicCanvasHalfScreenViewController : MMUIHalfScreenViewController <WCAdDynamicCanvasViewControllerDelegate, WCFinderHalfScreenProtocol, WCFinderFeedBaseViewControllerProtocol, UIGestureRecognizerDelegate>
{
    BOOL _willJumpToHalfOtherContent; // +0x68
    WCAdExpressionCanvasHalfScreenJumpInfo * _halfJumpInfo; // +0x70
    WCAdDynamicCanvasViewController * _dynamicCanvasViewController; // +0x78
    UIPanGestureRecognizer * _contentViewPanGesture; // +0x80
}
- (id)initWithDynamicCanvasViewController:(id)arg1 halfJumpInfo:(id)arg2;
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
- (void)initPanGesture;
- (void)handlePanGesture:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)onHalfScreenCanvasPageWillShowKeyboardWithDuration:(double)arg1;
- (void)onHalfScreenCanvasPageWillHideKeyboardWithDuration:(double)arg1;
- (void)onHalfScreenCanvasJumpToH5:(id)arg1 extraInfo:(id)arg2;
- (void)onHalfScreenCanvasJumpToWeApp:(id)arg1 sceneNote:(id)arg2;
- (void)onHalfScreenCanvasJumpToCanvas:(id)arg1 uxInfo:(id)arg2 canvasDynamicInfo:(id)arg3 noStore:(BOOL)arg4;
- (void)onClickWithJumpInfo:(id)arg1 style:(id)arg2;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getHalfContainerView;
- (id)getHalfTransformView;
- (BOOL)isHideBorderShadow;
- (BOOL)isHideBackgroupMask;
- (id)getHalfDismissTransition;
- (void)updateHalfScreenHeightRatio:(double)arg1;
- (void)contentTopDidChangeFromTop:(double)arg1 toTop:(double)arg2;
- (id)pageInfo;
- (double)fetchHalfScreenPageHeight;
- (BOOL)isPanVerticalGesture:(id)arg1;
- (BOOL)isPanUpGesture:(id)arg1;
- (id)halfJumpInfo;
- (void)setHalfJumpInfo:(id)arg1;
- (id)dynamicCanvasViewController;
- (void)setDynamicCanvasViewController:(id)arg1;
- (BOOL)willJumpToHalfOtherContent;
- (void)setWillJumpToHalfOtherContent:(BOOL)arg1;
- (id)contentViewPanGesture;
- (void)setContentViewPanGesture:(id)arg1;
- (void).cxx_destruct;
@end

