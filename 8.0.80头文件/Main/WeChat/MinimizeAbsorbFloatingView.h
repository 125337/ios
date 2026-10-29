@interface MinimizeAbsorbFloatingView : MinimizeFloatingBaseView <MMWebImageViewDelegate, MinimizeAntiCollisionItem, MMUIViewControllerExt, MoveWithTouchAlgorithmDelegate>
{
    BOOL _bBottomContainerExpanded; // +0x8
    BOOL _animatedForAdsorbToWindow; // +0x9
    BOOL _hasEverMoved; // +0xa
    BOOL _useTightStickType; // +0xb
    BOOL _isFoldEnabled; // +0xc
    BOOL _enablePIPShrink; // +0xd
    unsigned int _gestureAnimationType; // +0x10
    MoveWithTouchAlgorithm * _m_moveAlgorithm; // +0x18
    id <MinimizeAbsorbFloatingViewDelegate> _m_delegate; // +0x20
    UIView * _circleContainerView; // +0x28
    NSString * _taskKeyInGestureInteraction; // +0x30
    MinimizeStateContainerView * _stateContainerView; // +0x38
    NSMutableArray * _tmpUnvisibleTaskDataCopyList; // +0x40
    UIView * _maskLayerView; // +0x48
    UIView * _upperContainerView; // +0x50
    UIView * _outerContentContainerView; // +0x58
    UIView * _bottomContainerView; // +0x60
    UIView * _bottomContainerBGView; // +0x68
    NSArray * _stateTaskList; // +0x70
    OuterContentInfo * _outerContentInfo; // +0x78
    UIView * _highlightMaskView; // +0x80
    UIView * _upperHighlightView; // +0x88
    UIView * _bottomHighlightView; // +0x90
    unsigned long long _positionType; // +0x98
    unsigned long long _contentType; // +0xa0
    UIView * _tailView; // +0xa8
    UILongPressGestureRecognizer * _longPressGes; // +0xb0
    double _animateDurationForAdsorbToWindow; // +0xb8
    unsigned long long _sizeChangedAnimAnchorPoint; // +0xc0
    MinimizeTaskContainerMoveContext * _originMoveContext; // +0xc8
    long long _animationSerial; // +0xd0
    double _startTime; // +0xd8
    CADisplayLink * _displayLink; // +0xe0
    MMUIButton * _unfoldButton; // +0xe8
    UIView * _blurView; // +0xf0
    UIView * _blurMaskView; // +0xf8
    CGSize _outerContentSize; // +0x100
    UIEdgeInsets _touchInsets; // +0x110
    CGRect _targetFrame; // +0x130
    CGRect _originalFrame; // +0x150
}
+ (double)floatingViewUnfoldThreshold;
- (BOOL)beginGestureToShow:(id)arg1 FinalTasksIfComplete:(id)arg2;
- (BOOL)updateGestureProgressToShow:(id)arg1 Progress:(double)arg2;
- (BOOL)endGestureToShow:(id)arg1 FinalBackgroundTasks:(id)arg2 IsComplete:(BOOL)arg3;
- (void)clearTmpData;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setFrame:(CGRect)arg1;
- (void)setTransform:(CGAffineTransform)arg1;
- (void)setAlpha:(double)arg1;
- (void)setPositionType:(unsigned long long)arg1;
- (id)getMaskPath:(CGRect)arg1 WithPositionType:(unsigned long long)arg2 ContentType:(unsigned long long)arg3;
- (void)updateShowingTaskList:(id)arg1 Animated:(BOOL)arg2 Duration:(double)arg3;
- (BOOL)isOuterContentAttached;
- (void)attachOuterContentView;
- (void)detachOuterContentView;
- (unsigned long long)filterSizeChangedAnimAnchorPoint:(id)arg1;
- (id)filterPositiveTaskList:(id)arg1;
- (id)filterPassiveTaskList:(id)arg1;
- (id)filterOuterContentInfo:(id)arg1;
- (void)setHighlight:(unsigned long long)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setCloseButtonShow:(BOOL)arg1 duration:(double)arg2;
- (id)getCurrentMaskPathConvertedToCurrentScreenCoordinates;
- (CGRect)getConvertedVisibleFrame:(id)arg1;
- (CGRect)getConvertedVisibleFrame:(id)arg1 toWindow:(id)arg2;
- (CGRect)getConvertedVisibleFrameWithOuterContentSize:(CGSize)arg1;
- (CGRect)getConvertedVisibleFrameWithoutContentView;
- (CGRect)getConvertedStateContainerFrameToWindow:(id)arg1;
- (CGRect)getConvertedStateContainerFrameForTaskData:(id)arg1 toWindow:(id)arg2;
- (void)resetStateContainerView:(id)arg1 PositionType:(unsigned long long)arg2 ContentType:(unsigned long long)arg3;
- (void)animationSetStateContainerView:(id)arg1 Duration:(double)arg2 PositionType:(unsigned long long)arg3 ContentType:(unsigned long long)arg4;
- (id)genNewTaskListLayerPath:(id)arg1 AllTaskKey2Frame:(id)arg2;
- (id)getDefaultRoundClipPathForIcon:(CGRect)arg1;
- (id)getDefaultClipPath:(CGRect)arg1 positionType:(unsigned long long)arg2 contentType:(unsigned long long)arg3;
- (id)getClipPath:(id)arg1 NextIconFrameVal:(id)arg2;
- (id)getClipPath:(id)arg1 NextView:(id)arg2;
- (id)getClipPath:(id)arg1 NextView:(id)arg2 NeedMerge:(BOOL)arg3;
- (double)getClockWiseAngleForPoint:(CGPoint)arg1 Center:(CGPoint)arg2;
- (void)addAnimationForSubLayers:(id)arg1 MaskLayerPath:(id)arg2 BorderLayerPath:(id)arg3 IconSize:(double)arg4 Duration:(double)arg5;
- (void)animateSubLayer:(id)arg1 ToPath:(id)arg2 Duration:(double)arg3;
- (id)getTask:(id)arg1 TaskList:(id)arg2;
- (void)adsorbToWindow:(BOOL)arg1 duration:(double)arg2;
- (BOOL)isPositionOnLeft;
- (CGRect)frameDockedToHostKeepingFold:(BOOL)arg1;
- (void)adsorbToWindow:(BOOL)arg1 duration:(double)arg2 shouldKeepFold:(BOOL)arg3;
- (void)updateContentLayoutForCurrentHost;
- (void)correctPositionForCurrentHost;
- (BOOL)updatePlaybackSizeForHostSize:(CGSize)arg1;
- (void)updateForHostBoundsChange:(CGSize)arg1;
- (UIEdgeInsets)realSafeAreaInsetsOfWindow;
- (UIEdgeInsets)realSafeAreaInsets;
- (UIEdgeInsets)adjuestRealSafeAreaInsets:(UIEdgeInsets)arg1;
- (BOOL)hasOuterContent:(unsigned long long)arg1;
- (BOOL)hasStateTask:(unsigned long long)arg1;
- (BOOL)onlyHasStateTask:(unsigned long long)arg1;
- (double)topSafeAreaLength;
- (double)bottomSafeAreaLength;
- (void)updateStateContainerView:(id)arg1 WithLayoutParam:(id)arg2;
- (void)updateBorderLayer:(id)arg1 borderFrame:(CGRect)arg2 BorderColor:(id)arg3 BorderWidth:(double)arg4 WithLayoutParam:(id)arg5;
- (void)updateUnfoldButtonWithLayoutParam:(id)arg1;
- (void)updateUnfoldButtonArrowDirectionToLeft:(BOOL)arg1;
- (void)updateCloseButtonWithLayoutParam:(id)arg1;
- (CGRect)calcFrame:(CGRect)arg1 withInsets:(UIEdgeInsets)arg2;
- (void)updateSingleMask:(id)arg1 WithLayoutParam:(id)arg2;
- (void)updateVisibleFrameWithLayoutParam:(id)arg1;
- (void)updateOuterContentContainerViewFrameWithLayoutParam:(id)arg1;
- (void)updateBottomContainerViewFrameWithLayoutParam:(id)arg1;
- (void)updateBlurViewWithLayoutParam:(id)arg1;
- (void)updateStateContainerViewFrameWithLayoutParam:(id)arg1;
- (BOOL)isFloatingViewFolding;
- (void)updateViewsWhenMovingToPoint:(CGPoint)arg1;
- (void)updateBlurViewWithScale:(double)arg1;
- (void)animationToValueForViewsWhenMoveEndsWithFrame:(CGRect)arg1;
- (void)adjustAfterAdsorbToWindowWithNewFrame:(CGRect)arg1;
- (void)changePositionType:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)changeContentType:(unsigned long long)arg1 animated:(BOOL)arg2 duration:(double)arg3 outerContentSize:(CGSize)arg4 stateList:(id)arg5;
- (void)updateAnimationAnchorWhenContentTypeChangeFromOldContentType:(unsigned long long)arg1 toNewContentType:(unsigned long long)arg2;
- (unsigned long long)decideTargetPositionTypeForFrame:(CGRect)arg1;
- (void)updateAllViewWithLayoutParam:(id)arg1 stateList:(id)arg2;
- (unsigned long long)calcContentTypeWithStateList:(id)arg1 outerContentInfo:(id)arg2;
- (CGRect)calcVisibleFrameWithLayoutParam:(id)arg1;
- (CGSize)calcVisibleSizeWithLayoutParam:(id)arg1;
- (CGSize)calcVisibleSizeWithLayoutParam:(id)arg1 stateContainerSize:(CGSize)arg2;
- (CGRect)calcFrameForOuterContentContainerViewWithLayoutParam:(id)arg1;
- (double)calcOriginXForOuterContentContainerViewWithPositionType:(unsigned long long)arg1 visibleSize:(CGSize)arg2 andOuterContentSize:(CGSize)arg3;
- (CGRect)calcFrameForBottomContainerViewWithLayoutParam:(id)arg1;
- (CGRect)calcFrameForBottomContainerViewWithLayoutParam:(id)arg1 stateContainerSize:(CGSize)arg2;
- (CGRect)calcFrameForBottomContainerViewWithLayoutParam:(id)arg1 visbleSize:(CGSize)arg2;
- (CGRect)calcFrameForBottomContainerViewWithLayoutParam:(id)arg1 visbleSize:(CGSize)arg2 stateContainerSize:(CGSize)arg3;
- (CGRect)calcFrameForBottomHighlightViewWithLayoutParam:(id)arg1;
- (CGRect)calcFrameForStateContainerViewWithLayoutParam:(id)arg1 parentSize:(CGSize)arg2;
- (double)baseBottomContainerHeightForContentType:(unsigned long long)arg1;
- (double)bottomContainerHeightWithLayoutParam:(id)arg1;
- (double)bottomContainerHeightWithLayoutParam:(id)arg1 stateContainerSize:(CGSize)arg2;
- (double)bottomContainerWidthWithLayoutParam:(id)arg1;
- (double)bottomContainerWidthWithLayoutParam:(id)arg1 stateContainerSize:(CGSize)arg2;
- (double)calcMoveAlgorithmOffsetXWithLayoutParam:(id)arg1;
- (CGRect)calcShadowImageViewFrameWithLayoutParam:(id)arg1 Image:(id)arg2;
- (CGRect)calcShadowImageViewFrameForOuterContentWithLayoutParam:(id)arg1 Image:(id)arg2;
- (id)calcShadowImageWithLayoutParam:(id)arg1;
- (BOOL)shouldLockToPortrait;
- (BOOL)calIsFoldEnabledFromContentType:(unsigned long long)arg1 contentInfo:(id)arg2;
- (void)onMoveBeginWithTouchAlgorithmBegin:(CGPoint)arg1;
- (void)onLongPressEvent:(id)arg1;
- (void)onMoveWithTouchAlgorithmResultMoveTo:(CGPoint)arg1 Touch:(id)arg2;
- (void)onMoveEndWithTouchAlgorithmResultMoveTo:(CGPoint)arg1;
- (void)onMoveWithTouchAlgorithmTaped:(CGPoint)arg1;
- (id)onMoveWithTouchAlgorithmRequestView;
- (void)onMoveWithTouchAlgorithmMoveLong;
- (void)onMoveWithTouchAlgorithnMoveEnd:(CGPoint)arg1;
- (void)onMoveWithTouchAlgorithmDecideEndStateIsFold:(BOOL)arg1 triggerdByTouch:(BOOL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (CGRect)antiCollisionContentFrame;
- (void)onLongPressGesRecognized:(id)arg1;
- (void)onUnfoldButtonClicked;
- (void)stopCalculating;
- (void)startCalculating;
- (BOOL)isCalculating;
- (void)notifyOuterContainerButtonTouch:(id)arg1 phase:(long long)arg2;
- (double)floatViewScreenWidth;
- (id)accessibilityLabelForStateTask;
- (void)updateAccessibilityElements;
- (void)decideFoldStateChangedAndCallDelegate:(unsigned long long)arg1;
- (void)absorbToBorderAnimated:(BOOL)arg1;
- (void)foldToBorderAnimated:(BOOL)arg1;
- (BOOL)isFold;
- (id)outterContainerView;
- (id)bottomContainerSnapshot;
- (BOOL)isBottomContainerExpanded;
- (BOOL)isOnlyStateTaskAndNotExpanded;
- (void)setBottomContainerExpanded:(BOOL)arg1;
- (BOOL)shouldChangeToInvisible:(BOOL)arg1;
- (double)getInvisibleAlpha;
- (void)changeFloatingAlphaToShow;
- (void)tryRecoverHiddenState;
- (void)MMUIViewControllerDidAppear:(id)arg1;
- (id)m_moveAlgorithm;
- (void)setM_moveAlgorithm:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)circleContainerView;
- (id)taskKeyInGestureInteraction;
- (void)setTaskKeyInGestureInteraction:(id)arg1;
- (unsigned int)gestureAnimationType;
- (void)setGestureAnimationType:(unsigned int)arg1;
- (UIEdgeInsets)touchInsets;
- (void)setTouchInsets:(UIEdgeInsets)arg1;
- (id)stateContainerView;
- (void)setStateContainerView:(id)arg1;
- (id)tmpUnvisibleTaskDataCopyList;
- (void)setTmpUnvisibleTaskDataCopyList:(id)arg1;
- (id)maskLayerView;
- (void)setMaskLayerView:(id)arg1;
- (id)upperContainerView;
- (void)setUpperContainerView:(id)arg1;
- (id)outerContentContainerView;
- (void)setOuterContentContainerView:(id)arg1;
- (id)bottomContainerView;
- (void)setBottomContainerView:(id)arg1;
- (id)bottomContainerBGView;
- (void)setBottomContainerBGView:(id)arg1;
- (BOOL)bBottomContainerExpanded;
- (void)setBBottomContainerExpanded:(BOOL)arg1;
- (id)stateTaskList;
- (void)setStateTaskList:(id)arg1;
- (id)outerContentInfo;
- (void)setOuterContentInfo:(id)arg1;
- (id)highlightMaskView;
- (void)setHighlightMaskView:(id)arg1;
- (id)upperHighlightView;
- (void)setUpperHighlightView:(id)arg1;
- (id)bottomHighlightView;
- (void)setBottomHighlightView:(id)arg1;
- (unsigned long long)positionType;
- (unsigned long long)contentType;
- (void)setContentType:(unsigned long long)arg1;
- (id)tailView;
- (void)setTailView:(id)arg1;
- (id)longPressGes;
- (void)setLongPressGes:(id)arg1;
- (BOOL)animatedForAdsorbToWindow;
- (void)setAnimatedForAdsorbToWindow:(BOOL)arg1;
- (double)animateDurationForAdsorbToWindow;
- (void)setAnimateDurationForAdsorbToWindow:(double)arg1;
- (unsigned long long)sizeChangedAnimAnchorPoint;
- (void)setSizeChangedAnimAnchorPoint:(unsigned long long)arg1;
- (BOOL)hasEverMoved;
- (void)setHasEverMoved:(BOOL)arg1;
- (id)originMoveContext;
- (void)setOriginMoveContext:(id)arg1;
- (long long)animationSerial;
- (void)setAnimationSerial:(long long)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (CGRect)targetFrame;
- (void)setTargetFrame:(CGRect)arg1;
- (CGRect)originalFrame;
- (void)setOriginalFrame:(CGRect)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (id)unfoldButton;
- (void)setUnfoldButton:(id)arg1;
- (BOOL)useTightStickType;
- (void)setUseTightStickType:(BOOL)arg1;
- (BOOL)isFoldEnabled;
- (void)setIsFoldEnabled:(BOOL)arg1;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (id)blurMaskView;
- (void)setBlurMaskView:(id)arg1;
- (CGSize)outerContentSize;
- (void)setOuterContentSize:(CGSize)arg1;
- (BOOL)enablePIPShrink;
- (void)setEnablePIPShrink:(BOOL)arg1;
- (void).cxx_destruct;
@end
