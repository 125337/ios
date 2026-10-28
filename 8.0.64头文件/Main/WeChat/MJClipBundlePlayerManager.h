@interface MJClipBundlePlayerManager : MMRootService <MMServiceProtocol>
{
    MJTemplateMoviePlayer * _playingPlayer; // +0x8
    UIView * _playingContainerView; // +0x10
    WCAudioModuleProxy * _auidoModuleProxy; // +0x18
}
- (void)startPlayingInView:(id)arg1 withClipBundleID:(id)arg2 startTime:(struct)arg3 timeRange:(struct)arg4 loopCount:(int)arg5 isMuted:(BOOL)arg6 completionHandler:(id /* block */)arg7;
- (void)pausePlayingWithClipBundleID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)onServiceInit;
- (void)stopPlayingWithClipBundleID:(id)arg1;
- (struct)currentPlaybackTimeWithClipBundleID:(id)arg1;
- (void)_stopPlayer:(id)arg1;
- (void)_movePlayer:(id)arg1 toView:(id)arg2;
- (void)skimToTime:(struct)arg1 withClipBundleID:(id)arg2;
- (void)snapshotAtTime:(struct)arg1 withClipBundleID:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)playingPlayer;
- (void)setPlayingPlayer:(id)arg1;
- (id)playingContainerView;
- (void)setPlayingContainerView:(id)arg1;
- (id)auidoModuleProxy;
- (void)setAuidoModuleProxy:(id)arg1;
- (void).cxx_destruct;
@end
