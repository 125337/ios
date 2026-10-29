@interface WCFinderShareLiveCellViewModel : CommonMessageViewModel <WCFinderLiveExt>
{
    BOOL _isShareBySelf; // +0x70
    int _cellViewType; // +0x74
    id <WCFinderShareLiveCellViewDelegate> _liveDelegate; // +0x78
    double _gradientLayerHeight; // +0x80
    WCFinderLiveShareCardExposeReportAdapter * _exposeReportAdapter; // +0x88
    WCFinderCoLiveAuthor * _coLiveAuthor; // +0x90
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
+ (double)cellViewEstimateWidth;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (id)coLiveAuthor;
- (id)avatarUrl;
- (id)nickname;
- (id)coAuthorSuffix;
- (CGSize)imageSize;
- (double)adjustImageRatio;
- (id)coverUrl;
- (id)bareCoverUrl;
- (id)maskUrl;
- (id)desc;
- (id)coverEffectText;
- (id)authInfo;
- (id)tailTagURL;
- (id)genFinderDataItem;
- (unsigned long long)finderLiveStatus;
- (id)gradientLayerEndColor;
- (id)gradientLayerBeginColor;
- (id)priceColor;
- (id)descColor;
- (id)descFont;
- (BOOL)canForward;
- (double)descHeight:(int)arg1;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (CGSize)defaultContentViewSize;
- (BOOL)shouldShowMaskView;
- (BOOL)shouldShowLiveEffectSpam;
- (BOOL)shouldShowGeneratingReplay;
- (BOOL)isCompleteFinderLiveReplay;
- (BOOL)shouldRemoveLiveNowView;
- (BOOL)needPayForLive;
- (BOOL)isReplay;
- (BOOL)isNeedRemoveNowView;
- (BOOL)isJumpFeedReplay;
- (double)estimateWidth;
- (void)onFinderLiveCloseWithTid:(id)arg1;
- (void)onFinderLiveFeedCoverInfoUpdate:(unsigned long long)arg1 coverInfo:(id)arg2;
- (void)onFinderLiveShareViewReplayStatusUpdated:(id)arg1 liveInfo:(id)arg2;
- (void)onFinderLiveReplayStatusUpdated:(id)arg1 replayStatus:(unsigned int)arg2;
- (void)onFinderLiveReplaySettingUpdated:(id)arg1 replayEnabled:(BOOL)arg2;
- (void)onFinderLiveShareViewUpdateLiveInfo:(id)arg1;
- (id)additionalAccessibilityDescription;
- (id)accessibilityMessageType;
- (BOOL)hasReferImage;
- (id)getReferImageViewWithSize:(CGSize)arg1;
- (id)getReferImage;
- (void)onExposeReport;
- (void)preloadReplay;
- (void)exposeExtStatsReportWhenDisappearFrom:(id)arg1;
- (id)liveDelegate;
- (void)setLiveDelegate:(id)arg1;
- (BOOL)isShareBySelf;
- (void)setIsShareBySelf:(BOOL)arg1;
- (double)gradientLayerHeight;
- (int)cellViewType;
- (id)exposeReportAdapter;
- (void)setExposeReportAdapter:(id)arg1;
- (void)setCoLiveAuthor:(id)arg1;
- (void).cxx_destruct;
@end
