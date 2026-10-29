@interface CBTCoopV2InteractionReportGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate>
{
    BOOL _hostedByPlatformView; // +0x8
    BOOL _trackingCanceled; // +0x9
    BOOL _longPressReported; // +0xa
    id /* block */ _ordinaryClickHandler; // +0x10
    CBTCoopV2AsstBoardViewModel * _viewModel; // +0x18
    UITouch * _trackedTouch; // +0x20
    double _pressStartTime; // +0x28
    unsigned long long _trackingToken; // +0x30
    CGPoint _downWindowPosition; // +0x38
    CGPoint _latestLocalPosition; // +0x48
}
- (id)init;
- (void)setupViewModel:(id)arg1;
- (void)setupHostedByPlatformView:(BOOL)arg1;
- (BOOL)canPreventGestureRecognizer:(id)arg1;
- (BOOL)canBePreventedByGestureRecognizer:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (void)cancelCurrentTracking;
- (void)finishTracking;
- (void)clearTrackingState;
- (double)distanceFrom:(CGPoint)arg1 to:(CGPoint)arg2;
- (void)reportLongPressIfValid;
- (id)pointerKindForTouch:(id)arg1;
- (void)reportInteractionAtPosition:(CGPoint)arg1 touch:(id)arg2 longPress:(BOOL)arg3;
- (id /* block */)ordinaryClickHandler;
- (void)setOrdinaryClickHandler:(id /* block */)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (BOOL)hostedByPlatformView;
- (void)setHostedByPlatformView:(BOOL)arg1;
- (id)trackedTouch;
- (void)setTrackedTouch:(id)arg1;
- (CGPoint)downWindowPosition;
- (void)setDownWindowPosition:(CGPoint)arg1;
- (CGPoint)latestLocalPosition;
- (void)setLatestLocalPosition:(CGPoint)arg1;
- (double)pressStartTime;
- (void)setPressStartTime:(double)arg1;
- (BOOL)trackingCanceled;
- (void)setTrackingCanceled:(BOOL)arg1;
- (BOOL)longPressReported;
- (void)setLongPressReported:(BOOL)arg1;
- (unsigned long long)trackingToken;
- (void)setTrackingToken:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
