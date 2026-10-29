@interface WAGameRelatedGamesCollectionViewCell : UICollectionViewCell
{
    UIView * _coverPlaceholder; // +0x8
    MMWebImageView * _coverImageView; // +0x10
    UIView * _videoContainerView; // +0x18
    AVQueuePlayer * _videoPlayer; // +0x20
    AVPlayerLooper * _videoLooper; // +0x28
    AVPlayerLayer * _videoPlayerLayer; // +0x30
    NSString * _currentVideoUrlStr; // +0x38
    MMUILabel * _nameLabel; // +0x40
    WAGameRelatedGameInfo * _lastGameInfo; // +0x48
}
+ (id)reuseIdentifier;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)layoutSubviews;
- (void)configWithGameInfo:(id)arg1;
- (void)stopVideoForOffscreen;
- (void)setupVideoPlaybackWithUrl:(id)arg1;
- (void)teardownVideoPlayback;
- (void)prepareForReuse;
- (void)setSelectedStyle:(BOOL)arg1;
- (void)dealloc;
- (id)coverPlaceholder;
- (void)setCoverPlaceholder:(id)arg1;
- (id)coverImageView;
- (void)setCoverImageView:(id)arg1;
- (id)videoContainerView;
- (void)setVideoContainerView:(id)arg1;
- (id)videoPlayer;
- (void)setVideoPlayer:(id)arg1;
- (id)videoLooper;
- (void)setVideoLooper:(id)arg1;
- (id)videoPlayerLayer;
- (void)setVideoPlayerLayer:(id)arg1;
- (id)currentVideoUrlStr;
- (void)setCurrentVideoUrlStr:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)lastGameInfo;
- (void)setLastGameInfo:(id)arg1;
- (void).cxx_destruct;
@end
