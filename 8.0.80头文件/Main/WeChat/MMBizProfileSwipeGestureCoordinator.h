@interface MMBizProfileSwipeGestureCoordinator : NSObject <UIGestureRecognizerDelegate>
{
    BOOL _longPressed; // +0x8
    BOOL _isAnimating; // +0x9
    BOOL _savedPopGestureEnabled; // +0xa
    BOOL _hasSavedPopGestureState; // +0xb
    id <MMBizProfileSwipeGestureCoordinatorDelegate> _delegate; // +0x10
    UIViewController * _hostViewController; // +0x18
    UIPanGestureRecognizer * _pushPanGesture; // +0x20
    UILongPressGestureRecognizer * _touchDownGesture; // +0x28
    UILongPressGestureRecognizer * _longPressGesture; // +0x30
    UIViewController * _destinationViewController; // +0x38
    UIView * _maskView; // +0x40
    UIView * _parallaxContentView; // +0x48
    double _takeoverStartTranslationX; // +0x50
    id <UIGestureRecognizerDelegate> _savedPopGestureDelegate; // +0x58
}
- (id)initWithHostViewController:(id)arg1;
- (void)installGesture;
- (BOOL)isSwipeTransitionInProgress;
- (void)handlePushPanGesture:(id)arg1;
- (void)__tryBeginTransitionIfTakeoverWithGesture:(id)arg1;
- (void)handleTouchDownGesture:(id)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (void)__beginTransition;
- (void)__followTransitionWithGesture:(id)arg1;
- (void)__settleTransitionWithGesture:(id)arg1;
- (void)__animateToComplete:(BOOL)arg1;
- (void)__cleanupAndForwardComplete:(BOOL)arg1;
- (void)__saveHostPopGestureState;
- (void)__restoreHostPopGestureState;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)hostViewController;
- (void)setHostViewController:(id)arg1;
- (id)pushPanGesture;
- (void)setPushPanGesture:(id)arg1;
- (id)touchDownGesture;
- (void)setTouchDownGesture:(id)arg1;
- (id)longPressGesture;
- (void)setLongPressGesture:(id)arg1;
- (BOOL)longPressed;
- (void)setLongPressed:(BOOL)arg1;
- (id)destinationViewController;
- (void)setDestinationViewController:(id)arg1;
- (id)maskView;
- (void)setMaskView:(id)arg1;
- (id)parallaxContentView;
- (void)setParallaxContentView:(id)arg1;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (double)takeoverStartTranslationX;
- (void)setTakeoverStartTranslationX:(double)arg1;
- (id)savedPopGestureDelegate;
- (void)setSavedPopGestureDelegate:(id)arg1;
- (BOOL)savedPopGestureEnabled;
- (void)setSavedPopGestureEnabled:(BOOL)arg1;
- (BOOL)hasSavedPopGestureState;
- (void)setHasSavedPopGestureState:(BOOL)arg1;
- (void).cxx_destruct;
@end
