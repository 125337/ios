@interface WCPipContentSourcePlayer_SampleBuffer : WCPipContentSourcePlayer <AVPictureInPictureSampleBufferPlaybackDelegate>
{
    BOOL _isPlaying; // +0x8
    BOOL _isCompleted; // +0x9
    int _pipControllerPlayState; // +0xc
    WCPlayerPipDisplayLayerView * _displayLayerView; // +0x10
    double _duration; // +0x18
    double _seekingTime; // +0x20
    WCPipContentSourcePlaybackDelegateObj * _playbackDelegateObj; // +0x28
    id /* block */ _seekCompletionHandler; // +0x30
    CGSize _videoSize; // +0x38
}
- (id)initWithDelegate:(id)arg1 playArgs:(id)arg2 playbackInfo:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)dealloc;
- (void)initDisplayLayerView;
- (void)unregisterPipResourcre;
- (void)occupyAudioModuleSucc:(BOOL)arg1;
- (void)createPipResouce;
- (void)cleanResourceWhenPipNotSuccStart;
- (BOOL)isEnqueueSampleBufferType;
- (void)setPlayerVideoGravityWithPlayerContentMode:(long long)arg1;
- (void)play;
- (void)pause:(BOOL)arg1;
- (void)seekTo:(double)arg1;
- (void)onStartBuffering;
- (void)onBufferingComplete;
- (void)setRate:(double)arg1;
- (void)setLoopBack:(BOOL)arg1;
- (void)onPlayerEnterErrorState;
- (void)onPlayerDidPlayToEnd;
- (void)onPlayerSeekComplete:(double)arg1;
- (void)onPlayCallback:(double)arg1;
- (void)onRenderedOneFrame:(id)arg1;
- (BOOL)isCurrentPlayingState;
- (void)pictureInPictureController:(id)arg1 setPlaying:(BOOL)arg2;
- (BOOL)pictureInPictureControllerIsPlaybackPaused:(id)arg1;
- (struct)pictureInPictureControllerTimeRangeForPlayback:(id)arg1;
- (void)pictureInPictureController:(id)arg1 didTransitionToRenderSize:(struct)arg2;
- (void)pictureInPictureController:(id)arg1 skipByInterval:(struct)arg2 completionHandler:(id /* block */)arg3;
- (id)displayLayerView;
- (void)setDisplayLayerView:(id)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (CGSize)videoSize;
- (void)setVideoSize:(CGSize)arg1;
- (double)seekingTime;
- (void)setSeekingTime:(double)arg1;
- (BOOL)isPlaying;
- (void)setIsPlaying:(BOOL)arg1;
- (BOOL)isCompleted;
- (void)setIsCompleted:(BOOL)arg1;
- (int)pipControllerPlayState;
- (void)setPipControllerPlayState:(int)arg1;
- (id)playbackDelegateObj;
- (void)setPlaybackDelegateObj:(id)arg1;
- (id /* block */)seekCompletionHandler;
- (void)setSeekCompletionHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
