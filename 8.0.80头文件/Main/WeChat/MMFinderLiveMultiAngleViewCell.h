@interface MMFinderLiveMultiAngleViewCell : UICollectionViewCell <MMLiveCDNPlayerViewDelegate>
{
    BOOL _isSelect; // +0x8
    BOOL _isCoverSpam; // +0x9
    BOOL _useFillModeForLandscapeVideo; // +0xa
    LiveSdkChannelParamsDesc * _channelParamsDesc; // +0x10
    LiveSdkChannelParams * _channelParams; // +0x18
    NSString * _coverUrl; // +0x20
    NSString * _coverSpamText; // +0x28
    double _itemHeight; // +0x30
    MMUIImageView * _angleImageView; // +0x38
    MMLiveCDNPlayerView * _playerView; // +0x40
    MMUILabel * _titleLabel; // +0x48
    MMUIView * _coverView; // +0x50
    NSString * _url; // +0x58
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setChannelParamsDesc:(id)arg1;
- (void)layoutSubviews;
- (void)setIsSelect:(BOOL)arg1;
- (void)createUI;
- (void)liveMultiAngleViewDisappearHandle;
- (void)layoutUI;
- (void)prepareForReuse;
- (void)layoutAngleImageView;
- (void)layoutPlayerView;
- (id)getPlayerUrlFromChannelParamsDesc;
- (void)loadImage:(id)arg1;
- (void)layoutTitleView;
- (void)setIsCoverSpam:(BOOL)arg1;
- (id)angleImageView;
- (id)playerView;
- (id)titleLabel;
- (id)coverView;
- (void)play;
- (void)pause;
- (void)updateRenderMode;
- (id)channelParamsDesc;
- (id)channelParams;
- (void)setChannelParams:(id)arg1;
- (BOOL)isSelect;
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (BOOL)isCoverSpam;
- (id)coverSpamText;
- (void)setCoverSpamText:(id)arg1;
- (double)itemHeight;
- (void)setItemHeight:(double)arg1;
- (BOOL)useFillModeForLandscapeVideo;
- (void)setUseFillModeForLandscapeVideo:(BOOL)arg1;
- (void)setAngleImageView:(id)arg1;
- (void)setPlayerView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setCoverView:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (void).cxx_destruct;
@end
