@interface VoIPInvitationPendingDotAnimator : NSObject
{
    NSPointerArray * _dotsViews; // +0x8
    MMTimer * _dotTimer; // +0x10
    unsigned long long _frameIndex; // +0x18
}
- (void)dealloc;
- (void)attachOnHeadView:(id)arg1 headLength:(double)arg2;
- (void)reset;
- (void)stop;
- (id)dotsViews;
- (void)ensureTimerStarted;
- (void)onTick;
- (void)setDotsViews:(id)arg1;
- (id)dotTimer;
- (void)setDotTimer:(id)arg1;
- (unsigned long long)frameIndex;
- (void)setFrameIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
