@interface BTVideoItemCellView : BTReaderItemCellView
{
    CAGradientLayer * m_maskLayer; // +0x38
    UIView * m_playerBtnContainerView; // +0x40
    SightIconView * m_playIconView; // +0x48
    MMUILabel * m_timeLabel; // +0x50
    MMUILabel * m_autoPlayVideoTimeLabel; // +0x58
    CAGradientLayer * m_autoPlayVideoTitleMaskLayer; // +0x60
    BTVideoItemCellAutoPlayerView * m_lastAddedPlayerView; // +0x68
}
- (void)initTopReaderItem;
- (void)initNormalReaderItem;
- (void)initCoverView;
- (void)initCoverMaskLayer;
- (id)getTitleViewColor:(BOOL)arg1;
- (void)onUpdateViewModel;
- (void)initPlayIconView;
- (void)initTimeLabel;
- (void)updateTimeLabel;
- (void)updateTitleView:(BOOL)arg1;
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
- (void)layoutSubviewsTopItem;
- (void)layoutSubviewsNormalItem;
- (id)accessibilityLabel;
- (void).cxx_destruct;
@end

