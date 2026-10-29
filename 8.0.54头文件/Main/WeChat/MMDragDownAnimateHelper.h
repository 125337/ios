@interface MMDragDownAnimateHelper : NSObject <UIGestureRecognizerDelegate>
{
    BOOL _disableDragDown; // +0x8
    BOOL _isAtDragDownState; // +0x9
    BOOL _enabled; // +0xa
    BOOL _hasTriggerDragShock; // +0xb
    double _hoverTargetOffset; // +0x10
    double _expandedHeight; // +0x18
    UITableView * _frontTableView; // +0x20
    UIView * _frontContainerView; // +0x28
    double _frontViewTop; // +0x30
    NSDate * _dragStartTime; // +0x38
    double _lastMovement; // +0x40
    double _beginTouchPosY; // +0x48
    double _lastTouchPosY; // +0x50
    double _frontViewY; // +0x58
    double _currentDragProgress; // +0x60
    double _currentAlpha; // +0x68
    UIPanGestureRecognizer * _dragPanGesture; // +0x70
    id /* block */ _enterHoverAnimation; // +0x78
    id /* block */ _enterHoverCompletion; // +0x80
    id /* block */ _exitHoverPreparation; // +0x88
    id /* block */ _exitHoverAnimation; // +0x90
    id /* block */ _exitHoverCompletion; // +0x98
    CADisplayLink * _dragAnimationLink; // +0xa0
    MMDragDisplayLinkContext * _dragAnimationContext; // +0xa8
    unsigned long long _animationType; // +0xb0
    double _timestamp; // +0xb8
    double _animationCurrentTime; // +0xc0
}
- (id)initWithFrontContainerView:(id)arg1 frontInitialTop:(double)arg2 frontTableView:(id)arg3;
- (void)requireGestureRecognizerToFail:(id)arg1;
- (void)setupUI;
- (void)setDisableHover:(BOOL)arg1;
- (double)currentDragDownProgress;
- (void)setEnterDragDownAnimation:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)setExitDragDownAnimation:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)setExitDragDownPreparation:(id /* block */)arg1;
- (void)onBeginDragging;
- (void)onDragDownProgressChange:(double)arg1;
- (void)onInitUI;
- (void)onWillEnterDragDownState;
- (void)onDidEnterDragDownState;
- (void)onWillExitDragDownState;
- (void)onDidExitDragDownState;
- (void)processFrontViewGesture:(id)arg1;
- (void)handlePanGestureAtHoverEnable:(id)arg1;
- (void)handlePanGestureAtHoverDisable:(id)arg1;
- (void)handleAlphaAnimateWithFrontViewTopOffset:(double)arg1;
- (void)resetFrontViewOffsetAnimated:(BOOL)arg1;
- (double)progressForCurrentOffset:(double)arg1;
- (void)setCurrentDragProgress:(double)arg1;
- (BOOL)canTrigerAtPositionY:(double)arg1;
- (void)enterDragDownState:(BOOL)arg1;
- (void)exitDragDownState:(BOOL)arg1;
- (void)lightShock;
- (id)dragAnimationContext;
- (void)invaliateDragAnimation:(unsigned long long)arg1;
- (void)handleDragDownAnimation;
- (void)enterDragTransition:(double)arg1;
- (void)enterDragCompletion;
- (void)exitDragTransition:(double)arg1;
- (void)exitDragCompletion;
- (void)resetDragTransition:(double)arg1;
- (void)resetDragCompletion;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)disableDragDown;
- (void)setDisableDragDown:(BOOL)arg1;
- (double)hoverTargetOffset;
- (void)setHoverTargetOffset:(double)arg1;
- (BOOL)isAtDragDownState;
- (void)setIsAtDragDownState:(BOOL)arg1;
- (double)expandedHeight;
- (void)setExpandedHeight:(double)arg1;
- (id)frontTableView;
- (void)setFrontTableView:(id)arg1;
- (id)frontContainerView;
- (void)setFrontContainerView:(id)arg1;
- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)arg1;
- (double)frontViewTop;
- (void)setFrontViewTop:(double)arg1;
- (id)dragStartTime;
- (void)setDragStartTime:(id)arg1;
- (double)lastMovement;
- (void)setLastMovement:(double)arg1;
- (double)beginTouchPosY;
- (void)setBeginTouchPosY:(double)arg1;
- (double)lastTouchPosY;
- (void)setLastTouchPosY:(double)arg1;
- (double)frontViewY;
- (void)setFrontViewY:(double)arg1;
- (BOOL)hasTriggerDragShock;
- (void)setHasTriggerDragShock:(BOOL)arg1;
- (double)currentDragProgress;
- (double)currentAlpha;
- (void)setCurrentAlpha:(double)arg1;
- (id)dragPanGesture;
- (void)setDragPanGesture:(id)arg1;
- (id /* block */)enterHoverAnimation;
- (void)setEnterHoverAnimation:(id /* block */)arg1;
- (id /* block */)enterHoverCompletion;
- (void)setEnterHoverCompletion:(id /* block */)arg1;
- (id /* block */)exitHoverPreparation;
- (void)setExitHoverPreparation:(id /* block */)arg1;
- (id /* block */)exitHoverAnimation;
- (void)setExitHoverAnimation:(id /* block */)arg1;
- (id /* block */)exitHoverCompletion;
- (void)setExitHoverCompletion:(id /* block */)arg1;
- (id)dragAnimationLink;
- (void)setDragAnimationLink:(id)arg1;
- (void)setDragAnimationContext:(id)arg1;
- (unsigned long long)animationType;
- (void)setAnimationType:(unsigned long long)arg1;
- (double)timestamp;
- (void)setTimestamp:(double)arg1;
- (double)animationCurrentTime;
- (void)setAnimationCurrentTime:(double)arg1;
- (void).cxx_destruct;
@end

