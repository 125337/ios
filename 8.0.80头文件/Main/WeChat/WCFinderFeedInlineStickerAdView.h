@interface WCFinderFeedInlineStickerAdView : UIView <WCFinderFeedContentMediaActionProtocol, UIGestureRecognizerDelegate>
{
    id <WCFinderFeedInlineStickerAdViewDelegate> _delegate; // +0x8
    WCFinderDataItem * _adDataItem; // +0x10
    double _currentPlaybackTime; // +0x18
    long long _showPlayPercent; // +0x20
    WCFinderSimplePlayerView * _playerView; // +0x28
    WCFinderJumpInfo * _topRightJumpInfo; // +0x30
    WCFinderJumpInfo * _bottomRightJumpInfo; // +0x38
    UIImageView * _playOrPauseImageView; // +0x40
    WCFinderNormalProgressBar * _playerProgressBar; // +0x48
    WCFinderPlayerLoadingView * _playerLoadingView; // +0x50
    UIView * _bottomContainerView; // +0x58
    MMHeadImageView * _avatarImageView; // +0x60
    UILabel * _nicknameLabel; // +0x68
    UILabel * _descLabel; // +0x70
    WCFinderAdPromotionButton * _promotionButton; // +0x78
    WCFinderJumpInfoPanelView * _bottomRightPanelView; // +0x80
    double _videoWidthRatio; // +0x88
    double _videoHeightRatio; // +0x90
    CGSize _playerSize; // +0x98
}
- (id)initWithFrame:(CGRect)arg1;
- (void)_setupSubviews;
- (void)layoutSubviews;
- (void)_layoutCardAndPlayer;
- (CGSize)preferredSizeForWidth:(double)arg1;
- (void)configureWithMeta:(id)arg1;
- (void)_onTapCard:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_onPromotionButtonTap;
- (void)_onPromotionTitleLabelTap;
- (void)startPlaying;
- (void)_coverPlayerUntilFirstFrame;
- (void)startPlayingFromPosition:(double)arg1;
- (void)resumePlaying;
- (void)pausePlaying;
- (void)invalidate;
- (BOOL)hasBottomRightJumpInfo;
- (void)contentMediaDidEndPlay:(id)arg1;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (long long)remainingCountdownSeconds;
- (void)setRemainingCountdownSeconds:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)adDataItem;
- (void)setAdDataItem:(id)arg1;
- (double)currentPlaybackTime;
- (void)setCurrentPlaybackTime:(double)arg1;
- (long long)showPlayPercent;
- (void)setShowPlayPercent:(long long)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)topRightJumpInfo;
- (void)setTopRightJumpInfo:(id)arg1;
- (id)bottomRightJumpInfo;
- (void)setBottomRightJumpInfo:(id)arg1;
- (CGSize)playerSize;
- (void)setPlayerSize:(CGSize)arg1;
- (id)playOrPauseImageView;
- (void)setPlayOrPauseImageView:(id)arg1;
- (id)playerProgressBar;
- (void)setPlayerProgressBar:(id)arg1;
- (id)playerLoadingView;
- (void)setPlayerLoadingView:(id)arg1;
- (id)bottomContainerView;
- (void)setBottomContainerView:(id)arg1;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg1;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)promotionButton;
- (void)setPromotionButton:(id)arg1;
- (id)bottomRightPanelView;
- (void)setBottomRightPanelView:(id)arg1;
- (double)videoWidthRatio;
- (void)setVideoWidthRatio:(double)arg1;
- (double)videoHeightRatio;
- (void)setVideoHeightRatio:(double)arg1;
- (void).cxx_destruct;
@end
