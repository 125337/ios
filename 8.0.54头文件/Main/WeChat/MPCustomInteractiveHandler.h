@interface MPCustomInteractiveHandler : NSObject
{
    BOOL _shouldForceCancel; // +0x8
    id <MPCustomInteractiveHandlerDelegate> _delegate; // +0x10
    UIPercentDrivenInteractiveTransition * _transitioning; // +0x18
}
- (id)initWithDelegate:(id)arg1;
- (id)interactiveTransitioning;
- (double)interactiveTransitioningProgress;
- (BOOL)isInteracting;
- (void)beginInateractive;
- (void)updateInateractiveProgress:(double)arg1 panGesture:(id)arg2;
- (void)endInateractiveWithComplete:(BOOL)arg1 panGesture:(id)arg2;
- (BOOL)shouldForceCancel;
- (void)setShouldForceCancel:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)transitioning;
- (void)setTransitioning:(id)arg1;
- (void).cxx_destruct;
@end

