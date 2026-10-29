@interface WCFinderLongVideoListCell : UICollectionViewCell <WCFinderFeedContentMediaActionProtocol, WCFinderGlobalPlaybackInfoExt>
{
    BOOL _needCallbackAutoPlay; // +0x8
    id <WCFinderLongVideoListCellDelegate> _delegate; // +0x10
    NSString * _playSessionId; // +0x18
    WCFinderFeedContentVM * _contentVM; // +0x20
    UILabel * _recommendReasonLabel; // +0x28
    WCFinderFriendLikeCustomInfoView * _friendLikeInfoView; // +0x30
    WCFinderAuthorContactRecommendView * _contactView; // +0x38
    RichTextView * _titleContentView; // +0x40
    MMWebImageView * _feedImageView; // +0x48
    UILabel * _timeLabel; // +0x50
    WCFinderSimplePlayerView * _playerView; // +0x58
    CAGradientLayer * _bottomGradientLayer; // +0x60
    unsigned long long _playStartTsInMs; // +0x68
    double _startVideoPlayTime; // +0x70
    MMWebImageView * _fullFeedImageView; // +0x78
    UIView * _fullFeedImageViewContainer; // +0x80
    UIView * _playerContainerView; // +0x88
    _TtC6WeChat25WCFinderSimpleProgressBar * _progressBar; // +0x90
    UIView * _seperateLine; // +0x98
    MMUIButton * _landscapeButton; // +0xa0
    WCShowArea _playerViewShowArea; // +0xa8
}
- (void)prepareForReuse;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)setUpUI;
- (void)updateContentVM:(id)arg1 showSeperateLine:(BOOL)arg2;
- (CGSize)getCellSizeWithContentVM:(id)arg1 showSeperateLine:(BOOL)arg2 maxSize:(CGSize)arg3;
- (void)layoutSubviews;
- (double)mylayout;
- (void)onLongPress:(id)arg1;
- (void)startPlay;
- (void)stopPlay;
- (id /* block */)fakeStopPlay;
- (BOOL)currentPlaying;
- (double)currentVideoPlayTime;
- (unsigned long long)realPlayTimeInMs;
- (long long)maxProgress;
- (int)getCommentScene;
- (id)showingRecommendReason;
- (CGRect)coverPosition;
- (id)coverSnapshot;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)updateTimeLabel:(int)arg1;
- (void)onFeedContent:(id)arg1 likedDataChanged:(id)arg2;
- (void)onGlobalPlaybackInfoUpdatedWithTid:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)playSessionId;
- (void)setPlaySessionId:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)recommendReasonLabel;
- (void)setRecommendReasonLabel:(id)arg1;
- (id)friendLikeInfoView;
- (void)setFriendLikeInfoView:(id)arg1;
- (id)contactView;
- (void)setContactView:(id)arg1;
- (id)titleContentView;
- (void)setTitleContentView:(id)arg1;
- (id)feedImageView;
- (void)setFeedImageView:(id)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (WCShowArea)playerViewShowArea;
- (void)setPlayerViewShowArea:(WCShowArea)arg1;
- (id)bottomGradientLayer;
- (void)setBottomGradientLayer:(id)arg1;
- (unsigned long long)playStartTsInMs;
- (void)setPlayStartTsInMs:(unsigned long long)arg1;
- (double)startVideoPlayTime;
- (void)setStartVideoPlayTime:(double)arg1;
- (id)fullFeedImageView;
- (void)setFullFeedImageView:(id)arg1;
- (id)fullFeedImageViewContainer;
- (void)setFullFeedImageViewContainer:(id)arg1;
- (id)playerContainerView;
- (void)setPlayerContainerView:(id)arg1;
- (id)progressBar;
- (void)setProgressBar:(id)arg1;
- (id)seperateLine;
- (void)setSeperateLine:(id)arg1;
- (id)landscapeButton;
- (void)setLandscapeButton:(id)arg1;
- (BOOL)needCallbackAutoPlay;
- (void)setNeedCallbackAutoPlay:(BOOL)arg1;
- (void).cxx_destruct;
@end

