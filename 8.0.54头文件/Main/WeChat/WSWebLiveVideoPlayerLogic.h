@interface WSWebLiveVideoPlayerLogic : WSWebNativeVideoPlayerLogic <MMLiveCDNPlayerViewDelegate>
{
    MMLiveCDNPlayerView * _playerView; // +0x8
    WCFinderDataItem * _finderDataItem; // +0x10
    NSString * _streamUrl; // +0x18
}
- (id)initWithViewId:(unsigned int)arg1 andFinderDataItem:(id)arg2 andDelegate:(id)arg3;
- (id)initWithViewId:(unsigned int)arg1 andStreamUrl:(id)arg2 andDelegate:(id)arg3;
- (void)dealloc;
- (id)createPlayerView:(CGRect)arg1;
- (BOOL)isPlaying;
- (void)play;
- (void)pause;
- (void)stop;
- (void)destroy;
- (void)setPlayerContentMode:(long long)arg1;
- (void)setMuted:(BOOL)arg1;
- (void)onPlayLiveConnectSuccessful;
- (void)onPlayBegin;
- (void)onPlayEnd;
- (void)onPlayDisconnect;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)finderDataItem;
- (void)setFinderDataItem:(id)arg1;
- (id)streamUrl;
- (void)setStreamUrl:(id)arg1;
- (void).cxx_destruct;
@end

