@interface MJTemplateMoviePlayer : MJTemplateSession <OMJMoviePlayerDelegate>
{
    BOOL _isAudioEnabled; // +0x8
    int _loopCount; // +0xc
    NSString * _clipBundleID; // +0x10
    unsigned long long _playStatus; // +0x18
    OMJMoviePlayer * _maasMoviePlayer; // +0x20
    struct _startTime; // +0x28
    struct _lastStoppedTime; // +0x40
    struct _timeRange; // +0x58
}
- (id)initWithClipBundleID:(id)arg1;
- (id)maasRenderView;
- (BOOL)createMaasSession;
- (BOOL)_createMaasMoviePlayer;
- (void)cleanUpMaasSessionWithCompletionHandler:(id /* block */)arg1;
- (void)_tearDownMaasPlayerWithCompletionHandler:(id /* block */)arg1;
- (void)_cleanUpMaasPlayerWithCompletionHandler:(id /* block */)arg1;
- (void)startCreationWithProgressHandler:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)_startCreationWithClipBundleID:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)startPlaybackCompletionHandler:(id /* block */)arg1;
- (void)didStartPlayback;
- (void)_startPlaybackCompletionHandler:(id /* block */)arg1;
- (void)setTimeRange:(struct)arg1 startTime:(struct)arg2 loopCount:(int)arg3 isAudioEnabled:(BOOL)arg4;
- (void)_setTimeRange:(struct)arg1 startTime:(struct)arg2 loopCount:(int)arg3 isAudioEnabled:(BOOL)arg4;
- (void)startPlayingWithCompletionHandler:(id /* block */)arg1;
- (void)_startPlayingWithCompletionHandler:(id /* block */)arg1;
- (void)didStartPlaying;
- (void)stopPlayingWithCompletionHandler:(id /* block */)arg1;
- (void)_stopPlayingWithCompletionHandler:(id /* block */)arg1;
- (void)willStopPlaying;
- (void)didStopPlaying;
- (void)shutDownPlaybackWithCompletionHandler:(id /* block */)arg1;
- (void)_shutDownPlaybackWithCompletionHandler:(id /* block */)arg1;
- (void)didShutDownPlayback;
- (void)_didChangePlayStatusTo:(unsigned long long)arg1;
- (struct)currentPlaybackTime;
- (void)playbackDidFinishInMoviePlayer:(id)arg1;
- (void)moviePlayer:(id)arg1 playbackTimeDidChange:(struct)arg2 mediaTimeRange:(struct)arg3;
- (void)setupNotification;
- (void)onApplicationWillResignActive;
- (void)onApplicationDidBecomeActive;
- (id)clipBundleID;
- (unsigned long long)playStatus;
- (id)maasMoviePlayer;
- (void)setMaasMoviePlayer:(id)arg1;
- (struct)timeRange;
- (void)setTimeRange:(struct)arg1;
- (struct)startTime;
- (void)setStartTime:(struct)arg1;
- (int)loopCount;
- (void)setLoopCount:(int)arg1;
- (BOOL)isAudioEnabled;
- (void)setIsAudioEnabled:(BOOL)arg1;
- (struct)lastStoppedTime;
- (void)setLastStoppedTime:(struct)arg1;
- (void).cxx_destruct;
@end

