@interface TXCVideoReportBase : TXCVideoBindableObject
{
    BOOL _receivedFirstFrame; // +0x8
    id /* block */ _logger; // +0x10
    long long _lastTicks; // +0x18
}
- (id)init;
- (void)processVideoFrame:(id)arg1 onComplete:(id /* block */)arg2;
- (void)reset;
- (void)onTickLog:(long long)arg1 inDuration:(long long)arg2;
- (void)onProcessFrame:(id)arg1 isFirstFrame:(BOOL)arg2;
- (BOOL)receivedFirstFrame;
- (void)setReceivedFirstFrame:(BOOL)arg1;
- (id /* block */)logger;
- (void)setLogger:(id /* block */)arg1;
- (long long)lastTicks;
- (void)setLastTicks:(long long)arg1;
- (void).cxx_destruct;
@end

