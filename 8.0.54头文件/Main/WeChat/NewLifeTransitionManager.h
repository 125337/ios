@interface NewLifeTransitionManager : NSObject <UIGestureRecognizerDelegate, MMUIViewControllerTransitionInfo, MMFlutterViewControllerAnimatedTransitioning>
{
    BOOL _enableScrollDownPop; // +0x8
    BOOL _isFromFlutter; // +0x9
    BOOL _cancelByIntercept; // +0xa
    BOOL _isInteractive; // +0xb
    int _taskId; // +0xc
    UIViewController * animatedTransitionRespondViewController; // +0x10
    NewLifePushTransition * _pushTransition; // +0x18
    NewLifePopTransition * _popTransition; // +0x20
    id /* block */ _pushStartCallback; // +0x28
    id /* block */ _pushEndCallback; // +0x30
    id /* block */ _popEndCallback; // +0x38
    id /* block */ _popTargetCallback; // +0x40
    double _startTime; // +0x48
    UIColor * _snapshotBackgroundColor; // +0x50
    double _edgeDragThreshold; // +0x58
    double _duration; // +0x60
    UIImage * _fromImage; // +0x68
    UIViewController * _viewController; // +0x70
    UIScreenEdgePanGestureRecognizer * _edgeGesture; // +0x78
    UIPanGestureRecognizer * _scrollGesure; // +0x80
    long long _operation; // +0x88
    UIPercentDrivenInteractiveTransition * _interactive; // +0x90
    CGPoint _viewOffset; // +0x98
    CGRect _fromFrame; // +0xa8
    CGRect _fromContentFrame; // +0xc8
    CGRect _toContentFrame; // +0xe8
}
+ (CGAffineTransform)getFromViewToTransform:(CGRect)arg1 toFrame:(CGRect)arg2 fromContentFrame:(CGRect)arg3 toContentFrame:(CGRect)arg4;
+ (CGAffineTransform)getToViewFromTransform:(CGRect)arg1 toFrame:(CGRect)arg2 fromContentFrame:(CGRect)arg3 toContentFrame:(CGRect)arg4;
- (id)init;
- (void)updateSnapshot:(id)arg1 frame:(CGRect)arg2 contentFrame:(CGRect)arg3;
- (void)setEnableScrollDownPop:(BOOL)arg1;
- (void)enableEdgeDrag:(BOOL)arg1;
- (void)setupViewController:(id)arg1;
- (BOOL)hasCustomPopTransition;
- (void)setupPushTransition;
- (void)setupPopTransition;
- (void)dealloc;
- (void)handleGesture:(id)arg1;
- (void)handleScrollGesture:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)popWithInteractive;
- (void)continuePopWithInteractive;
- (void)cancelPopWithInteractive;
- (BOOL)_endCardDragging:(CGPoint)arg1 velocity:(CGPoint)arg2 isFast:(BOOL)arg3;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (BOOL)updateOperation:(long long)arg1;
- (id)getInteractiveTransition;
- (id)animatedTransitionRespondViewController;
- (void)setAnimatedTransitionRespondViewController:(id)arg1;
- (id)pushTransition;
- (void)setPushTransition:(id)arg1;
- (id)popTransition;
- (void)setPopTransition:(id)arg1;
- (BOOL)enableScrollDownPop;
- (int)taskId;
- (void)setTaskId:(int)arg1;
- (CGPoint)viewOffset;
- (void)setViewOffset:(CGPoint)arg1;
- (id /* block */)pushStartCallback;
- (void)setPushStartCallback:(id /* block */)arg1;
- (id /* block */)pushEndCallback;
- (void)setPushEndCallback:(id /* block */)arg1;
- (id /* block */)popEndCallback;
- (void)setPopEndCallback:(id /* block */)arg1;
- (id /* block */)popTargetCallback;
- (void)setPopTargetCallback:(id /* block */)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (id)snapshotBackgroundColor;
- (void)setSnapshotBackgroundColor:(id)arg1;
- (BOOL)isFromFlutter;
- (void)setIsFromFlutter:(BOOL)arg1;
- (BOOL)cancelByIntercept;
- (void)setCancelByIntercept:(BOOL)arg1;
- (double)edgeDragThreshold;
- (void)setEdgeDragThreshold:(double)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (CGRect)fromFrame;
- (void)setFromFrame:(CGRect)arg1;
- (CGRect)fromContentFrame;
- (void)setFromContentFrame:(CGRect)arg1;
- (CGRect)toContentFrame;
- (void)setToContentFrame:(CGRect)arg1;
- (id)fromImage;
- (void)setFromImage:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)edgeGesture;
- (void)setEdgeGesture:(id)arg1;
- (id)scrollGesure;
- (void)setScrollGesure:(id)arg1;
- (long long)operation;
- (void)setOperation:(long long)arg1;
- (id)interactive;
- (void)setInteractive:(id)arg1;
- (BOOL)isInteractive;
- (void)setIsInteractive:(BOOL)arg1;
- (void).cxx_destruct;
@end

