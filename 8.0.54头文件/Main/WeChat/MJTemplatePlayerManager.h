@interface MJTemplatePlayerManager : MMRootService <MMServiceProtocol>
{
    MJTemplateMoviePlayer * _playingPlayer; // +0x8
    UIView * _playingContainerView; // +0x10
    WCAudioModuleProxy * _auidoModuleProxy; // +0x18
}
- (void)onServiceInit;
- (void)startPlayingInView:(id)arg1 withClipBundleID:(id)arg2 isMuted:(BOOL)arg3;
- (void)stopPlayingWithClipBundleID:(id)arg1;
- (struct)currentPlaybackTimeWithClipBundleID:(id)arg1;
- (void)_stopPlayer:(id)arg1;
- (void)_movePlayer:(id)arg1 toView:(id)arg2;
- (id)playingPlayer;
- (void)setPlayingPlayer:(id)arg1;
- (id)playingContainerView;
- (void)setPlayingContainerView:(id)arg1;
- (id)auidoModuleProxy;
- (void)setAuidoModuleProxy:(id)arg1;
- (void).cxx_destruct;
@end

