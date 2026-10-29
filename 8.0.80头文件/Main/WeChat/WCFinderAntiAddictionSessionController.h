@interface WCFinderAntiAddictionSessionController : NSObject
{
    BOOL _sessionActive; // +0x8
    BOOL _triggerPending; // +0x9
    BOOL _triggeredDuringCurrentVisit; // +0xa
    id <WCFinderAntiAddictionSessionControllerDelegate> _delegate; // +0x10
    double _sessionStartUptime; // +0x18
    unsigned long long _sessionGeneration; // +0x20
    unsigned long long _feedRetryCount; // +0x28
    id /* block */ _triggerBlock; // +0x30
}
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
- (void)onApplicationDidEnterBackground;
- (void)onApplicationDidBecomeActive;
- (void)startSessionIfNeeded;
- (void)tryTriggerPendingIfNeeded;
- (void)endSessionWithReason:(unsigned long long)arg1;
- (void)scheduleTriggerAfterDelay:(double)arg1 generation:(unsigned long long)arg2;
- (void)tryTriggerForGeneration:(unsigned long long)arg1;
- (void)cancelTriggerBlock;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isSessionActive;
- (void)setSessionActive:(BOOL)arg1;
- (BOOL)hasPendingTrigger;
- (void)setTriggerPending:(BOOL)arg1;
- (BOOL)triggeredDuringCurrentVisit;
- (void)setTriggeredDuringCurrentVisit:(BOOL)arg1;
- (double)sessionStartUptime;
- (void)setSessionStartUptime:(double)arg1;
- (unsigned long long)sessionGeneration;
- (void)setSessionGeneration:(unsigned long long)arg1;
- (unsigned long long)feedRetryCount;
- (void)setFeedRetryCount:(unsigned long long)arg1;
- (id /* block */)triggerBlock;
- (void)setTriggerBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
