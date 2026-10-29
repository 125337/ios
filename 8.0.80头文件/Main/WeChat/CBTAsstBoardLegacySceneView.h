@interface CBTAsstBoardLegacySceneView : UIView <MMChatbotCardSceneBusiness, CBTAsstBoardBaseCellViewDelegate, CBTAsstBoardBaseViewModelDelegate>
{
    BOOL _readyReported; // +0x8
    MMChatbotCardSceneContext * _sceneContext; // +0x10
    NSString * _nativeFamily; // +0x18
    NSString * _titleText; // +0x20
    NSString * _subtitleText; // +0x28
    NSString * _itemType; // +0x30
    long long _cardTypeForDebug; // +0x38
    NSString * _lastProbePath; // +0x40
    NSString * _lastProbeReason; // +0x48
    NSString * _voipSessionId; // +0x50
    UILabel * _familyLabel; // +0x58
    UILabel * _titleLabel; // +0x60
    UILabel * _subtitleLabel; // +0x68
    CBTAsstBoardBaseViewModel * _legacyViewModel; // +0x70
    CBTAsstBoardBaseCellView * _legacyCellView; // +0x78
    CBTAsstBoardForwardManager * _forwardMgr; // +0x80
    CBTAsstBoardBaseViewModel * _pendingFeedbackViewModel; // +0x88
    double _lastReportedHeight; // +0x90
}
- (id)initWithSceneContext:(id)arg1;
- (void)dealloc;
- (void)onUpdate:(id)arg1;
- (void)layoutSubviews;
- (void)buildPlaceholderContent;
- (BOOL)buildLegacyContentIfPossible;
- (void)rebuildLegacyContent;
- (void)teardownCurrentContent;
- (void)applyPayload:(id)arg1;
- (long long)pageModeFromPayload:(id)arg1;
- (void)refreshTexts;
- (void)reportReadyIfNeeded;
- (void)reportHeightIfNeeded;
- (double)measuredContentHeight;
- (void)setupLegacyCellFrame;
- (void)setupLegacyCellFrameForCell:(id)arg1;
- (double)availableContentWidth;
- (id)cardWrapFromPayload:(id)arg1;
- (id)dataFromObject:(id)arg1;
- (id)stringFromObject:(id)arg1 fallback:(id)arg2;
- (id)voipSession;
- (void)onCellHeightUpdate:(double)arg1 cell:(id)arg2;
- (void)onCellHeightUpdate:(double)arg1 cell:(id)arg2 animated:(BOOL)arg3 completion:(id /* block */)arg4;
- (id)getBoardTableView;
- (id)getDataController;
- (id)sendTextToBoard:(id)arg1 isFromUser:(BOOL)arg2;
- (id)sendTextToBoard:(id)arg1 isFromUser:(BOOL)arg2 shouldActiveLoading:(BOOL)arg3;
- (void)onNeedUpdateViewModel:(id)arg1;
- (void)onForwardViewModel:(id)arg1;
- (void)onForwardViewModels:(id)arg1;
- (void)onMultiSelectFromCell:(id)arg1;
- (void)onShowDebugLogForViewModel:(id)arg1;
- (void)onFeedbackFromCell:(id)arg1;
- (double)getHalfScreenContentHeight;
- (void)handleInteractiveCardEventWithCardData:(id)arg1 actionKey:(id)arg2 viewModel:(id)arg3;
- (void)setupFeedbackObserversIfNeeded;
- (id)hostViewController;
- (id)forwardManager;
- (void)handleFeedbackSubmittedNotification:(id)arg1;
- (void)handleFeedbackPageDismissedNotification:(id)arg1;
- (id)sceneContext;
- (void)setSceneContext:(id)arg1;
- (id)nativeFamily;
- (void)setNativeFamily:(id)arg1;
- (id)titleText;
- (void)setTitleText:(id)arg1;
- (id)subtitleText;
- (void)setSubtitleText:(id)arg1;
- (id)itemType;
- (void)setItemType:(id)arg1;
- (long long)cardTypeForDebug;
- (void)setCardTypeForDebug:(long long)arg1;
- (id)lastProbePath;
- (void)setLastProbePath:(id)arg1;
- (id)lastProbeReason;
- (void)setLastProbeReason:(id)arg1;
- (id)voipSessionId;
- (void)setVoipSessionId:(id)arg1;
- (id)familyLabel;
- (void)setFamilyLabel:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)legacyViewModel;
- (void)setLegacyViewModel:(id)arg1;
- (id)legacyCellView;
- (void)setLegacyCellView:(id)arg1;
- (id)forwardMgr;
- (void)setForwardMgr:(id)arg1;
- (id)pendingFeedbackViewModel;
- (void)setPendingFeedbackViewModel:(id)arg1;
- (double)lastReportedHeight;
- (void)setLastReportedHeight:(double)arg1;
- (BOOL)readyReported;
- (void)setReadyReported:(BOOL)arg1;
- (void).cxx_destruct;
@end
