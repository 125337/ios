@interface TXReplayKitAppDelegateAdapter : NSObject <TXReplayKitAppDelegate>
{
    weak_ptr<liteav::audio::AudioLoopbackRecorder> _recorder; // +0x8
}
- (id)initWithRecorder:(weak_ptr<liteav::audio::AudioLoopbackRecorder>)arg1;
- (void)onReceiveAudioPacket:(const void *)arg1;
- (void)onBroadcastExtFinished;
- (void)onBroadcastExtPaused;
- (void)onBroadcastExtResumed;
- (void)onBroadcastExtStarted;
- (void)onConnected;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
