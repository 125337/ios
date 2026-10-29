@interface MJPlaybackViewModel : NSObject
{
    BOOL _isPlaying; // +0x8
    id <MJPlaybackViewModelDelegate> _delegate; // +0x10
    UBDictionarySignal * _videoFrameTimeDidChangeSignal; // +0x18
    UBDictionarySignal * _playbackTimeDidChangeSignal; // +0x20
    UBValueSignal * _skimTimeDidChangeSignal; // +0x28
    UBBooleanSignal * _isPlayingDidChangeSignal; // +0x30
    OMCTimeline * _timeline; // +0x38
    OMCPlaybackSession * _playbackSession; // +0x40
    MJPlaybackConfiguration * _playbackConfiguration; // +0x48
    WCAudioModuleProxy * _auidoModuleProxy; // +0x50
    struct _lastSkimTime; // +0x58
    struct _lastClipSkimTime; // +0x70
}
- (id)initWithTimeline:(id)arg1;
- (void)dealloc;
- (struct)playbackTime;
- (struct)lastVideoFrameTime;
- (struct)mediaTimeRange;
- (BOOL)bindRenderView:(id)arg1 error:(id *)arg2;
- (void)unbindRenderView;
- (void)openWithPreviewTime:(struct)arg1 completionHandler:(id /* block */)arg2;
- (void)closeWithCompletionHandler:(id /* block */)arg1;
- (void)closeWithDeactiveAudioModule:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (void)startPlayingWithCompletionHandler:(id /* block */)arg1;
- (void)startPlayingWithTime:(struct)arg1 completionHandler:(id /* block */)arg2;
- (void)startPlayingWithTimeRange:(struct)arg1 initialStartTime:(struct)arg2 playbackLoopCount:(int)arg3 isAudioEnabled:(BOOL)arg4 completionHandler:(id /* block */)arg5;
- (void)stopPlaying;
- (void)stopPlayingWithCompletionHandler:(id /* block */)arg1;
- (void)stopPlayingAndBeginClipSkimmingWithVisualClipSegmentVM:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)beginClipSkimmingWithVisualClipSegmentVM:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)beginClipSkimmingWithVisualClipSegmentVM:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)endClipSkimming;
- (void)skimToProgress:(double)arg1;
- (void)skimToProgress:(double)arg1 forceUpdate:(BOOL)arg2;
- (void)skimToProgress:(double)arg1 forceUpdate:(BOOL)arg2 shouldNotDrop:(BOOL)arg3;
- (void)skimToTime:(struct)arg1;
- (void)skimToTime:(struct)arg1 forceUpdate:(BOOL)arg2;
- (void)skimToTime:(struct)arg1 forceUpdate:(BOOL)arg2 shouldNotDrop:(BOOL)arg3;
- (void)clipSkimToTime:(struct)arg1;
- (void)clipSkimToTime:(struct)arg1 forceUpdate:(BOOL)arg2;
- (void)commitUpdateWithPreviewTime:(struct)arg1 shouldForceUpdatePreview:(BOOL)arg2 isFullUpdate:(BOOL)arg3 completionHandler:(id /* block */)arg4;
- (void)skipRefreshNextVideoFrame;
- (void)temporaryUpdatePlaybackDuration:(struct)arg1;
- (void)beginTrackingSafeAreaWithSegmentID:(id)arg1 normalizedSafeRect:(CGRect)arg2 trackingHandler:(id /* block */)arg3;
- (void)endTrackingSafeArea;
- (void)addDecorationBoxesWithConfigs:(id)arg1;
- (void)removeAllDecorationBoxes;
- (void)_updateIsPlaying:(BOOL)arg1;
- (void)setLastSkimTime:(struct)arg1;
- (void)activeAudioModule;
- (void)deactiveAudioModule;
- (void)snapshotAtTime:(struct)arg1 completionHandler:(id /* block */)arg2;
- (void)enterClosedTimeRangeModeWithCompletionHandler:(id /* block */)arg1;
- (void)leaveClosedTimeRangeModeWithCompletionHandler:(id /* block */)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)videoFrameTimeDidChangeSignal;
- (id)playbackTimeDidChangeSignal;
- (id)skimTimeDidChangeSignal;
- (BOOL)isPlaying;
- (void)setIsPlaying:(BOOL)arg1;
- (id)isPlayingDidChangeSignal;
- (id)timeline;
- (id)playbackSession;
- (struct)lastSkimTime;
- (struct)lastClipSkimTime;
- (id)playbackConfiguration;
- (id)auidoModuleProxy;
- (void)setAuidoModuleProxy:(id)arg1;
- (void).cxx_destruct;
@end

