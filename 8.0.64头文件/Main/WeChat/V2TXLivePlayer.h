@interface V2TXLivePlayer : NSObject <TXLivePictureInPictureControllerDelegate, V2TXLivePlayer>
{
    Player * _player; // +0x8
    shared_ptr<liteav::live::LiveContext> _live_context; // +0x10
    shared_ptr<liteav::live::V2TXLivePlayerObserverImpl> _client; // +0x20
    PlayerConfig _config; // +0x30
    BOOL _clearLastImage; // +0xc8
    TXLivePictureInPictureController * _pipController; // +0xd0
    id <V2TXLivePlayerObserver> _observer; // +0xd8
}
- (id)init;
- (void)dealloc;
- (void)setObserver:(id)arg1;
- (long long)setProperty:(id)arg1 value:(id)arg2;
- (long long)setRenderView:(id)arg1;
- (long long)setRenderRotation:(long long)arg1;
- (long long)setRenderFillMode:(long long)arg1;
- (long long)startLivePlay:(id)arg1;
- (long long)stopPlay;
- (int)isPlaying;
- (long long)pauseAudio;
- (long long)resumeAudio;
- (long long)pauseVideo;
- (long long)resumeVideo;
- (long long)setPlayoutVolume:(unsigned long long)arg1;
- (long long)setCacheParams:(double)arg1 maxTime:(double)arg2;
- (long long)switchStream:(id)arg1;
- (id)getStreamList;
- (long long)enableVolumeEvaluation:(unsigned long long)arg1;
- (long long)snapshot;
- (long long)enableObserveVideoFrame:(BOOL)arg1 pixelFormat:(long long)arg2 bufferType:(long long)arg3;
- (long long)enableObserveAudioFrame:(BOOL)arg1;
- (void)showDebugView:(BOOL)arg1;
- (long long)enableReceiveSeiMessage:(BOOL)arg1 payloadType:(int)arg2;
- (long long)enablePictureInPicture:(BOOL)arg1;
- (long long)startLocalRecording:(id)arg1;
- (void)stopLocalRecording;
- (void)onPictureInPictureStateUpdate:(id)arg1 state:(long long)arg2 message:(id)arg3 extraInfo:(id)arg4;
- (void)pictureInPictureController:(id)arg1 setPlaying:(BOOL)arg2;
- (BOOL)pictureInPictureControllerIsPlaybackPaused:(id)arg1;
- (void)onPictureInPictureControllerResumePlaybackState:(id)arg1;
- (id)pipController;
- (void)setPipController:(id)arg1;
- (id)observer;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
