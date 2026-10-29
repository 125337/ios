@interface WCNetworkMediaCore : MMObject <AVAssetResourceLoaderDelegate>
{
    WCNetworkMediaCore * weakSelf; // +0x8
    BOOL hasPlayed; // +0x10
    BOOL m_isNeedRestartMusic; // +0x11
    int m_state; // +0x14
    NSString * url; // +0x18
    id <WCNetworkMediaCoreDelegate> delegate; // +0x20
    AVURLAsset * m_asset; // +0x28
    AVPlayerItem * m_item; // +0x30
    double m_duration; // +0x38
    double m_cacheDuration; // +0x40
    WXAVPlayerView * _playerView; // +0x48
    CGSize m_videoSize; // +0x50
}
- (id)initWithURL:(id)arg1;
- (id)layer;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)prepareMediaWithMuted:(BOOL)arg1;
- (double)cacheDuration;
- (double)duration;
- (CGSize)videoSize;
- (double)currentPosition;
- (void)accurateSeekTo:(double)arg1;
- (void)seekTo:(double)arg1;
- (void)setMute:(BOOL)arg1;
- (BOOL)mute;
- (void)initPlayer;
- (void)internalPlay;
- (void)onPlaybackStalled:(id)arg1;
- (void)onPlaybackEnd:(id)arg1;
- (void)onPlaybackFailedToEnd:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onPlayerItemStatusChange:(long long)arg1;
- (void)onPlayerStatusChange:(long long)arg1;
- (void)onCacheRangeChange:(id)arg1;
- (void)updateState:(int)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)m_asset;
- (void)setM_asset:(id)arg1;
- (id)m_item;
- (void)setM_item:(id)arg1;
- (CGSize)m_videoSize;
- (void)setM_videoSize:(CGSize)arg1;
- (double)m_duration;
- (void)setM_duration:(double)arg1;
- (double)m_cacheDuration;
- (void)setM_cacheDuration:(double)arg1;
- (int)state;
- (BOOL)m_isNeedRestartMusic;
- (void)setM_isNeedRestartMusic:(BOOL)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (void).cxx_destruct;
@end

