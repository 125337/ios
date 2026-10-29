@interface BTReaderStyleRecommendVideoCellView : BTReaderStyleRecommendMsgCellView
{
    UIView * m_playerBtnContainerView; // +0x28
    SightIconView * m_playIconView; // +0x30
    MMUILabel * m_timeLabel; // +0x38
    MMUILabel * m_autoPlayVideoTimeLabel; // +0x40
    CAGradientLayer * m_autoPlayVideoTitleMaskLayer; // +0x48
    BTVideoItemCellAutoPlayerView * m_lastAddedPlayerView; // +0x50
}
- (void)initSubviews;
- (void)onUpdateViewModel;
- (void)initPlayIconView;
- (void)initTimeLabel;
- (void)updateTitleView:(BOOL)arg1;
- (void)layoutLargeCoverItem;
- (void)layoutNormalCoverItem;
- (void)updateViewByVideoAutoPlayStatus;
- (void)initVideoPlayerView;
- (void)initVideoTimeLabel;
- (void)initVideoPlayTitleCoverMaskLayer;
- (void)updateVideoTimeLabel;
- (void)setVideoPlayTitleCoverMaskLayer;
- (void)removeVideoPlayTitleCoverMaskLayer;
- (void)updateViewWhenStatusIsPlay;
- (void)updateViewWhenStatusIsDestory;
- (void)doAnimationFromCoverImageToVideoPlayerView;
- (void)onVideoPlayerBeginBuffering;
- (void)onVideoPlayerPlay;
- (void)onVideoPlayerPrepareToPlay;
- (void)resetLastAddedPlayerView;
- (id)getTimeLabelAccessibilityLabel;
- (id)accessibilityLabel;
- (void).cxx_destruct;
@end

