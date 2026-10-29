@interface WCFinderHalfScreenContainerViewController : MMPageSheetBaseViewController <WCFinderHalfScreenProtocol>
{
    BOOL _hasCapturedInitialMinY; // +0x70
    BOOL _hasAddedPageSheetObserver; // +0x71
    UIViewController<WCFinderHalfScreenContentProtocol> * _contentViewController; // +0x78
    UIScrollView * _trackingScrollView; // +0x80
    double _indicatorTopInset; // +0x88
    double _indicatorContentSpacing; // +0x90
    UIView * _contentView; // +0x98
    WCFinderSteramProfileBarView * _lineView; // +0xa0
    double _currentTranslationY; // +0xa8
    double _gestureBeginTranslationY; // +0xb0
    UIView * _observedPageSheetView; // +0xb8
    double _initialPageSheetMinY; // +0xc0
}
- (id)initWithContentViewController:(id)arg1;
- (void)dealloc;
- (BOOL)shouldWrapViewWithSafeArea;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (CGSize)presentationContainerSize;
- (void)_setupPageSheetConfig;
- (void)_layoutContentSubviews;
- (void)_updateTrackingScrollView:(id)arg1;
- (void)_startObservePageSheetFrameIfNeeded;
- (void)_stopObservePageSheetFrameIfNeeded;
- (void)_handlePageSheetFrameChange:(CGRect)arg1;
- (void)_handleScrollViewPanGesture:(id)arg1;
- (void)_updateMoveDistance:(double)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (double)pageSheetContentWidth;
- (void)pageSheetWillDisappear;
- (double)pageSheetContentHeight;
- (double)_pageSheetContentHeight;
- (id)getHalfContainerView;
- (id)getCurTargetRatioValue;
- (id)contentViewController;
- (id)trackingScrollView;
- (void)setTrackingScrollView:(id)arg1;
- (double)indicatorTopInset;
- (void)setIndicatorTopInset:(double)arg1;
- (double)indicatorContentSpacing;
- (void)setIndicatorContentSpacing:(double)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (double)currentTranslationY;
- (void)setCurrentTranslationY:(double)arg1;
- (double)gestureBeginTranslationY;
- (void)setGestureBeginTranslationY:(double)arg1;
- (id)observedPageSheetView;
- (void)setObservedPageSheetView:(id)arg1;
- (double)initialPageSheetMinY;
- (void)setInitialPageSheetMinY:(double)arg1;
- (BOOL)hasCapturedInitialMinY;
- (void)setHasCapturedInitialMinY:(BOOL)arg1;
- (BOOL)hasAddedPageSheetObserver;
- (void)setHasAddedPageSheetObserver:(BOOL)arg1;
- (void).cxx_destruct;
@end
