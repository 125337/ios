@interface WCAdRepeatLimitedPagView : WCAdHangingPagView
{
    long long _playQuota; // +0x38
}
- (id)initWithFrame:(CGRect)arg1 pagInfo:(id)arg2 config:(id)arg3;
- (void)play;
- (void)stop;
- (void)resetPlayQuota;
- (void)onAnimationEnd:(id)arg1;
- (void)callSuperOnAnimationEnd:(id)arg1;
- (long long)playQuota;
- (void)setPlayQuota:(long long)arg1;
@end
