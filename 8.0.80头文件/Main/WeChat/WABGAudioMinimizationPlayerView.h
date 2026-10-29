@interface WABGAudioMinimizationPlayerView : UIView
{
    long long _state; // +0x8
    long long _playType; // +0x10
    UIView * _playerView; // +0x18
    MMWebImageView * _coverView; // +0x20
    UIView * _failureTipsView; // +0x28
    SightIconView * _loadingView; // +0x30
    WAMinimizeFloatingAuidoOnlyView * _audioOnlyView; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setState:(long long)arg1;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setPlayerView:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setDefaultImage;
- (id)getPlayerView;
- (void)setPlayType:(long long)arg1;
- (void)startLoading;
- (void)stopLoading;
- (id)loadingView;
- (id)failureTipsView;
- (id)audioOnlyView;
- (long long)state;
- (long long)playType;
- (id)playerView;
- (id)coverView;
- (void)setCoverView:(id)arg1;
- (void)setFailureTipsView:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setAudioOnlyView:(id)arg1;
- (void).cxx_destruct;
@end
