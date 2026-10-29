@interface MinimizeAbsorbFloatingView : UIView <MMWebImageViewDelegate, MoveWithTouchAlgorithmDelegate>
{
    BOOL _animatedForAdsorbToWindow; // +0x8
    BOOL _isOrientationChanged; // +0x9
    BOOL _hasEverMoved; // +0xa
    BOOL _isBorderless; // +0xb
    BOOL _useTightStickType; // +0xc
    BOOL _isFoldEnabled; // +0xd
    unsigned int _gestureAnimationType; // +0x10
    MoveWithTouchAlgorithm * _m_moveAlgorithm; // +0x18
    id <MinimizeAbsorbFloatingViewDelegate> _m_delegate; // +0x20
    NSArray * _taskList; // +0x28
    UIView * _circleContainerView; // +0x30
    NSMutableDictionary * _taskKey2IconViewCache; // +0x38
    NSString * _taskKeyInGestureInteraction; // +0x40
    NSMutableArray * _tmpUnvisibleTaskDataCopyList; // +0x48
    UIView * _maskLayerView; // +0x50
    UIView * _upperContainerView; // +0x58
    UIView * _outerContentContainerView; // +0x60
    UIView * _bottomContainerView; // +0x68
    UIView * _bottomContainerBGView; // +0x70
    MinimizeStateContainerView * _stateContainerView; // +0x78
    NSMutableArray * _iconViewList; // +0x80
    NSArray * _stateTaskList; // +0x88
    OuterContentInfo * _outerContentInfo; // +0x90
    UIView * _highlightMaskView; // +0x98
    UIView * _upperHighlightView; // +0xa0
    UIView * _bottomHighlightView; // +0xa8
    unsigned long long _positionType; // +0xb0
    unsigned long long _contentType; // +0xb8
    UIView * _tailView; // +0xc0
    UILongPressGestureRecognizer * _longPressGes; // +0xc8
    double _animateDurationForAdsorbToWindow; // +0xd0
    unsigned long long _sizeChangedAnimAnchorPoint; // +0xd8
    MinimizeTaskContainerMoveContext * _originMoveContext; // +0xe0
    long long _animationSerial; // +0xe8
    MMUIButton * _unfoldButton; // +0xf0
    UIView * _blurView; // +0xf8
    CGSize _outerContentSize; // +0x100
    UIEdgeInsets _touchInsets; // +0x110
}
- (BOOL)beginGestureToShow:(id)arg1 FinalTasksIfComplete:(id)arg2;
- (BOOL)updateGestureProgressToShow:(id)arg1 Progress:(double)arg2;
- (BOOL)endGestureToShow:(id)arg1 FinalBackgroundTasks:(id)arg2 IsComplete:(BOOL)arg3;
- (void)clearTmpData;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)didStatusBarOrientationChanged:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)setTransform:(CGAffineTransform)arg1;
- (void)setAlpha:(double)arg1;
- (void)setPositionType:(unsigned long long)arg1;
- (id)getMaskPath:(CGRect)arg1 WithPositionType:(unsigned long long)arg2 ContentType:(unsigned long long)arg3;
- (void)addIconToView:(id)arg1;
- (void)removeAllIconView;
- (BOOL)isBorderless;
- (void)updateShowingTaskList:(id)arg1 Animated:(BOOL)arg2 Duration:(double)arg3;
- (BOOL)isOuterContentAttached;
- (void)attachOuterContentView;
- (void)detachOuterContentView;
- (unsigned long long)filterSizeChangedAnimAnchorPoint:(id)arg1;
- (id)filterPositiveTaskList:(id)arg1;
- (id)filterPassiveTaskList:(id)arg1;
- (id)filterOuterContentInfo:(id)arg1;
- (void)setHighlight:(unsigned long long)arg1;
- (void)setCloseButtonShow:(BOOL)arg1 duration:(double)arg2;
- (id)getCurrentMaskPathConvertedToCurrentScreenCoordinates;
- (CGRect)getConvertedVisibleFrame:(id)arg1;
- (CGRect)getConvertedVisibleFrame:(id)arg1 toWindow:(id)arg2;
- (CGRect)getConvertedVisibleFrameWithOuterContentSize:(CGSize)arg1;
- (CGRect)getConvertedVisibleFrameWithoutContentView;
- (void)resetStateContainerView:(id)arg1 PositionType:(unsigned long long)arg2 ContentType:(unsigned long long)arg3;
- (void)animationSetStateContainerView:(id)arg1 Duration:(double)arg2 PositionType:(unsigned long long)arg3 ContentType:(unsigned long long)arg4;
- (void)animationUpdateToIconList:(id)arg1 NeedShowAddIcon:(BOOL)arg2 Duration:(double)arg3;
- (void)animateShowFor:(id)arg1 NeedDeleteTaskKeyList:(id)arg2 Duration:(double)arg3;
- (void)resetAllCacheImageViewLineLayer:(id)arg1;
- (void)animationUpdateAllTaskViewLayer:(id)arg1 DicTaskKey2MaskLayerPath:(id)arg2 Duration:(double)arg3;
- (void)animationUpdateFrameWithRemainIcon:(id)arg1 Duration:(double)arg2;
- (void)animationUpdateColorMaskAlphaWithKeyList:(id)arg1 Duration:(double)arg2 totalCount:(long long)arg3;
- (id)genNewTaskListLayerPath:(id)arg1 AllTaskKey2Frame:(id)arg2;
- (id)getDefaultRoundClipPathForIcon:(CGRect)arg1;
- (id)getDefaultClipPath:(CGRect)arg1 positionType:(unsigned long long)arg2 contentType:(unsigned long long)arg3;
- (id)getClipPath:(id)arg1 NextIconFrameVal:(id)arg2;
- (id)getClipPath:(id)arg1 NextView:(id)arg2;
- (id)getClipPath:(id)arg1 NextView:(id)arg2 NeedMerge:(BOOL)arg3;
- (double)getClockWiseAngleForPoint:(CGPoint)arg1 Center:(CGPoint)arg2;
- (void)addAnimationForSubLayers:(id)arg1 MaskLayerPath:(id)arg2 BorderLayerPath:(id)arg3 IconSize:(double)arg4 Duration:(double)arg5;
- (void)animateSubLayer:(id)arg1 ToPath:(id)arg2 Duration:(double)arg3;
- (void)compareOldIconListToNewTaskList:(id)arg1 RemainTaskKey2Frame:(id)arg2 NeedAddTaskKey2Frame:(id)arg3 NeedDeleteTaskKeyList:(id)arg4;
- (id)getIconViewAndResetSublayer:(id)arg1 Frame:(CGRect)arg2 TotalTaskCount:(unsigned long long)arg3;
- (BOOL)shouldUpdateLoopIconList:(id)arg1 TotalTaskCount:(unsigned long long)arg2;
- (void)updateOldIconViewLoopSwitching:(id)arg1 TotalTaskCount:(unsigned long long)arg2;
- (id)genTaskLoopAnimateIcons:(id)arg1 TotalTaskCount:(unsigned long long)arg2;
- (id)genWebImageView:(id)arg1;
- (id)getTaskKey2IconFrame:(id)arg1;
- (void)resetIconList:(id)arg1;
- (void)updateAllIconColorMaskVisibleWithTaskList:(id)arg1;
- (void)updateIconColorMaskVisible:(id)arg1 withTaskCount:(long long)arg2;
- (id)getNeedRemoveTaskKeyList:(id)arg1;
- (void)saveTmpUnvisibleTaskOrDeleteCacheView:(id)arg1;
- (void)addIconList:(id)arg1;
- (id)getCenterCoordinateArray:(unsigned long long)arg1 IconSize:(double *)arg2;
- (id)getTask:(id)arg1 TaskList:(id)arg2;
- (id)getTaskKey2IconUrl:(id)arg1;
- (void)adsorbToWindow:(BOOL)arg1 duration:(double)arg2;
- (void)adsorbToWindow:(BOOL)arg1 duration:(double)arg2 shouldKeepFold:(BOOL)arg3;
- (UIEdgeInsets)realSafeAreaInsetsOfWindow;
- (UIEdgeInsets)realSafeAreaInsets;
- (UIEdgeInsets)adjuestRealSafeAreaInsets:(UIEdgeInsets)arg1;
- (BOOL)hasOuterContent:(unsigned long long)arg1;
- (BOOL)hasStateTask:(unsigned long long)arg1;
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
- (void)updateCircleContainerViewFrameWithLayoutParam:(id)arg1;
- (void)updateStateContainerViewFrameWithLayoutParam:(id)arg1;
- (void)updateViewsWhenMovingToPoint:(CGPoint)arg1;
- (void)animationToValueForViewsWhenMoveEndsWithFrame:(CGRect)arg1;
- (void)adjustAfterAdsorbToWindowWithNewFrame:(CGRect)arg1;
- (void)changePositionType:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)changeContentType:(unsigned long long)arg1 animated:(BOOL)arg2 duration:(double)arg3 outerContentSize:(CGSize)arg4 stateList:(id)arg5;
- (void)updateAnimationAnchorWhenContentTypeChangeFromOldContentType:(unsigned long long)arg1 toNewContentType:(unsigned long long)arg2;
- (void)updateWhenSafeAreaChanged;
- (unsigned long long)decideTargetPositionTypeForFrame:(CGRect)arg1;
- (void)updateAllViewWithLayoutParam:(id)arg1 stateList:(id)arg2;
- (unsigned long long)calcContentTypeWithMainList:(id)arg1 stateList:(id)arg2 outerContentInfo:(id)arg3;
- (CGRect)calcVisibleFrameWithLayoutParam:(id)arg1;
- (CGSize)calcVisibleSizeWithLayoutParam:(id)arg1;
- (CGRect)calcFrameForOuterContentContainerViewWithLayoutParam:(id)arg1;
- (double)calcOriginXForOuterContentContainerViewWithPositionType:(unsigned long long)arg1 visibleSize:(CGSize)arg2 andOuterContentSize:(CGSize)arg3;
- (CGRect)calcFrameForBottomContainerViewWithLayoutParam:(id)arg1;
- (CGRect)calcFrameForBottomContainerViewWithLayoutParam:(id)arg1 visbleSize:(CGSize)arg2;
- (CGRect)calcFrameForBottomHighlightViewWithLayoutParam:(id)arg1;
- (CGRect)calcFrameForCircleContainerViewWithLayoutParam:(id)arg1 Scale:(double)arg2;
- (CGRect)calcFrameForStateContainerViewWithLayoutParam:(id)arg1 parentSize:(CGSize)arg2;
- (double)calcMoveAlgorithmOffsetXWithLayoutParam:(id)arg1;
- (CGRect)calcShadowImageViewFrameWithLayoutParam:(id)arg1 Image:(id)arg2;
- (CGRect)calcShadowImageViewFrameForOuterContentWithLayoutParam:(id)arg1 Image:(id)arg2;
- (id)calcShadowImageWithLayoutParam:(id)arg1;
- (void)onLoadImageOK:(id)arg1;
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
- (id)m_moveAlgorithm;
- (void)setM_moveAlgorithm:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)taskList;
- (void)setTaskList:(id)arg1;
- (id)circleContainerView;
- (void)setCircleContainerView:(id)arg1;
- (id)taskKey2IconViewCache;
- (void)setTaskKey2IconViewCache:(id)arg1;
- (id)taskKeyInGestureInteraction;
- (void)setTaskKeyInGestureInteraction:(id)arg1;
- (unsigned int)gestureAnimationType;
- (void)setGestureAnimationType:(unsigned int)arg1;
- (UIEdgeInsets)touchInsets;
- (void)setTouchInsets:(UIEdgeInsets)arg1;
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
- (id)stateContainerView;
- (void)setStateContainerView:(id)arg1;
- (id)iconViewList;
- (void)setIconViewList:(id)arg1;
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
- (BOOL)isOrientationChanged;
- (void)setIsOrientationChanged:(BOOL)arg1;
- (unsigned long long)sizeChangedAnimAnchorPoint;
- (void)setSizeChangedAnimAnchorPoint:(unsigned long long)arg1;
- (BOOL)hasEverMoved;
- (void)setHasEverMoved:(BOOL)arg1;
- (id)originMoveContext;
- (void)setOriginMoveContext:(id)arg1;
- (long long)animationSerial;
- (void)setAnimationSerial:(long long)arg1;
- (id)unfoldButton;
- (void)setUnfoldButton:(id)arg1;
- (void)setIsBorderless:(BOOL)arg1;
- (BOOL)useTightStickType;
- (void)setUseTightStickType:(BOOL)arg1;
- (BOOL)isFoldEnabled;
- (void)setIsFoldEnabled:(BOOL)arg1;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (CGSize)outerContentSize;
- (void)setOuterContentSize:(CGSize)arg1;
- (void).cxx_destruct;
@end

