@interface WCStatTimerHelper : MMObject
{
    BOOL _bHadAddObserver; // +0x8
    unsigned long long _u64ActiveTime; // +0x10
    unsigned long long _u64TotalTime; // +0x18
}
- (id)init;
- (void)dealloc;
- (void)tryAddObserver;
- (void)removeObserver;
- (void)reset;
- (void)resetActiveTime;
- (void)clearActiveTime;
- (void)resetTotalTime;
- (void)onWillEnterForeground;
- (void)onDidEnterBackground;
- (void)calculateTotalTime;
- (void)start;
- (unsigned long long)endAndReturnTimeInMs;
@end

