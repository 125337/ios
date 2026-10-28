@interface WAFloatingLivePlayerWrapper : WAFloatingViewBaseWrapper
{
    id <ITXLivePlayJSAdapter> _livePlayer; // +0x8
}
- (id)livePlayer;
- (void)setParams;
- (void)resetParams;
- (id)playerView;
- (void)pause;
- (void)play;
- (void)stop;
- (BOOL)isLoading;
- (id)videoURL;
- (void)setLivePlayer:(id)arg1;
- (void).cxx_destruct;
@end
