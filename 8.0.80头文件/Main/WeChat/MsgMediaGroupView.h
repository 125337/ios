@interface MsgMediaGroupView : UIView <UIGestureRecognizerDelegate, CAAnimationDelegate>
{
    BOOL _isCardAnimating; // +0x8
    BOOL _isContinueAnimationRunning; // +0x9
    BOOL _isHighlighted; // +0xa
    BOOL _isFinished; // +0xb
    int _overlayX_1; // +0xc
    int _overlayX_2; // +0x10
    id <MsgMediaGroupViewDelegate> _delegate; // +0x18
    long long _visibleNodeNum; // +0x20
    long long _preloadNodeNum; // +0x28
    long long _currentIndex; // +0x30
    UIView * _containerView; // +0x38
    NSMutableArray * _itemList; // +0x40
    double _currentProgress; // +0x48
    UIPanGestureRecognizer * _panGesture; // +0x50
    CADisplayLink * _displayLink; // +0x58
    double _fromProgress; // +0x60
    double _displayProgress; // +0x68
    double _toProgress; // +0x70
    double _standardizedProgress; // +0x78
    double _curvedProgress; // +0x80
    BezierCurveEvaluator * _curveEvaluator; // +0x88
    NSArray * _curveAccArr; // +0x90
    double _curveTotalArea; // +0x98
    CGSize _nodeSize; // +0xa0
}
+ (id)buildViewForViewModel:(id)arg1 nodeSize:(CGSize)arg2;
+ (void)applyLayout:(id)arg1 toCardView:(id)arg2;
+ (CGSize)calcCardSize:(double)arg1;
- (void)configureWithMediaGroup:(id)arg1 index:(long long)arg2;
- (void)appendCardNodes:(id)arg1;
- (void)removeCardNodes:(id)arg1;
- (id)cardItemAtIndex:(long long)arg1;
- (id)activeCardItem;
- (id)activeCardView;
- (void)setHighlighted:(BOOL)arg1;
- (id)initWithConstrainedWidth:(double)arg1;
- (id)initWithCardWidth:(double)arg1;
- (void)layoutSubviews;
- (void)updateCardState:(id)arg1 layoutIndex:(long long)arg2;
- (void)updateAllCardState;
- (void)setHidden:(BOOL)arg1;
- (void)didMoveToWindow;
- (id)currentCard;
- (long long)leftVisibleIndex;
- (long long)rightVisibleIndex;
- (id)nodeViewAtIndex:(long long)arg1;
- (void)setCurrentIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)buildViewForItemIfNeeded:(id)arg1;
- (void)clearViewForItem:(id)arg1;
- (void)checkVisibleNodeViews;
- (void)syncHighlightedToVisibleCards;
- (void)enumerateNodes:(long long)arg1 isLeftPriorty:(BOOL)arg2 iterator:(id /* block */)arg3;
- (void)enumerateAllNodes:(id /* block */)arg1;
- (double)calculateHorizontalAngleWithX:(double)arg1 y:(double)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)interruptContinueAnimationAndCommit;
- (void)handlePan:(id)arg1;
- (id)layoutForIndex:(long long)arg1 baseCenterIndex:(long long)arg2;
- (id)layoutForCurrentCenterIndex:(long long)arg1 nextCenterIndex:(long long)arg2;
- (double)calculateYForX:(double)arg1;
- (double)asymptoticValueForInput:(double)arg1 withLimit:(double)arg2 steepness:(double)arg3;
- (void)updateViewsForPanProgress:(double)arg1;
- (id)layoutSnapshotForProgress:(double)arg1;
- (void)applyLayoutSnapshot:(id)arg1;
- (void)updateLayoutAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)continueAnimationFrom:(double)arg1 isFinished:(BOOL)arg2;
- (void)continueDisplayLinkAnimationFrom:(double)arg1 to:(double)arg2;
- (void)continueFinishAnimation;
- (void)continueKeyframeAnimationFrom:(double)arg1 to:(double)arg2;
- (double)solveBezierTForCurvedProgress:(double)arg1 evaluator:(id)arg2;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)onContinueAnimationCompleted:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)visibleNodeNum;
- (void)setVisibleNodeNum:(long long)arg1;
- (long long)preloadNodeNum;
- (void)setPreloadNodeNum:(long long)arg1;
- (CGSize)nodeSize;
- (long long)currentIndex;
- (void)setCurrentIndex:(long long)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)itemList;
- (void)setItemList:(id)arg1;
- (BOOL)isCardAnimating;
- (void)setIsCardAnimating:(BOOL)arg1;
- (BOOL)isContinueAnimationRunning;
- (void)setIsContinueAnimationRunning:(BOOL)arg1;
- (double)currentProgress;
- (void)setCurrentProgress:(double)arg1;
- (id)panGesture;
- (void)setPanGesture:(id)arg1;
- (int)overlayX_1;
- (void)setOverlayX_1:(int)arg1;
- (int)overlayX_2;
- (void)setOverlayX_2:(int)arg1;
- (BOOL)isHighlighted;
- (void)setIsHighlighted:(BOOL)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (double)fromProgress;
- (void)setFromProgress:(double)arg1;
- (double)displayProgress;
- (void)setDisplayProgress:(double)arg1;
- (double)toProgress;
- (void)setToProgress:(double)arg1;
- (BOOL)isFinished;
- (void)setIsFinished:(BOOL)arg1;
- (double)standardizedProgress;
- (void)setStandardizedProgress:(double)arg1;
- (double)curvedProgress;
- (void)setCurvedProgress:(double)arg1;
- (id)curveEvaluator;
- (void)setCurveEvaluator:(id)arg1;
- (id)curveAccArr;
- (void)setCurveAccArr:(id)arg1;
- (double)curveTotalArea;
- (void)setCurveTotalArea:(double)arg1;
- (void).cxx_destruct;
@end
