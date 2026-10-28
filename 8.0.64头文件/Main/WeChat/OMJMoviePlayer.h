@interface OMJMoviePlayer : NSObject
{
    BOOL _isAudioEnabled; // +0x8
    int _loopCount; // +0xc
    id <OMJMoviePlayerDelegate> _delegate; // +0x10
    shared_ptr<XMJMoviePlayer> _backingPlayer; // +0x18
    shared_ptr<XMJRenderView> _backingRenderView; // +0x28
    struct _startTime; // +0x38
    struct _timeRange; // +0x50
}
- (id)initWithBackingPlayer:(const void *)arg1;
- (id)renderView;
- (BOOL)connectToRenderView:(const void *)arg1 error:(id *)arg2;
- (void)setupPlaybackTimeDidChangeCallback;
- (void)setupPlaybackDidFinishCallback;
- (id)startMovieCreationWithClipBundleID:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)cancelMovieCreationWithCompletionHandler:(id /* block */)arg1;
- (id)teardownWithCompletionHandler:(id /* block */)arg1;
- (id)startupPlaybackWithCompletionHandler:(id /* block */)arg1;
- (id)shutdownPlaybackWithCompletionHandler:(id /* block */)arg1;
- (struct)currentPlaybackTime;
- (struct)playbackDuration;
- (void)setTimeRange:(struct)arg1 startTime:(struct)arg2 loopCount:(int)arg3 isAudioEnabled:(BOOL)arg4;
- (id)startPlayingWithCompletionHandler:(id /* block */)arg1;
- (id)stopPlayingWithCompletionHandler:(id /* block */)arg1;
- (id)skimTo:(struct)arg1;
- (void)snapshotAtTime:(struct)arg1 completionHandler:(id /* block */)arg2;
- (void)updateIsAudioMuted:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (struct)timeRange;
- (void)setTimeRange:(struct)arg1;
- (struct)startTime;
- (void)setStartTime:(struct)arg1;
- (int)loopCount;
- (void)setLoopCount:(int)arg1;
- (BOOL)isAudioEnabled;
- (void)setIsAudioEnabled:(BOOL)arg1;
- (shared_ptr<XMJMoviePlayer>)backingPlayer;
- (void)setBackingPlayer:(shared_ptr<XMJMoviePlayer>)arg1;
- (shared_ptr<XMJRenderView>)backingRenderView;
- (void)setBackingRenderView:(shared_ptr<XMJRenderView>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
