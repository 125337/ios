@interface TXCIOSSystemLoopBackRecorder : NSObject <TXReplayKitAppDelegate>
{
    NSString * _replaykitObserverKey; // +0x8
    void * _recorder; // +0x10
}
- (id)initWithRecorder:(void *)arg1;
- (void)start;
- (void)stop;
- (void)onReceiveAudioPacket:(const void *)arg1;
- (void)onBroadcastExtStarted;
- (void)onBroadcastExtFinished;
- (void)onBroadcastExtPaused;
- (void)onBroadcastExtResumed;
- (id)replaykitObserverKey;
- (void)setReplaykitObserverKey:(id)arg1;
- (void *)recorder;
- (void)setRecorder:(void *)arg1;
- (void).cxx_destruct;
@end

