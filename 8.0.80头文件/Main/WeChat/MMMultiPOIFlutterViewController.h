@interface MMMultiPOIFlutterViewController : MMUIViewController <UIGestureRecognizerDelegate>
{
    BOOL _isDragging; // +0x70
    BOOL _listAtTop; // +0x71
    id <MMMultiPOIDetailDelegate> _delegate; // +0x78
    NSDictionary * _pageParams; // +0x80
    NSString * _titleText; // +0x88
    UIView * _contentContainer; // +0x90
    WCFinderStreamProfileDragBarView * _dragBarView; // +0x98
    MMFlutterInstance * _flutterInstance; // +0xa0
    MMFlutterViewController * _flutterVC; // +0xa8
    FlutterMultiPOIListPlugin * _plugin; // +0xb0
    UIScrollView * _flutterScrollView; // +0xb8
    UIPanGestureRecognizer * _panGesture; // +0xc0
    long long _panelState; // +0xc8
    double _dragOriginTopY; // +0xd0
    double _dragBeginTime; // +0xd8
    double _dragBeginTranslationY; // +0xe0
}
- (id)initWithParams:(id)arg1 title:(id)arg2;
- (void)dealloc;
- (BOOL)useTransparentNavibar;
- (BOOL)shouldWrapViewWithSafeArea;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)setupContentContainer;
- (void)setupFlutter;
- (void)applyContainerBackgroundForDarkMode:(BOOL)arg1;
- (double)superviewHeight;
- (CGSize)contentContainerSize;
- (BOOL)isExpand;
- (double)shrinkContentHeight;
- (double)expandContentHeight;
- (double)topYForState:(long long)arg1;
- (double)topValueOnShrink;
- (double)topValueOnExpand;
- (void)setPanelState:(long long)arg1;
- (void)shrinkPanel;
- (void)expandPanel;
- (void)animateToState:(long long)arg1;
- (void)notifyPanelStateChanged:(long long)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (double)currentVisualTopY;
- (void)handlePanGesture:(id)arg1;
- (long long)snapTargetStateForFinalY:(double)arg1 velocityY:(double)arg2;
- (void)emitDragProgressForCurrentTop:(double)arg1;
- (void)handleFlutterListAtTop:(BOOL)arg1;
- (id)findFirstScrollViewInView:(id)arg1;
- (void)updateFlutterScrollEnabledForTopY:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isDragging;
- (void)setIsDragging:(BOOL)arg1;
- (id)pageParams;
- (void)setPageParams:(id)arg1;
- (id)titleText;
- (void)setTitleText:(id)arg1;
- (id)contentContainer;
- (void)setContentContainer:(id)arg1;
- (id)dragBarView;
- (void)setDragBarView:(id)arg1;
- (id)flutterInstance;
- (void)setFlutterInstance:(id)arg1;
- (id)flutterVC;
- (void)setFlutterVC:(id)arg1;
- (id)plugin;
- (void)setPlugin:(id)arg1;
- (id)flutterScrollView;
- (void)setFlutterScrollView:(id)arg1;
- (id)panGesture;
- (void)setPanGesture:(id)arg1;
- (long long)panelState;
- (BOOL)listAtTop;
- (void)setListAtTop:(BOOL)arg1;
- (double)dragOriginTopY;
- (void)setDragOriginTopY:(double)arg1;
- (double)dragBeginTime;
- (void)setDragBeginTime:(double)arg1;
- (double)dragBeginTranslationY;
- (void)setDragBeginTranslationY:(double)arg1;
- (void).cxx_destruct;
@end
