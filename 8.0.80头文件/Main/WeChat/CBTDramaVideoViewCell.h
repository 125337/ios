@interface CBTDramaVideoViewCell : UICollectionViewCell <WCPlayerControlProtocol>
{
    BOOL _playerActive; // +0x8
    BOOL _playerStarted; // +0x9
    WCPlayerView * _playerView; // +0x10
    long long _loopTimes; // +0x18
    CBTDramaShotItemCellModel * _cellModel; // +0x20
    CADisplayLink * _progressDisplayLink; // +0x28
    WCPlayerView * _strongPlayerView; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setPlayerActive:(BOOL)arg1;
- (void)setMute:(BOOL)arg1;
- (void)dealloc;
- (void)prepareForReuse;
- (void)resetCell;
- (void)makeCellWithCellModel:(id)arg1;
- (void)makeCoverImageViewWithCellModel:(id)arg1;
- (void)makePlayerViewWithCellModel:(id)arg1;
- (void)startProgressDisplayLink;
- (void)stopProgressDisplayLink;
- (void)invalidateProgressDisplayLink;
- (void)onDisplayLinkTick:(id)arg1;
- (void)onVideoPause;
- (void)onVideoDidPlayToEndTime;
- (void)updateVideoCurrentTime:(double)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (long long)loopTimes;
- (void)setLoopTimes:(long long)arg1;
- (id)cellModel;
- (void)setCellModel:(id)arg1;
- (BOOL)playerActive;
- (BOOL)playerStarted;
- (void)setPlayerStarted:(BOOL)arg1;
- (id)progressDisplayLink;
- (void)setProgressDisplayLink:(id)arg1;
- (id)strongPlayerView;
- (void)setStrongPlayerView:(id)arg1;
- (void).cxx_destruct;
@end
