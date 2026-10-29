@interface WxpayFrameCadence : NSObject
{
    BOOL _shouldRun; // +0x8
    BOOL _foreground; // +0x9
    BOOL _animationActive; // +0xa
    BOOL _interacting; // +0xb
    BOOL _nativeWakePending; // +0xc
    BOOL _followUp; // +0xd
    BOOL _pendingWakeWhileBackground; // +0xe
    BOOL _insideVSync; // +0xf
    unsigned long long _lease; // +0x10
    unsigned long long _idleStreak; // +0x18
    unsigned long long _wakeCount; // +0x20
    unsigned long long _idlePauseCount; // +0x28
    unsigned long long _vsyncCount; // +0x30
}
- (id)init;
- (BOOL)shouldRun;
- (BOOL)foreground;
- (BOOL)animationActive;
- (BOOL)interacting;
- (void)setInteracting:(BOOL)arg1;
- (unsigned long long)wakeCount;
- (unsigned long long)idlePauseCount;
- (unsigned long long)vsyncCount;
- (unsigned long long)animationHandoffLeaseFrames;
- (void)requestWake;
- (void)setAnimationActive:(BOOL)arg1;
- (void)pauseForBackground;
- (void)resumeFromBackground;
- (void)onVSyncAccepted:(BOOL)arg1;
@end
