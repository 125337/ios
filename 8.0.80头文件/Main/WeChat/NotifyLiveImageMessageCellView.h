@interface NotifyLiveImageMessageCellView : TemplateNotifyMessageCellView <MMLiveCDNPlayerViewDelegate, MMFinderLiveContentVMExt, MMFinderNotifyGetMoreLiveEvents>
{
    FinderLiveMessageCellMainContentView * m_mainContentView; // +0x28
    MMLiveCDNPlayerView * m_playerView; // +0x30
    WCFinderDataItem * m_finderDataItem; // +0x38
    UIView * _onPressedView; // +0x40
    FinderNotifyGetMoreLiveResponse * _moreLiveInfo; // +0x48
    FinderNotifyMoreLiveInfo * _moreLiveConfig; // +0x50
    MMUIButton * _moreLiveButton; // +0x58
    MMUIButton * _headerTapButton; // +0x60
    BrandTemplateMsgAuthMessageBubbleModel * _messageBubbleModel; // +0x68
    FinderLiveEntranceGuideInfo * _liveEntranceGuideInfo; // +0x70
}
- (id)initWithViewModel:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)onAppear;
- (void)dealloc;
- (void)prepareForReuse;
- (void)layoutContentView;
- (void)onTouchUpInside;
- (id)genHeaderTapButton;
- (void)onTapHeaderArea;
- (void)onMoreButton:(id)arg1;
- (id)genDisplayViewWithExtItemInfo:(id)arg1 maxDisplayViewWidth:(double)arg2;
- (void)onTapMoreLiveButton;
- (BOOL)hasEntranceGuide;
- (void)jumpToSquareWithEntranceGuide;
- (void)onTouchDown;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)bindYReportSdk:(id)arg1;
- (void)onLiveInfoUpdated;
- (void)updateLiveStatus;
- (BOOL)canAutoPlayVideoWithoutSound;
- (void)autoPauseVideoWithoutSound;
- (void)autoPlayVideoWithoutSound;
- (void)fetchLatestLiveInfo;
- (void)createLivePlayerIfNeed;
- (void)layoutLivePlayerView;
- (void)startPlayLiveStream;
- (void)stopPlay;
- (BOOL)hasMoreLiveConfig;
- (id)genFinderDataItem;
- (id)operationMenuItems;
- (void)onForward:(id)arg1;
- (void)onDoneForwardMessageWithContentVM:(id)arg1 andUserArray:(id)arg2 isCertificateType:(BOOL)arg3;
- (void)setMoreLiveInfo:(id)arg1;
- (void)onMoreLiveConfigReadyWithUniqueKey:(id)arg1;
- (void)reportMoreLiveEntranceExpose;
- (void)reportMoreLiveRecommendLiveExpose;
- (void)reportMoreLiveClick;
- (id)getMoreLiveDataItemForReport;
- (id)getChnlExtraForNoticeReport;
- (id)getChnlExtraForExposeReport;
- (void)fillMessageBubbleModeBaseInfo;
- (void)reportMessageBubbleOperationType:(unsigned int)arg1;
- (void)reportLiveShareActionWithEid:(id)arg1 isExpose:(BOOL)arg2;
- (void)reportWatchLiveBanner:(BOOL)arg1;
- (void)reportNoticeGuideFindEnter:(BOOL)arg1;
- (BOOL)updateRecommendReasonIfNeeded:(id)arg1;
- (BOOL)cleanRecommendReasonIfNeeded;
- (BOOL)setRecommendReason:(id)arg1;
- (void)onDisappear;
- (void)onAppEnterBackground;
- (BOOL)isListDragging;
- (void)MMUIViewControllerDidDisappear:(id)arg1;
- (BOOL)isAutoPlaying;
- (void)reportReaderTemplateMsgFold:(long long)arg1;
- (id)onPressedView;
- (void)setOnPressedView:(id)arg1;
- (id)moreLiveInfo;
- (id)moreLiveConfig;
- (void)setMoreLiveConfig:(id)arg1;
- (id)moreLiveButton;
- (void)setMoreLiveButton:(id)arg1;
- (id)headerTapButton;
- (void)setHeaderTapButton:(id)arg1;
- (id)messageBubbleModel;
- (void)setMessageBubbleModel:(id)arg1;
- (id)liveEntranceGuideInfo;
- (void)setLiveEntranceGuideInfo:(id)arg1;
- (void).cxx_destruct;
@end
