@interface MMLiteAppPageSheetWrapViewController : UIViewController <UIGestureRecognizerDelegate>
{
    BOOL _isFullScreen; // +0x8
    float _whiteSpaceHeight; // +0xc
    BOOL _enableDragToFullScreenInHalfScreen; // +0x10
    BOOL _showDragBar; // +0x11
    BOOL _pageSheetHasAppeared; // +0x12
    MMLiteAppViewController * _liteAppViewController; // +0x18
    id <MMLiteAppHalfScreenStatusChangeListener> _statusChangeListener; // +0x20
    LiteAppHalfScreenConfig * _halfConfig; // +0x28
    MMPageSheetAdapter * _pageSheetAdapter; // +0x30
    double _viewOldWitdh; // +0x38
    double _viewOldHeight; // +0x40
    MMLiteAppHalfScreenDragBarContainerView * _dragBarContainerView; // +0x48
}
- (BOOL)shouldWrapViewWithSafeArea;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)canDismissClosedLiteApp;
- (void)dismissClosedLiteAppIfNeeded;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (id)liteAppRootView;
- (void)setupChildVC;
- (void)closeLiteApp;
- (void)setupTapGesture;
- (void)handleTap:(id)arg1;
- (void)setupSwipeUpGesture;
- (void)handlePan:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)scrollToTop;
- (void)scrollToResume;
- (void)animateChildViewToY:(double)arg1;
- (void)updateBgViewMask;
- (BOOL)prefersStatusBarHidden;
- (void)setupDragBar;
- (void)_layoutDragBarContainer;
- (BOOL)isPointInDragBarContainerArea:(CGPoint)arg1;
- (void)updateDragBarWithDistance:(double)arg1;
- (id)liteAppViewController;
- (void)setLiteAppViewController:(id)arg1;
- (id)statusChangeListener;
- (void)setStatusChangeListener:(id)arg1;
- (BOOL)enableDragToFullScreenInHalfScreen;
- (void)setEnableDragToFullScreenInHalfScreen:(BOOL)arg1;
- (id)halfConfig;
- (void)setHalfConfig:(id)arg1;
- (id)pageSheetAdapter;
- (void)setPageSheetAdapter:(id)arg1;
- (BOOL)showDragBar;
- (void)setShowDragBar:(BOOL)arg1;
- (double)viewOldWitdh;
- (void)setViewOldWitdh:(double)arg1;
- (double)viewOldHeight;
- (void)setViewOldHeight:(double)arg1;
- (id)dragBarContainerView;
- (void)setDragBarContainerView:(id)arg1;
- (BOOL)pageSheetHasAppeared;
- (void)setPageSheetHasAppeared:(BOOL)arg1;
- (void).cxx_destruct;
@end
