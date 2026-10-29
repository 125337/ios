@interface CBTAsstBoardBaseViewModel : NSObject
{
    BOOL _imagePagingForceCloudHistory; // +0x8
    BOOL _isFirstMsgOfNewDialogue; // +0x9
    BOOL _isFromUser; // +0xa
    BOOL _shouldUseZeroInset; // +0xb
    BOOL _isInTableViewInsertAnimation; // +0xc
    BOOL _hasInsertIntoTableView; // +0xd
    BOOL _disableInsertAnimation; // +0xe
    BOOL _needWaitAllStreamDataCompleteLayout; // +0xf
    BOOL _hasBeenExposedDuringStreaming; // +0x10
    BOOL _hasUserInteracted; // +0x11
    BOOL _isSelected; // +0x12
    BOOL _isDeactivated; // +0x13
    BOOL _reportIfActiveRec; // +0x14
    BOOL _reportIsFromFq; // +0x15
    BOOL _reportIsFromShortcuts; // +0x16
    BOOL _reportIsFromEasterEggClick; // +0x17
    BOOL _reportIsBotSayHello; // +0x18
    BOOL _reportHasTaskCenterContext; // +0x19
    BOOL _isMarkdownEmbedded; // +0x1a
    BOOL _hasReportedQueryDisplayed; // +0x1b
    BOOL _isReportingQueryDisplayed; // +0x1c
    BOOL _hasReportedQueryInterrupted; // +0x1d
    BOOL _reportIsAskXiaoweiAutoSend; // +0x1e
    BOOL _pendingFirstTokenReport; // +0x1f
    BOOL _hasReportedFirstTokenInterrupted; // +0x20
    BOOL _hasReportedAnswerCompleted; // +0x21
    BOOL _hasReported; // +0x22
    BOOL _isFromChatSession; // +0x23
    BOOL _needsHapticFeedbackOnInsert; // +0x24
    unsigned int _receiveTime; // +0x28
    int _messageLocalId; // +0x2c
    int _m_chatMesLocalID; // +0x30
    NSString * _referDisplayTextCache; // +0x38
    id <CBTAsstBoardBaseViewModelDelegate> _delegate; // +0x40
    CBTAsstCardWrap * _cardWrap; // +0x48
    CMessageWrap * _msgWrap; // +0x50
    double _cellHeight; // +0x58
    NSString * _extraSaveInfo; // +0x60
    NSString * _traceMsgid; // +0x68
    NSString * _appTraceId; // +0x70
    NSString * _viewStateId; // +0x78
    unsigned long long _createTime; // +0x80
    unsigned long long _createIndex; // +0x88
    long long _viewSource; // +0x90
    long long _lastInteractionType; // +0x98
    long long _messageSvrId; // +0xa0
    long long _userQaSeq; // +0xa8
    long long _messageDialogueId; // +0xb0
    unsigned long long _reportRefQueryId; // +0xb8
    long long _reportAnswerId; // +0xc0
    NSString * _reportVoipSessionID; // +0xc8
    long long _reportEnterScene; // +0xd0
    long long _bubbleIndexInAnswer; // +0xd8
    long long _reportTurnSeq; // +0xe0
    NSString * _reportWelcomeId; // +0xe8
    long long _reportIfTaskCenterCallback; // +0xf0
    long long _reportTaskCenterCallbackBizType; // +0xf8
    long long _reportTaskType; // +0x100
    long long _reportTaskActionType; // +0x108
    NSString * _reportTaskToolName; // +0x110
    NSString * _reportOperation; // +0x118
    long long _reportRecurrenceType; // +0x120
    NSString * _cachedBubbleTypeList; // +0x128
    NSString * _reportQueryText; // +0x130
    long long _reportQueryType; // +0x138
    long long _reportInputAreaType; // +0x140
    unsigned long long _reportUserTalkFinishTs; // +0x148
    unsigned long long _queryDisplayTimestampMs; // +0x150
    NSArray * _reportAttachmentInfoArray; // +0x158
    unsigned long long _firstTokenTimestampMs; // +0x160
    unsigned long long _firstTokenQueryDisplayTs; // +0x168
    unsigned long long _firstTokenLatencyMs; // +0x170
    NSString * _chatUsername; // +0x178
    NSString * _reportTraceMsgid; // +0x180
    NSDictionary * _reportLiteAppOrigin; // +0x188
    NSDictionary * _reportLiteAppHostIds; // +0x190
    double _cbtBubbleReferSizeCacheCellWidth; // +0x198
    NSString * _cbtBubbleReferSizeCacheText; // +0x1a0
    NSString * _cbtBubbleReferSizeCacheCategory; // +0x1a8
    CGSize _cbtBubbleReferSizeCache; // +0x1b0
}
+ (id)cbt_anchorDataWithMsgId:(long long)arg1 traceId:(id)arg2 dialogueId:(long long)arg3 timestampMs:(unsigned long long)arg4;
+ (unsigned long long)genCreateIndex;
+ (Class)boardLegacyCellClass;
+ (id)boardLegacyCellReuseId;
- (BOOL)cbt_imagePagingFollowsChatHistory;
- (id)cbt_buildAnchorBubble;
- (id)cbt_anchorBubbleExtraInfoData;
- (id)cbt_anchorDebugDescription;
- (id)referDisplayTextCache;
- (id)init;
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2;
- (void)configWithMessageWrap:(id)arg1;
- (void)configWithStorageInfo:(id)arg1;
- (id)messageMatchKey;
- (void)setMessageMatchKey:(id)arg1;
- (id)reportReferParams;
- (void)setReportReferParams:(id)arg1;
- (void)tryBackfillStorageInfoIfNeeded;
- (BOOL)canTransToCommonMsg;
- (double)measureEntireCellHeight:(double)arg1;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (BOOL)cbtShouldDisplayRefer;
- (double)cbtBubbleReferExtraHeightWithCellWidth:(double)arg1;
- (CGSize)cbtBubbleReferSizeWithCellWidth:(double)arg1;
- (void)onClickAction;
- (void)setupFirstTokenReportWithTimestamp:(unsigned long long)arg1 queryDisplayTs:(unsigned long long)arg2;
- (id)getCellReuseId;
- (id)createNonReusableCellView;
- (void)didInsertIntoTableView;
- (BOOL)isInteractive;
- (BOOL)shouldDeactivateInteractiveViews;
- (BOOL)shouldDeactivateWhenNewInteractiveViewsAppear;
- (BOOL)isForwardable;
- (BOOL)shouldShowForwardMenuItem;
- (BOOL)hidesInMultiSelectMode;
- (BOOL)isAuxiliaryViewModel;
- (BOOL)isThinkingProcessViewModel;
- (BOOL)participatesInMultiSelectUI;
- (BOOL)cb_isStreamingNotSelectable;
- (id)buildForwardMessageWrapsWithContext:(id)arg1;
- (id)buildForwardHistoryCardWraps;
- (BOOL)shouldUseUnsupportedPlaceholderForForwardHistory;
- (id)copyContent;
- (id)forwardHistoryPlaceholderText;
- (id)forwardHistoryTitleText;
- (id)debugLogContent;
- (id)extraLongPressMenuItemsForCell:(id)arg1 target:(id)arg2;
- (void)onBoardDeactivate;
- (void)onUserDelete;
- (BOOL)shouldReport;
- (BOOL)isSourceFromUser;
- (void)reportExposure;
- (void)setReferDisplayTextCache:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)imagePagingForceCloudHistory;
- (void)setImagePagingForceCloudHistory:(BOOL)arg1;
- (BOOL)isFirstMsgOfNewDialogue;
- (void)setIsFirstMsgOfNewDialogue:(BOOL)arg1;
- (BOOL)isFromUser;
- (void)setIsFromUser:(BOOL)arg1;
- (BOOL)shouldUseZeroInset;
- (void)setShouldUseZeroInset:(BOOL)arg1;
- (id)cardWrap;
- (void)setCardWrap:(id)arg1;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (double)cellHeight;
- (void)setCellHeight:(double)arg1;
- (BOOL)isInTableViewInsertAnimation;
- (void)setIsInTableViewInsertAnimation:(BOOL)arg1;
- (BOOL)hasInsertIntoTableView;
- (void)setHasInsertIntoTableView:(BOOL)arg1;
- (BOOL)disableInsertAnimation;
- (void)setDisableInsertAnimation:(BOOL)arg1;
- (BOOL)needWaitAllStreamDataCompleteLayout;
- (void)setNeedWaitAllStreamDataCompleteLayout:(BOOL)arg1;
- (BOOL)hasBeenExposedDuringStreaming;
- (void)setHasBeenExposedDuringStreaming:(BOOL)arg1;
- (BOOL)hasUserInteracted;
- (void)setHasUserInteracted:(BOOL)arg1;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (id)extraSaveInfo;
- (void)setExtraSaveInfo:(id)arg1;
- (id)traceMsgid;
- (void)setTraceMsgid:(id)arg1;
- (id)appTraceId;
- (void)setAppTraceId:(id)arg1;
- (id)viewStateId;
- (void)setViewStateId:(id)arg1;
- (unsigned long long)createTime;
- (void)setCreateTime:(unsigned long long)arg1;
- (unsigned long long)createIndex;
- (void)setCreateIndex:(unsigned long long)arg1;
- (long long)viewSource;
- (void)setViewSource:(long long)arg1;
- (long long)lastInteractionType;
- (void)setLastInteractionType:(long long)arg1;
- (BOOL)isDeactivated;
- (void)setIsDeactivated:(BOOL)arg1;
- (unsigned int)receiveTime;
- (void)setReceiveTime:(unsigned int)arg1;
- (int)messageLocalId;
- (void)setMessageLocalId:(int)arg1;
- (long long)messageSvrId;
- (void)setMessageSvrId:(long long)arg1;
- (long long)userQaSeq;
- (void)setUserQaSeq:(long long)arg1;
- (long long)messageDialogueId;
- (void)setMessageDialogueId:(long long)arg1;
- (unsigned long long)reportRefQueryId;
- (void)setReportRefQueryId:(unsigned long long)arg1;
- (long long)reportAnswerId;
- (void)setReportAnswerId:(long long)arg1;
- (id)reportVoipSessionID;
- (void)setReportVoipSessionID:(id)arg1;
- (long long)reportEnterScene;
- (void)setReportEnterScene:(long long)arg1;
- (long long)bubbleIndexInAnswer;
- (void)setBubbleIndexInAnswer:(long long)arg1;
- (long long)reportTurnSeq;
- (void)setReportTurnSeq:(long long)arg1;
- (BOOL)reportIfActiveRec;
- (void)setReportIfActiveRec:(BOOL)arg1;
- (BOOL)reportIsFromFq;
- (void)setReportIsFromFq:(BOOL)arg1;
- (BOOL)reportIsFromShortcuts;
- (void)setReportIsFromShortcuts:(BOOL)arg1;
- (BOOL)reportIsFromEasterEggClick;
- (void)setReportIsFromEasterEggClick:(BOOL)arg1;
- (BOOL)reportIsBotSayHello;
- (void)setReportIsBotSayHello:(BOOL)arg1;
- (id)reportWelcomeId;
- (void)setReportWelcomeId:(id)arg1;
- (long long)reportIfTaskCenterCallback;
- (void)setReportIfTaskCenterCallback:(long long)arg1;
- (long long)reportTaskCenterCallbackBizType;
- (void)setReportTaskCenterCallbackBizType:(long long)arg1;
- (long long)reportTaskType;
- (void)setReportTaskType:(long long)arg1;
- (long long)reportTaskActionType;
- (void)setReportTaskActionType:(long long)arg1;
- (id)reportTaskToolName;
- (void)setReportTaskToolName:(id)arg1;
- (id)reportOperation;
- (void)setReportOperation:(id)arg1;
- (long long)reportRecurrenceType;
- (void)setReportRecurrenceType:(long long)arg1;
- (BOOL)reportHasTaskCenterContext;
- (void)setReportHasTaskCenterContext:(BOOL)arg1;
- (id)cachedBubbleTypeList;
- (void)setCachedBubbleTypeList:(id)arg1;
- (BOOL)isMarkdownEmbedded;
- (void)setIsMarkdownEmbedded:(BOOL)arg1;
- (id)reportQueryText;
- (void)setReportQueryText:(id)arg1;
- (long long)reportQueryType;
- (void)setReportQueryType:(long long)arg1;
- (long long)reportInputAreaType;
- (void)setReportInputAreaType:(long long)arg1;
- (unsigned long long)reportUserTalkFinishTs;
- (void)setReportUserTalkFinishTs:(unsigned long long)arg1;
- (BOOL)hasReportedQueryDisplayed;
- (void)setHasReportedQueryDisplayed:(BOOL)arg1;
- (BOOL)isReportingQueryDisplayed;
- (void)setIsReportingQueryDisplayed:(BOOL)arg1;
- (unsigned long long)queryDisplayTimestampMs;
- (void)setQueryDisplayTimestampMs:(unsigned long long)arg1;
- (BOOL)hasReportedQueryInterrupted;
- (void)setHasReportedQueryInterrupted:(BOOL)arg1;
- (id)reportAttachmentInfoArray;
- (void)setReportAttachmentInfoArray:(id)arg1;
- (BOOL)reportIsAskXiaoweiAutoSend;
- (void)setReportIsAskXiaoweiAutoSend:(BOOL)arg1;
- (BOOL)pendingFirstTokenReport;
- (void)setPendingFirstTokenReport:(BOOL)arg1;
- (BOOL)hasReportedFirstTokenInterrupted;
- (void)setHasReportedFirstTokenInterrupted:(BOOL)arg1;
- (unsigned long long)firstTokenTimestampMs;
- (void)setFirstTokenTimestampMs:(unsigned long long)arg1;
- (unsigned long long)firstTokenQueryDisplayTs;
- (void)setFirstTokenQueryDisplayTs:(unsigned long long)arg1;
- (unsigned long long)firstTokenLatencyMs;
- (void)setFirstTokenLatencyMs:(unsigned long long)arg1;
- (BOOL)hasReportedAnswerCompleted;
- (void)setHasReportedAnswerCompleted:(BOOL)arg1;
- (BOOL)hasReported;
- (void)setHasReported:(BOOL)arg1;
- (id)chatUsername;
- (void)setChatUsername:(id)arg1;
- (BOOL)isFromChatSession;
- (void)setIsFromChatSession:(BOOL)arg1;
- (int)m_chatMesLocalID;
- (void)setM_chatMesLocalID:(int)arg1;
- (BOOL)needsHapticFeedbackOnInsert;
- (void)setNeedsHapticFeedbackOnInsert:(BOOL)arg1;
- (id)reportTraceMsgid;
- (void)setReportTraceMsgid:(id)arg1;
- (id)reportLiteAppOrigin;
- (void)setReportLiteAppOrigin:(id)arg1;
- (id)reportLiteAppHostIds;
- (void)setReportLiteAppHostIds:(id)arg1;
- (double)cbtBubbleReferSizeCacheCellWidth;
- (void)setCbtBubbleReferSizeCacheCellWidth:(double)arg1;
- (CGSize)cbtBubbleReferSizeCache;
- (void)setCbtBubbleReferSizeCache:(CGSize)arg1;
- (id)cbtBubbleReferSizeCacheText;
- (void)setCbtBubbleReferSizeCacheText:(id)arg1;
- (id)cbtBubbleReferSizeCacheCategory;
- (void)setCbtBubbleReferSizeCacheCategory:(id)arg1;
- (void).cxx_destruct;
@end
