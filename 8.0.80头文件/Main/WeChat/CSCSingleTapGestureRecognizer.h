@interface CSCSingleTapGestureRecognizer : UITapGestureRecognizer
{
    BOOL _waitingForPossibleDoubleTap; // +0x8
    double _singleTapDelay; // +0x10
    NSTimer * _delayTimer; // +0x18
}
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)setSingleTapDelay:(double)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (void)cancelWaiting;
- (BOOL)canBePreventedByGestureRecognizer:(id)arg1;
- (void)dealloc;
- (double)singleTapDelay;
- (BOOL)waitingForPossibleDoubleTap;
- (void)setWaitingForPossibleDoubleTap:(BOOL)arg1;
- (id)delayTimer;
- (void)setDelayTimer:(id)arg1;
- (void).cxx_destruct;
@end
