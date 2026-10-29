@interface WCAdFinderDialogViewController : MMUIHalfScreenViewController <WCFinderHalfScreenProtocol, WCFinderFeedBaseViewControllerProtocol, WCAdFinderDialogContainViewDelegate>
{
    WCAdFinderDialogBaseInfo * _dialogInfo; // +0x68
    WCFinderJumpInfoParams * _jumpParams; // +0x70
    double _heightRatio; // +0x78
    WCAdFinderDialogContainView * _dialogContainView; // +0x80
    WCAdFinderDialogCloseBarView * _closeBarView; // +0x88
    WCAdFinderDialogClickManager * _clickManager; // +0x90
}
- (id)initWithDialogInfo:(id)arg1 jumpParams:(id)arg2;
- (void)commonInit;
- (void)viewDidLoad;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewDidTransitionToNewSize;
- (double)getMaxHalfScreenHeight;
- (BOOL)useTransparentNavibar;
- (BOOL)needCloseOnOrientationChanged;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (id)dialogContainView;
- (id)closeBarView;
- (id)clickManager;
- (void)updateCommonUI;
- (void)onDialogContainViewScrollViewDidScroll;
- (void)onDialogContainViewScrollViewDidEndScrolling;
- (void)onDialogContainViewConfirmButtonDidClick;
- (id)getHalfContainerView;
- (id)getHalfTransformView;
- (BOOL)isHideBorderShadow;
- (BOOL)isHideBackgroupMask;
- (id)getHalfDismissTransition;
- (void)updateHalfScreenHeightRatio:(double)arg1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)dialogInfo;
- (void)setDialogInfo:(id)arg1;
- (id)jumpParams;
- (void)setJumpParams:(id)arg1;
- (double)heightRatio;
- (void)setHeightRatio:(double)arg1;
- (void)setDialogContainView:(id)arg1;
- (void)setCloseBarView:(id)arg1;
- (void)setClickManager:(id)arg1;
- (void).cxx_destruct;
@end

