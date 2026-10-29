@interface CBTAsstBoardMagicBrushViewModel : CBTCoopV2AsstBoardViewModel <WAAgentFrameSetViewObserver, MagicSclFrameSetViewDelegate, IChatBotSnapLinksMgrExt>
{
    BOOL _hideExpand; // +0x8
    BOOL _hasRequestedInsert; // +0x9
    BOOL _isRenderFinished; // +0xa
    BOOL _isBizTimestampInvalid; // +0xb
    BOOL _expired; // +0xc
    BOOL _isMiniToolInvalid; // +0xd
    BOOL _hasLoadedCardState; // +0xe
    BOOL _hasReceivedNonBlankScreenshot; // +0xf
    BOOL _hasReportedReceiveMsg; // +0x10
    unsigned int _containerId; // +0x14
    CBTMagicBrushCardState * _magicBrushCardState; // +0x18
    CBTAsstBoardMagicBrushCellView * _cellView; // +0x20
    NSString * _toolType; // +0x28
    NSString * _miniToolTitle; // +0x30
    NSString * _pagePath; // +0x38
    unsigned long long _canvasRatio; // +0x40
    NSString * _name; // +0x48
    NSString * _appId; // +0x50
    NSString * _sessionId; // +0x58
    NSString * _weAppName; // +0x60
    NSString * _iconURL; // +0x68
    MagicSclFrameSetView * _frameSetView; // +0x70
    UILabel * _titleLabel; // +0x78
    UIImage * _screenshotImage; // +0x80
    NSString * _expiredText; // +0x88
    NSString * _context; // +0x90
    NSString * _contextDownloadUrl; // +0x98
    NSString * _cardContext; // +0xa0
    long long _svrId; // +0xa8
    NSString * _agentSource; // +0xb0
    NSString * _msgId; // +0xb8
    NSString * _roundId; // +0xc0
    NSString * _mbTitleText; // +0xc8
    NSString * _magicBrushBase64; // +0xd0
    NSString * _miniToolSessionId; // +0xd8
    long long _miniToolScene; // +0xe0
    double _cellWidth; // +0xe8
    NSString * _renderCardPayload; // +0xf0
    NSString * _expandPagePath; // +0xf8
    NSString * _expandAppId; // +0x100
    NSString * _expandEnvVersion; // +0x108
    WAAgentRuntimeHalfScreenCardView * _halfScreenManager; // +0x110
    Agent2ClientEvent * _parsedProtoEvent; // +0x118
    WAAgentDownstreamContext * _downstreamContext; // +0x120
}
+ (id)magicBrushMMKV;
+ (id)uniqTagSuffixWithChatUsername:(id)arg1;
+ (id)uniqTagWithLocalId:(int)arg1 chatUsername:(id)arg2;
+ (id)uniqTagWithSvrId:(long long)arg1 chatUsername:(id)arg2;
+ (void)cleanMagicBrushCacheForMessage:(id)arg1 chatUsername:(id)arg2;
+ (void)cleanAllMagicBrushCacheForChatUsername:(id)arg1;
- (int)mbType;
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2 name:(id)arg3;
- (void)dealloc;
- (id)boardRecycleManager;
- (BOOL)isImagePureBlackOrWhite:(id)arg1;
- (id)uniqTagLocalId;
- (id)uniqTag;
- (id)uniqTagArr;
- (id)screenshotFileNameArr;
- (void)saveScreenshotImage:(id)arg1;
- (void)readScreenshotImage:(id /* block */)arg1;
- (void)retrySnapshotIfNeeded;
- (void)deleteScreenshotImage;
- (void)loadMagicBrushCardStateIfNeeded;
- (void)checkMiniToolInvalid;
- (void)markMiniToolInvalidAndTeardownWithReason:(id)arg1;
- (void)saveMagicBrushCardState;
- (void)updateMagicBrushCardSize:(CGSize)arg1;
- (void)configWithMessageWrap:(id)arg1;
- (void)setMessageSvrId:(long long)arg1;
- (void)setViewSource:(long long)arg1;
- (void)registerFrameSetViewCallback;
- (void)onFrameSetViewCreated:(id)arg1 frameId:(unsigned int)arg2 containerId:(unsigned int)arg3;
- (void)onCardExpired:(id)arg1 containerId:(unsigned int)arg2;
- (void)onPresentCardInHalfScreen:(id)arg1 containerId:(unsigned int)arg2;
- (void)onDismissHalfScreenCard:(unsigned int)arg1;
- (void)onCardSnapshot:(unsigned int)arg1 image:(id)arg2;
- (void)ensureTitleLayoutForMainThread;
- (void)onFrameSetViewReady:(id)arg1 frameId:(unsigned int)arg2;
- (void)adjustTableOffset;
- (void)onUpdateCardRelatedPage:(unsigned int)arg1 appId:(id)arg2 path:(id)arg3 envVersion:(id)arg4;
- (void)onMagicSclFrameSetViewSizeChange:(id)arg1;
- (id)agentRuntimeSceneInstanceHandle;
- (id)agentDownstreamContext;
- (BOOL)sendAgentToolsCardWithCanvasSize:(CGSize)arg1 isLocalReplay:(BOOL)arg2;
- (void)requestInsertAgentCard:(CGSize)arg1;
- (BOOL)triggerSendToolsCardForRebuild;
- (void)bindCardMetadata;
- (BOOL)tryAcquireRunningInstance;
- (BOOL)shouldUseUnsupportedPlaceholderForForwardHistory;
- (id)coopV2ReportCardTitle;
- (id)copyContent;
- (id)forwardHistoryTitleText;
- (id)getXiaoweiUserName;
- (BOOL)parseRenderCardFromXml;
- (void)parseMiniToolXML:(id)arg1;
- (unsigned long long)parseMiniToolCanvasRatio:(id)arg1;
- (void)buildMiniToolMsgWrap;
- (void)openWeAppFromViewController:(id)arg1;
- (void)openExpandWeApp;
- (double)canvasRatioValue;
- (void)onUserDelete;
- (BOOL)shouldShowForwardMenuItem;
- (id)getCellReuseId;
- (id)createNonReusableCellView;
- (double)bubbleWidthForCellWidth:(double)arg1;
- (double)bubbleHeightForCellWidth:(double)arg1;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (double)cardContentWidth;
- (double)cardContentHeight;
- (void)onMiniToolChanged;
- (void)onClickAction;
- (void)setHasInsertIntoTableView:(BOOL)arg1;
- (void)reportCardMsgWithEventType:(unsigned long long)arg1;
- (id)magicBrushCardState;
- (void)setMagicBrushCardState:(id)arg1;
- (id)cellView;
- (void)setCellView:(id)arg1;
- (id)toolType;
- (void)setToolType:(id)arg1;
- (id)miniToolTitle;
- (void)setMiniToolTitle:(id)arg1;
- (id)pagePath;
- (void)setPagePath:(id)arg1;
- (unsigned long long)canvasRatio;
- (void)setCanvasRatio:(unsigned long long)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)weAppName;
- (void)setWeAppName:(id)arg1;
- (id)iconURL;
- (void)setIconURL:(id)arg1;
- (BOOL)hideExpand;
- (void)setHideExpand:(BOOL)arg1;
- (unsigned int)containerId;
- (void)setContainerId:(unsigned int)arg1;
- (id)frameSetView;
- (void)setFrameSetView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)screenshotImage;
- (void)setScreenshotImage:(id)arg1;
- (BOOL)hasRequestedInsert;
- (void)setHasRequestedInsert:(BOOL)arg1;
- (BOOL)isRenderFinished;
- (void)setIsRenderFinished:(BOOL)arg1;
- (BOOL)isBizTimestampInvalid;
- (void)setIsBizTimestampInvalid:(BOOL)arg1;
- (BOOL)expired;
- (void)setExpired:(BOOL)arg1;
- (BOOL)isMiniToolInvalid;
- (void)setIsMiniToolInvalid:(BOOL)arg1;
- (id)expiredText;
- (void)setExpiredText:(id)arg1;
- (id)context;
- (id)contextDownloadUrl;
- (id)cardContext;
- (void)setCardContext:(id)arg1;
- (long long)svrId;
- (void)setSvrId:(long long)arg1;
- (id)agentSource;
- (void)setAgentSource:(id)arg1;
- (id)msgId;
- (void)setMsgId:(id)arg1;
- (id)roundId;
- (void)setRoundId:(id)arg1;
- (id)mbTitleText;
- (void)setMbTitleText:(id)arg1;
- (id)magicBrushBase64;
- (void)setMagicBrushBase64:(id)arg1;
- (id)miniToolSessionId;
- (void)setMiniToolSessionId:(id)arg1;
- (long long)miniToolScene;
- (void)setMiniToolScene:(long long)arg1;
- (double)cellWidth;
- (void)setCellWidth:(double)arg1;
- (BOOL)hasLoadedCardState;
- (void)setHasLoadedCardState:(BOOL)arg1;
- (BOOL)hasReceivedNonBlankScreenshot;
- (void)setHasReceivedNonBlankScreenshot:(BOOL)arg1;
- (id)renderCardPayload;
- (void)setRenderCardPayload:(id)arg1;
- (id)expandPagePath;
- (void)setExpandPagePath:(id)arg1;
- (id)expandAppId;
- (void)setExpandAppId:(id)arg1;
- (id)expandEnvVersion;
- (void)setExpandEnvVersion:(id)arg1;
- (id)halfScreenManager;
- (void)setHalfScreenManager:(id)arg1;
- (BOOL)hasReportedReceiveMsg;
- (void)setHasReportedReceiveMsg:(BOOL)arg1;
- (id)parsedProtoEvent;
- (void)setParsedProtoEvent:(id)arg1;
- (id)downstreamContext;
- (void)setDownstreamContext:(id)arg1;
- (void).cxx_destruct;
@end
