@interface MSEVideoPlayerView : UIView
{
    float _duration; // +0x8
    NSURL * _videoUrl; // +0x10
    UIImageView * _videoThumbView; // +0x18
    AVPlayer * _player; // +0x20
    AVPlayerLayerView * _playerLayerView; // +0x28
    AVPlayerItem * _playerItem; // +0x30
    AVURLAsset * _asset; // +0x38
    UIButton * _playBigButton; // +0x40
    UIImageView * _infoBgImageView; // +0x48
    NSString * _compressSizeStr; // +0x50
    UILabel * _sizeLabel; // +0x58
    UILabel * _durationLabel; // +0x60
    UILabel * _compressTipLabel; // +0x68
    UIActivityIndicatorView * _activityView; // +0x70
    UIView * _compressLoadingView; // +0x78
}
- (id)initWithVideoUrl:(id)arg1;
- (void)dealloc;
- (void)initData;
- (void)initSubView;
- (void)initVideoThumbView;
- (void)initVideoPlayButton;
- (void)initVideoInfoView;
- (void)startCompressLoading;
- (void)compressCompeleted:(id)arg1 CompressSizeStr:(id)arg2 outOfLimit:(BOOL)arg3;
- (void)compressFail;
- (void)OnPlayButtonClick:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)startPlayer;
- (void)videoPlayEnded:(id)arg1;
- (void)onPlayerViewTapped;
- (id)videoUrl;
- (void)setVideoUrl:(id)arg1;
- (id)videoThumbView;
- (void)setVideoThumbView:(id)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (id)playerLayerView;
- (void)setPlayerLayerView:(id)arg1;
- (id)playerItem;
- (void)setPlayerItem:(id)arg1;
- (id)asset;
- (void)setAsset:(id)arg1;
- (id)playBigButton;
- (void)setPlayBigButton:(id)arg1;
- (float)duration;
- (void)setDuration:(float)arg1;
- (id)infoBgImageView;
- (void)setInfoBgImageView:(id)arg1;
- (id)compressSizeStr;
- (void)setCompressSizeStr:(id)arg1;
- (id)sizeLabel;
- (void)setSizeLabel:(id)arg1;
- (id)durationLabel;
- (void)setDurationLabel:(id)arg1;
- (id)compressTipLabel;
- (void)setCompressTipLabel:(id)arg1;
- (id)activityView;
- (void)setActivityView:(id)arg1;
- (id)compressLoadingView;
- (void)setCompressLoadingView:(id)arg1;
- (void).cxx_destruct;
@end

