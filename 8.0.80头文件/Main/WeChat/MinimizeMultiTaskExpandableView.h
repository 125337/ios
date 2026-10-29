@interface MinimizeMultiTaskExpandableView : MinimizeFloatingBaseView <MoveWithTouchAlgorithmDelegate, UIGestureRecognizerDelegate, MinimizeAntiCollisionItem, MMScrollActionSheetExt, MinimizeTaskFloatingContainerViewDelegate, QuickReplyMsgExt>
{
    BOOL _isExpanded; // +0x8
    BOOL _startInTopBounceArea; // +0x9
    BOOL _startInBottomBounceArea; // +0xa
    BOOL _isAnimating; // +0xb
    BOOL _canChangeEdge; // +0xc
    BOOL _isShadowVisible; // +0xd
    BOOL _cancelTouchMovement; // +0xe
    BOOL _touchBeginInsideFloating; // +0xf
    BOOL _isDragging; // +0x10
    id <MinimizeMultiTaskExpandableDelegate> _delegate; // +0x18
    long long _floatingStickEdge; // +0x20
    double _edgeFoldingProgress; // +0x28
    MoveWithTouchAlgorithm * _touchMoveAlgorithm; // +0x30
    NSString * _currPlayingBizName; // +0x38
    NSString * _currPlayingBizKey; // +0x40
    double _expandedHeight; // +0x48
    double _foldedHeight; // +0x50
    double _currExpandProgress; // +0x58
    long long _currDragState; // +0x60
    double _lastTaskOffsetToEdge; // +0x68
    double _firstTaskOffsetToEdge; // +0x70
    long long _dragEndToStickEdge; // +0x78
    UIViewPropertyAnimator * _dragStateAnimator; // +0x80
    NSMutableArray * _containerViews; // +0x88
    UIScrollView * _contentView; // +0x90
    UIView * _blurView; // +0x98
    MMUIButton * _foldingButton; // +0xa0
    UIImageView * _foldingIconView; // +0xa8
    double _prevTouchTime; // +0xb0
    UIPanGestureRecognizer * _expandedPanGesture; // +0xb8
    MMBezierDisplayLinkAnimator * _curveAnimator; // +0xc0
    unsigned long long _touchBeginTime; // +0xc8
    UIButton * _touchBeginButton; // +0xd0
    double _bottomSafeInset; // +0xd8
    MinimizeContentReporter * _reporter; // +0xe0
    CGPoint _dragBeginPoint; // +0xe8
    CGPoint _dragCurrPoint; // +0xf8
    CGPoint _prevTouchPosition; // +0x108
    CGPoint _currVelocity; // +0x118
    CGPoint _expandedMovement; // +0x128
    CGPoint _touchBeginPoint; // +0x138
}
- (void)setupFloatingMoveAlgorithm;
- (void)startCalculating;
- (void)stopCalculating;
- (BOOL)shouldLockToPortrait;
- (void)onMoveBeginWithTouchAlgorithmBegin:(CGPoint)arg1 Touch:(id)arg2;
- (void)onMoveWithTouchAlgorithmResultMoveTo:(CGPoint)arg1 Touch:(id)arg2;
- (void)onMoveEndWithTouchAlgorithmResultMoveTo:(CGPoint)arg1;
- (void)onMoveWithTouchAlgorithmTaped:(CGPoint)arg1;
- (id)onMoveWithTouchAlgorithmRequestView;
- (void)onMoveWithTouchAlgorithmMoveLong;
- (void)onMoveWithTouchAlgorithnMoveEnd:(CGPoint)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (CGPoint)safetyPosition:(CGPoint)arg1;
- (BOOL)isTouchInsideContentView:(CGPoint)arg1;
- (void)updateFrameWithDragOffset:(CGPoint)arg1;
- (void)updateFrameWithStickEdge:(long long)arg1 anchor:(long long)arg2;
- (void)notifyOuterContainerButtonTouch:(id)arg1 phase:(long long)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)updateTaskList:(id)arg1;
- (void)updateForHostBoundsChange;
- (void)adsorbToWindowAnimated:(BOOL)arg1;
- (BOOL)isOuterContentAttached;
- (void)detachCurrentOuterContentView;
- (double)containerContentHeight;
- (void)setEdgeFoldingProgress:(double)arg1;
- (void)setFloatingStickEdge:(long long)arg1;
- (void)setExpanded:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setExpanded:(BOOL)arg1 animated:(BOOL)arg2 complete:(id /* block */)arg3;
- (void)setExpanded:(BOOL)arg1 animated:(BOOL)arg2 duration:(double)arg3 complete:(id /* block */)arg4;
- (void)changeStickEdgeAndFold:(long long)arg1;
- (void)removeContainerViews:(id)arg1 animated:(BOOL)arg2;
- (void)animateZoomContainerViewsAndRemoveThem:(id)arg1 completion:(id /* block */)arg2;
- (void)animateFadeontainerViewsAndRemoveThem:(id)arg1 completion:(id /* block */)arg2;
- (CGSize)calculateContainerContentSize;
- (CGSize)calculateContainerContentSize:(BOOL)arg1;
- (CGSize)calculateContainerSize;
- (id)containerViewWithTaskKey:(id)arg1;
- (id)currContentInfo;
- (id)currContainerView;
- (id)containerView:(id)arg1 bizKey:(id)arg2;
- (long long)currTaskCount;
- (double)lastTaskTrailingOffsetToStickEdge;
- (double)firstTaskLeadingOffsetToOtherEdge;
- (CGRect)convertFrameForIncomingContainer:(CGSize)arg1 toWindow:(id)arg2;
- (CGRect)convertTopContainerFrameToWindow:(id)arg1;
- (CGRect)convertContainerFrame:(id)arg1 toWindow:(id)arg2;
- (CGRect)convertContainerView:(id)arg1 toWindow:(id)arg2;
- (id)contentInfoInPoint:(CGPoint)arg1;
- (void)initUI;
- (void)calculateLayouts;
- (void)relayoutContents;
- (void)layoutSubviews;
- (id)lastVisibleContainer;
- (void)reverseContainerViews;
- (void)updateContentViewShadow;
- (CGRect)antiCollisionContentFrame;
- (void)onExpendMultiTask:(id)arg1;
- (void)onBizBottomBarShow:(double)arg1;
- (void)onBizBottomBarHide;
- (void)onKeyboardWillShow:(id)arg1;
- (void)onKeyboardWillHide:(id)arg1;
- (void)onScrollActionSheetShow:(id)arg1 height:(double)arg2;
- (void)onScrollActionSheetHide:(id)arg1 height:(double)arg2;
- (void)onContainerTouchBegin:(CGPoint)arg1;
- (BOOL)onContainerTouchMoved:(CGPoint)arg1;
- (BOOL)onContainerTouchEnd:(BOOL)arg1;
- (long long)getCurrentDragState:(CGPoint)arg1;
- (void)updateContentTransformToFitEdge:(long long)arg1;
- (void)onDragToExpandBegin:(CGPoint)arg1;
- (BOOL)onDragToExpandMoved:(CGPoint)arg1;
- (BOOL)onDragToExpandEnd;
- (void)updateExpandProgress:(double)arg1;
- (void)updateExpandProgress:(double)arg1 updateBgMask:(BOOL)arg2;
- (double)calculateCurrDragExpandProgress;
- (void)onTapToExpandBegin:(CGPoint)arg1;
- (void)onTapToExpandMoved:(CGPoint)arg1;
- (BOOL)onTapToExpandEnd:(BOOL)arg1;
- (void)calculateAccelerationBegin:(CGPoint)arg1;
- (void)calculateAccelerationMoved:(CGPoint)arg1;
- (void)onContentViewPan:(id)arg1;
- (BOOL)canReseInvisibleAlpha;
- (BOOL)shouldChangeToInvisible:(BOOL)arg1;
- (double)getInvisibleAlpha;
- (void)checkFloatingShowState;
- (void)setAlpha:(double)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)onDeleteTask:(id)arg1;
- (void)onOpenTask:(id)arg1;
- (void)onBeginQuickReplyMsg;
- (void)didMoveToWindow;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isExpanded;
- (void)setIsExpanded:(BOOL)arg1;
- (long long)floatingStickEdge;
- (double)edgeFoldingProgress;
- (BOOL)startInTopBounceArea;
- (void)setStartInTopBounceArea:(BOOL)arg1;
- (BOOL)startInBottomBounceArea;
- (void)setStartInBottomBounceArea:(BOOL)arg1;
- (id)touchMoveAlgorithm;
- (void)setTouchMoveAlgorithm:(id)arg1;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (id)currPlayingBizName;
- (void)setCurrPlayingBizName:(id)arg1;
- (id)currPlayingBizKey;
- (void)setCurrPlayingBizKey:(id)arg1;
- (double)expandedHeight;
- (void)setExpandedHeight:(double)arg1;
- (double)foldedHeight;
- (void)setFoldedHeight:(double)arg1;
- (CGPoint)dragBeginPoint;
- (void)setDragBeginPoint:(CGPoint)arg1;
- (CGPoint)dragCurrPoint;
- (void)setDragCurrPoint:(CGPoint)arg1;
- (double)currExpandProgress;
- (void)setCurrExpandProgress:(double)arg1;
- (long long)currDragState;
- (void)setCurrDragState:(long long)arg1;
- (double)lastTaskOffsetToEdge;
- (void)setLastTaskOffsetToEdge:(double)arg1;
- (double)firstTaskOffsetToEdge;
- (void)setFirstTaskOffsetToEdge:(double)arg1;
- (long long)dragEndToStickEdge;
- (void)setDragEndToStickEdge:(long long)arg1;
- (id)dragStateAnimator;
- (void)setDragStateAnimator:(id)arg1;
- (id)containerViews;
- (void)setContainerViews:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (id)foldingButton;
- (void)setFoldingButton:(id)arg1;
- (id)foldingIconView;
- (void)setFoldingIconView:(id)arg1;
- (CGPoint)prevTouchPosition;
- (void)setPrevTouchPosition:(CGPoint)arg1;
- (double)prevTouchTime;
- (void)setPrevTouchTime:(double)arg1;
- (CGPoint)currVelocity;
- (void)setCurrVelocity:(CGPoint)arg1;
- (BOOL)canChangeEdge;
- (void)setCanChangeEdge:(BOOL)arg1;
- (id)expandedPanGesture;
- (void)setExpandedPanGesture:(id)arg1;
- (CGPoint)expandedMovement;
- (void)setExpandedMovement:(CGPoint)arg1;
- (id)curveAnimator;
- (void)setCurveAnimator:(id)arg1;
- (BOOL)isShadowVisible;
- (void)setIsShadowVisible:(BOOL)arg1;
- (BOOL)cancelTouchMovement;
- (void)setCancelTouchMovement:(BOOL)arg1;
- (BOOL)touchBeginInsideFloating;
- (void)setTouchBeginInsideFloating:(BOOL)arg1;
- (BOOL)isDragging;
- (void)setIsDragging:(BOOL)arg1;
- (unsigned long long)touchBeginTime;
- (void)setTouchBeginTime:(unsigned long long)arg1;
- (id)touchBeginButton;
- (void)setTouchBeginButton:(id)arg1;
- (CGPoint)touchBeginPoint;
- (void)setTouchBeginPoint:(CGPoint)arg1;
- (double)bottomSafeInset;
- (void)setBottomSafeInset:(double)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (void).cxx_destruct;
@end
