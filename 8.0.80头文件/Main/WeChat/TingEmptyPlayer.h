@interface TingEmptyPlayer : MMUserService <MMServiceProtocol>
{
    id /* block */ _pendingKeepAliveBlock; // +0x8
    NSDate * _playStartTime; // +0x10
    double _maxPlayDuration; // +0x18
    BOOL _backgroundAudioEnable; // +0x20
    BOOL _isPlaying; // +0x21
    AVPlayer * _audioPlayer; // +0x28
}
+ (id)shared;
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)onServiceEnterForeground;
- (void)dealloc;
- (void)removeObserver;
- (void)startKeepAliveAudio;
- (void)_startKeepAliveAudioImmediately;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)stopKeepAliveAudio;
- (void)stopKeepAliveAudio:(BOOL)arg1;
- (void)commReport:(unsigned int)arg1;
- (BOOL)openKeepAliveAudio;
- (id)audioPlayer;
- (BOOL)isPlaying;
- (void).cxx_destruct;
@end
