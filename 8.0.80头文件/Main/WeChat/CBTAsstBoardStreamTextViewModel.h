@interface CBTAsstBoardStreamTextViewModel : CBTAsstBoardBaseViewModel <CBTStreamMDParseLogicDelegate, CBTStreamMDControllerDelegate>
{
    BOOL _isUserASRContent; // +0x8
    BOOL _isStop; // +0x9
    BOOL _isFirstGreeting; // +0xa
    BOOL _hasReceiveAllStreamData; // +0xb
    BOOL _bCanceld; // +0xc
    BOOL _isStarTransform; // +0xd
    BOOL _skipScrollToTopOnInsertComplete; // +0xe
    BOOL _isLoading; // +0xf
    BOOL _hasPickerLink; // +0x10
    BOOL _isPickerLinkDeactivated; // +0x11
    BOOL _hasLayoutBefore; // +0x12
    BOOL _hasReportedReceiveMsg; // +0x13
    BOOL _hasStreamEnded; // +0x14
    BOOL _isLeadingEdgeSent; // +0x15
    unsigned int _loadingDotIndex; // +0x18
    NSAttributedString * _attributeContent; // +0x20
    NSString * _originContentText; // +0x28
    NSString * _streamTextIdentifier; // +0x30
    long long _scene; // +0x38
    NSMutableArray * _footnoteDefInfoList; // +0x40
    NSDictionary * _imageSourceUrlDic; // +0x48
    id <CBTAsstBoardStreamTextViewModelUIDelegate> _uiDelegate; // +0x50
    NSMutableSet * _coopV2ContentCardExposureRegistry; // +0x58
    NSMutableSet * _richLinkExposureRegistry; // +0x60
    NSMutableSet * _chatBotLinkExposureRegistry; // +0x68
    CBTStreamMDController * _mdController; // +0x70
    CBTAsstCardWrap_ContentRefInfo * _contentRefInfoForForwardHistory; // +0x78
    NSString * _forwardHistoryTextOutputId; // +0x80
    long long _coopV2ContentCardExposureResetToken; // +0x88
    long long _richLinkExposureResetToken; // +0x90
    long long _chatBotLinkExposureResetToken; // +0x98
    MMTimer * _loadingTimer; // +0xa0
    NSMutableString * _streamTextBuffer; // +0xa8
    MMTimer * _throttleTimer; // +0xb0
}
+ (id)ContentFont;
- (id)ParagraphStyle;
- (id)defaultAttribute;
- (id)init;
- (id)initWithStreaming:(BOOL)arg1;
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2;
- (void)setHasInsertIntoTableView:(BOOL)arg1;
- (void)tryReportReceiveTextMsg;
- (void)reportClickWeAppLinkWithJumpAppid:(id)arg1 jumpPath:(id)arg2;
- (BOOL)shouldReport;
- (double)getLineSpacing;
- (id)getContentTextView;
- (void)dealloc;
- (id)attributeContent;
- (void)setAttributeContent:(id)arg1;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (id)getLabelColor;
- (double)maxBubbleWidthWithCellWidth:(double)arg1;
- (double)maxTextWidthWithCellWidth:(double)arg1;
- (BOOL)isSourceFromUser;
- (id)getCellReuseId;
- (void)pushStreamText:(id)arg1 isEnd:(BOOL)arg2;
- (void)scheduleThrottleTimerIfNeeded;
- (void)consumeStreamBuffer;
- (void)stopThrottleTimer;
- (void)flushStreamBuffer;
- (void)startLoading;
- (void)stopLoading;
- (void)onLoadingTimerFired;
- (void)updateLoadingContent;
- (BOOL)hasCompleteParseAndStreamTextLayout;
- (void)setHasReceiveAllStreamData:(BOOL)arg1;
- (void)setIsStop:(BOOL)arg1;
- (BOOL)isParseCompleted;
- (void)setupContentRefInfo:(id)arg1;
- (void)setupImageSourceInfo:(id)arg1;
- (void)bindTextView:(id)arg1;
- (void)flushStreamContent;
- (void)scaleFontsByRatio:(double)arg1;
- (void)onStreamMDParseFinished:(id)arg1;
- (void)onStreamMDControllerRenderFinished:(id)arg1;
- (void)onGeneratedFootnoteDefInfo:(id)arg1 controller:(id)arg2;
- (id)copyContent;
- (id)exportTextForForward;
- (id)rawStreamTextForForwardHistory;
- (id)forwardHistoryTitleText;
- (id)plainTextForForward;
- (id)_plainTextForAttachment:(id)arg1;
- (id)_markdownTextForTableDataController:(id)arg1;
- (void)onGeneratedFootnoteDefInfo:(id)arg1;
- (BOOL)isForwardable;
- (BOOL)participatesInMultiSelectUI;
- (BOOL)cb_isStreamingNotSelectable;
- (id)buildForwardMessageWrapsWithContext:(id)arg1;
- (id)buildForwardHistoryCardWraps;
- (id)forwardHistoryResolvedTextOutputId;
- (id)forwardHistoryContentRefWrapWithTextOutputId:(id)arg1;
- (id)sanitizeMultimodalContentForForward:(id)arg1;
- (id)coopV2ContentCardExposureRegistry;
- (void)coopV2NoteContentCardHostDidAppear;
- (void)coopV2NoteContentCardHostDidDisappear;
- (void)richLinkNoteHostDidAppear;
- (void)richLinkNoteHostDidDisappear;
- (BOOL)hasPickerLink;
- (BOOL)isPickerLinkDeactivated;
- (void)deactivatePickerLinks;
- (void)cbt_detectPickerLinkInText:(id)arg1;
- (id)chatBotLinkExposureRegistry;
- (void)chatBotLinkNoteHostDidAppear;
- (void)chatBotLinkNoteHostDidDisappear;
- (id)originContentText;
- (void)setOriginContentText:(id)arg1;
- (BOOL)isUserASRContent;
- (void)setIsUserASRContent:(BOOL)arg1;
- (id)streamTextIdentifier;
- (void)setStreamTextIdentifier:(id)arg1;
- (BOOL)isStop;
- (BOOL)isFirstGreeting;
- (void)setIsFirstGreeting:(BOOL)arg1;
- (BOOL)hasReceiveAllStreamData;
- (BOOL)bCanceld;
- (void)setBCanceld:(BOOL)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (BOOL)isStarTransform;
- (void)setIsStarTransform:(BOOL)arg1;
- (BOOL)skipScrollToTopOnInsertComplete;
- (void)setSkipScrollToTopOnInsertComplete:(BOOL)arg1;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (id)footnoteDefInfoList;
- (void)setFootnoteDefInfoList:(id)arg1;
- (id)imageSourceUrlDic;
- (void)setImageSourceUrlDic:(id)arg1;
- (id)uiDelegate;
- (void)setUiDelegate:(id)arg1;
- (void)setCoopV2ContentCardExposureRegistry:(id)arg1;
- (id)richLinkExposureRegistry;
- (void)setRichLinkExposureRegistry:(id)arg1;
- (void)setHasPickerLink:(BOOL)arg1;
- (void)setIsPickerLinkDeactivated:(BOOL)arg1;
- (void)setChatBotLinkExposureRegistry:(id)arg1;
- (id)mdController;
- (void)setMdController:(id)arg1;
- (BOOL)hasLayoutBefore;
- (void)setHasLayoutBefore:(BOOL)arg1;
- (BOOL)hasReportedReceiveMsg;
- (void)setHasReportedReceiveMsg:(BOOL)arg1;
- (BOOL)hasStreamEnded;
- (void)setHasStreamEnded:(BOOL)arg1;
- (id)contentRefInfoForForwardHistory;
- (void)setContentRefInfoForForwardHistory:(id)arg1;
- (id)forwardHistoryTextOutputId;
- (void)setForwardHistoryTextOutputId:(id)arg1;
- (long long)coopV2ContentCardExposureResetToken;
- (void)setCoopV2ContentCardExposureResetToken:(long long)arg1;
- (long long)richLinkExposureResetToken;
- (void)setRichLinkExposureResetToken:(long long)arg1;
- (long long)chatBotLinkExposureResetToken;
- (void)setChatBotLinkExposureResetToken:(long long)arg1;
- (unsigned int)loadingDotIndex;
- (void)setLoadingDotIndex:(unsigned int)arg1;
- (id)loadingTimer;
- (void)setLoadingTimer:(id)arg1;
- (id)streamTextBuffer;
- (void)setStreamTextBuffer:(id)arg1;
- (id)throttleTimer;
- (void)setThrottleTimer:(id)arg1;
- (BOOL)isLeadingEdgeSent;
- (void)setIsLeadingEdgeSent:(BOOL)arg1;
- (void).cxx_destruct;
@end
