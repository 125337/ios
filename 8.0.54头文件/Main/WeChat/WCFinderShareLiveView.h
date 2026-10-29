@interface WCFinderShareLiveView : WCContentItemBaseView <WCFinderLiveExt, MMWebImageViewDelegate, MMLiveTaskMgrExt, WCMomentsFullScreenTransitionProtocol, MMLiveCDNPlayerViewDelegate>
{
    BOOL _canShowLiveActivityView; // +0x38
    BOOL _isAutoPlayingPeriod; // +0x39
    id <WCFinderShareLiveViewDelegate> itemViewDelegate; // +0x40
    UIImageView * _imageView; // +0x48
    WCDataItem * _oWCDataItem; // +0x50
    MMLiveCDNPlayerView * _playerView; // +0x58
    WCFinderLiveNowView * _logoView; // +0x60
    UIView * _liveMaskView; // +0x68
    WCFinderLiveShareCellFullStatusView * _liveMaskTipsView; // +0x70
    UILabel * _coverEffectLabel; // +0x78
    MMFinderLiveActivityView * _liveActivityView; // +0x80
    NSString * _logoViewLabel; // +0x88
    MMFinderLiveLimitModeLiveInfoEnsurer * _liveInfoEnsurer; // +0x90
    RichTextView * _mediaTitleTextView; // +0x98
    UIImageView * _bottomGradientView; // +0xa0
    NSDate * _startAutoPlay; // +0xa8
    WCFinderLiveShareCardExposeReportAdapter * _exposeReportAdapter; // +0xb0
}
+ (CGSize)sizeForContentItem:(id)arg1;
+ (double)heightForMedia:(id)arg1 showDetail:(BOOL)arg2;
- (void)initViewsWithWCDataItem:(id)arg1;
- (void)initViewsWithWCContentItem:(id)arg1;
- (void)preLoad:(id)arg1;
- (void)changeLiveNowViewType:(long long)arg1;
- (void)layoutDefaultV2:(id)arg1;
- (id)spliceFinderLiveStatusVoiceOverStrWithStatus:(id)arg1 andNickname:(id)arg2 andFinderLiveStatusFormat:(id)arg3;
- (BOOL)isLiveEnded:(id)arg1;
- (BOOL)isLiveReplay:(id)arg1;
- (BOOL)isLiveReplayGenerating:(id)arg1;
- (BOOL)isPaidLive:(id)arg1;
- (void)onVoiceOverClick;
- (id)getVoiceOverStrForTimeline;
- (void)throwUrlMessage;
- (void)reportEcsData:(id)arg1 dataItem:(id)arg2;
- (void)_doJumpToLive;
- (void)prepareForMorphTransition;
- (id)imageView;
- (id)logoView;
- (id)liveMaskView;
- (id)liveMaskTipsView;
- (id)coverEffectLabel;
- (void)refreshLiveMaskEffect;
- (void)layoutLiveActivityView;
- (void)contentItemWillDisplay;
- (void)contentItemDidEndDisplaying;
- (id)getMainContentView;
- (void)autoPlayWithoutSound;
- (void)autoPauseWithoutSound;
- (void)hideComponentIfNeededWithTask:(id)arg1;
- (void)showViewIfNeededWithTask:(id)arg1;
- (void)showImageView;
- (BOOL)isCurrentDataItemOpenedLiveTask:(id)arg1;
- (void)startPlayLiveStream;
- (void)stopPlay;
- (void)updatePlayerViewHidden:(BOOL)arg1;
- (void)updatePlayerViewAlpha:(double)arg1;
- (void)updateImageViewAlpha;
- (BOOL)isLiveAutoPlayEnabled;
- (void)onFinderLiveShareViewUpdateLiveInfo:(id)arg1;
- (void)onFinderLiveShareViewReplayStatusUpdated:(id)arg1 liveInfo:(id)arg2;
- (void)onFinderLiveCloseWithTid:(id)arg1;
- (void)onFinderLiveReplayStatusUpdated:(id)arg1 replayStatus:(unsigned int)arg2;
- (void)onFinderLiveReplaySettingUpdated:(id)arg1 replayEnabled:(BOOL)arg2;
- (void)onFinderLiveFeedCoverInfoUpdate:(unsigned long long)arg1 coverInfo:(id)arg2;
- (void)onPlayBegin;
- (void)onLoadImageOK:(id)arg1;
- (void)onExtendAnimationDidEndWithLiveTask:(id)arg1;
- (void)onMinimizeInteractiveDidEnd:(id)arg1;
- (void)onCollapseAnimationDidEnd:(id)arg1;
- (void)onExitLiveSuccessWithLiveTaskId:(id)arg1;
- (void)showViewWhenCloseFullScreenAnimationEnd;
- (void)hideViewWhenShowFullScreenAnimationEnd;
- (void)exposeExtStatsReportWhenDisappearFrom:(id)arg1;
- (id)itemViewDelegate;
- (void)setItemViewDelegate:(id)arg1;
- (void)setImageView:(id)arg1;
- (id)oWCDataItem;
- (void)setOWCDataItem:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (void)setLogoView:(id)arg1;
- (void)setLiveMaskView:(id)arg1;
- (void)setLiveMaskTipsView:(id)arg1;
- (void)setCoverEffectLabel:(id)arg1;
- (BOOL)canShowLiveActivityView;
- (void)setCanShowLiveActivityView:(BOOL)arg1;
- (id)liveActivityView;
- (void)setLiveActivityView:(id)arg1;
- (id)logoViewLabel;
- (void)setLogoViewLabel:(id)arg1;
- (BOOL)isAutoPlayingPeriod;
- (void)setIsAutoPlayingPeriod:(BOOL)arg1;
- (id)liveInfoEnsurer;
- (void)setLiveInfoEnsurer:(id)arg1;
- (id)mediaTitleTextView;
- (void)setMediaTitleTextView:(id)arg1;
- (id)bottomGradientView;
- (void)setBottomGradientView:(id)arg1;
- (id)startAutoPlay;
- (void)setStartAutoPlay:(id)arg1;
- (id)exposeReportAdapter;
- (void)setExposeReportAdapter:(id)arg1;
- (void).cxx_destruct;
@end

