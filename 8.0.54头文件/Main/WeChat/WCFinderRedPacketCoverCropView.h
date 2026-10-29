@interface WCFinderRedPacketCoverCropView : MMUIView <UIScrollViewDelegate>
{
    BOOL _shouldIgnoreScrollEvent; // +0x8
    id <WCFinderRedPacketCoverCropViewDelegate> _delegate; // +0x10
    AVAsset * _playerAVAsset; // +0x18
    WCFinderHeadImageView * _headImageView; // +0x20
    UILabel * _nicknameLabel; // +0x28
    UIImageView * _cardImgView; // +0x30
    NSURL * _videoUrl; // +0x38
    AVPlayerItem * _playerItem; // +0x40
    AVPlayer * _avPlayer; // +0x48
    AVPlayerLayer * _playerLayer; // +0x50
    double _keyFrameRate; // +0x58
    double _videoDuration; // +0x60
    id _timeObserver; // +0x68
    MMUIScrollView * _scrollView; // +0x70
    UIView * _playerContainerView; // +0x78
    CGSize _videoSize; // +0x80
}
- (id)initWithFrame:(CGRect)arg1 videoURL:(id)arg2;
- (id)scrollView;
- (id)playerContainerView;
- (id)nicknameLabel;
- (id)headImageView;
- (id)cardImgView;
- (void)setUpView;
- (void)layoutAllSubviews;
- (void)loadPreviewView;
- (void)removeNotification;
- (void)observeNotification;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)observePlayerProgress;
- (void)checkProgressByCurrentTime:(double)arg1;
- (void)dealloc;
- (void)setupLoopPlaybackWithStartTime:(double)arg1;
- (void)sliderPanChangedState:(long long)arg1;
- (void)sliderScrollAction;
- (id)rangeModel;
- (id)sliderVideoCropRect;
- (id)getCurThumbImage;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)playerAVAsset;
- (void)setPlayerAVAsset:(id)arg1;
- (void)setHeadImageView:(id)arg1;
- (void)setNicknameLabel:(id)arg1;
- (void)setCardImgView:(id)arg1;
- (id)videoUrl;
- (void)setVideoUrl:(id)arg1;
- (id)playerItem;
- (void)setPlayerItem:(id)arg1;
- (id)avPlayer;
- (void)setAvPlayer:(id)arg1;
- (id)playerLayer;
- (void)setPlayerLayer:(id)arg1;
- (double)keyFrameRate;
- (void)setKeyFrameRate:(double)arg1;
- (double)videoDuration;
- (void)setVideoDuration:(double)arg1;
- (CGSize)videoSize;
- (void)setVideoSize:(CGSize)arg1;
- (id)timeObserver;
- (void)setTimeObserver:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setPlayerContainerView:(id)arg1;
- (BOOL)shouldIgnoreScrollEvent;
- (void)setShouldIgnoreScrollEvent:(BOOL)arg1;
- (void).cxx_destruct;
@end

