@interface WCThumbPlayer : WCCorePlayer <WCTPPlayerDelegate>
{
    BOOL _isNoCallbackSeek; // +0x8
    BOOL _isLocalServerReinit; // +0x9
    BOOL _isPauseBuffering; // +0xa
    WCTPPlayer * _player; // +0x10
    unsigned long long _seekStartTime; // +0x18
    TPVideoFrameBuffer * _currentVideoFrameBuffer; // +0x20
    _opaque_pthread_rwlock_t _pixelBufferLock; // +0x28
}
- (double)currentTime;
- (double)playablePos;
- (double)duration;
- (float)playbackRate;
- (float)audioBitrate;
- (float)videoBitrate;
- (void)setVolume:(double)arg1;
- (double)getVolume;
- (long long)videoDecodeFrmCnt;
- (long long)videoRenderFrmCnt;
- (long long)videoFrameRate;
- (CGSize)presentationSize;
- (CGAffineTransform)preferredTransform;
- (void)setPlaybackRate:(float)arg1;
- (void)setPlayerToMuted:(BOOL)arg1;
- (BOOL)muted;
- (void)setPlayerLoop:(BOOL)arg1;
- (void)setAllowsExternalPlayback:(BOOL)arg1;
- (void)setCallbackVideoFrameEnable:(BOOL)arg1;
- (BOOL)isEnableCallbackVideoFrame;
- (__CVBuffer *)getCurrentPixelBuffer;
- (id)getPlayerItemVideoOutput;
- (void)setVideoRenderInBackgroundEnable:(BOOL)arg1;
- (void)prepareAsync;
- (void)start;
- (void)stop;
- (void)pause;
- (void)releasePlayer;
- (void)pauseBuffering;
- (void)resumeBuffering;
- (void)seekNoCallbackToTime:(double)arg1;
- (void)seekToTime:(double)arg1 isAccurate:(BOOL)arg2;
- (void)seekToTime:(double)arg1 isAccurate:(BOOL)arg2 isNoCallbackSeek:(BOOL)arg3;
- (id)syncCaptureVideo;
- (void)captureVideoWithFinishBlock:(id /* block */)arg1;
- (void)switchResourceloaderDelegate:(id)arg1 resourceUrl:(id)arg2 resourceType:(long long)arg3 swithMode:(long long)arg4;
- (long long)getAudioSpeedProcessorType;
- (void)initPlayer;
- (void)setInfoWithPlayer:(id)arg1 args:(id)arg2 resourceloader:(id)arg3;
- (void)setPlayerContentMode:(long long)arg1;
- (void)setPlayerStartPos:(float)arg1;
- (void)addPeriodicTimeObserver;
- (void)removeTimeObserver;
- (void)onPlayerReinitWithReason:(long long)arg1;
- (void)onPlayerFirstAudioDecoderStart;
- (void)onPlayerFirstVideoDecoderStart;
- (void)onPlayerGetVideoDecoderType:(long long)arg1;
- (void)onPlayerGetAudioDecoderType:(long long)arg1;
- (void)onFirstAudioFrameRendered;
- (void)onFirstVideoFrameRendered;
- (void)onFirstVideoPacketRead;
- (void)onPlayerStateReady;
- (void)onPlayerDidPlayToEndTime;
- (void)onPlayerBufferingStart;
- (void)onPlayerBufferingEnd;
- (void)onPlayerPauseContinueBufferingCompleted;
- (void)onPlayerCurrentLoopEnd;
- (void)onPlayerCurrentLoopStart;
- (void)onPlayerErrorWithType:(long long)arg1 errorCode:(long long)arg2;
- (unsigned long long)onPlayerErrorHappend:(long long)arg1 errorCode:(long long)arg2;
- (void)onPlayerVideoFrameOut:(id)arg1;
- (void)onPlayerAudioFrameOut:(id)arg1;
- (void)onSwitchDataSourceCompeleted;
- (void)onVideoSizeChange:(CGSize)arg1;
- (void)onPlayerGetSeiInfo:(id)arg1;
- (void)onPlayerSeekComplete;
- (void)onVideoDecoderPacketNoReceiveFrameWithDesc:(id)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (unsigned long long)seekStartTime;
- (void)setSeekStartTime:(unsigned long long)arg1;
- (BOOL)isNoCallbackSeek;
- (void)setIsNoCallbackSeek:(BOOL)arg1;
- (id)currentVideoFrameBuffer;
- (void)setCurrentVideoFrameBuffer:(id)arg1;
- (_opaque_pthread_rwlock_t)pixelBufferLock;
- (void)setPixelBufferLock:(_opaque_pthread_rwlock_t)arg1;
- (BOOL)isLocalServerReinit;
- (void)setIsLocalServerReinit:(BOOL)arg1;
- (BOOL)isPauseBuffering;
- (void)setIsPauseBuffering:(BOOL)arg1;
- (void).cxx_destruct;
@end

