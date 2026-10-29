@interface StreamMDMessageViewModel : CommonMessageViewModel <CBTStreamMDControllerDelegate, IWeClawExt>
{
    BOOL _isThinking; // +0x70
    BOOL _isThinkingExpanded; // +0x71
    BOOL _streamAutoFollowEnabled; // +0x72
    BOOL _ignoreAutoStopFollow; // +0x73
    BOOL _streamCompleted; // +0x74
    id <StreamMDMessageViewModelDelegate> _markdownDelegate; // +0x78
    double _cellHeight; // +0x80
    double _streamAutoScrollAccumulated; // +0x88
    NSString * _originContentText; // +0x90
    NSString * _originThinkingText; // +0x98
    CBTStreamMDController * _resultMDController; // +0xa0
    CBTStreamMDController * _thinkingMDController; // +0xa8
    CBTStreamMDTextView * _streamingResultTextView; // +0xb0
    CBTStreamMDTextView * _streamingThinkingTextView; // +0xb8
    double _m_labelWidth; // +0xc0
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (BOOL)isDisableEditMode;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (void)dealloc;
- (id)originContentText;
- (id)originThinkingText;
- (unsigned int)parseScene;
- (void)checkInitResultController:(BOOL)arg1;
- (void)checkInitThinkingController:(BOOL)arg1;
- (BOOL)isStreaming;
- (id)createStreamMDTextView:(id)arg1;
- (id)createThinkingTextView:(id)arg1;
- (void)prepareForReuse;
- (void)resetLayoutCache;
- (double)labelWidth;
- (double)thinkingTextMaxWidth;
- (double)resultTextMaxWidth;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (double)bubbleWidthForReplyText;
- (void)prepareToDisplay;
- (void)refreshContent;
- (void)prepareThinkingContent;
- (BOOL)isParseCompleted;
- (double)bubbleTopOffset;
- (BOOL)isThinkingStreaming;
- (BOOL)isResultStreaming;
- (BOOL)hasThinkingContent;
- (void)updateTableCacheHeight:(double)arg1;
- (id)resultAttrContent;
- (id)thinkingAttrContent;
- (id)accessibilityMessageType;
- (id)additionalAccessibilityDescription;
- (void)onStreamMDControllerRenderFinished:(id)arg1;
- (void)setIsThinkingExpanded:(BOOL)arg1;
- (void)onWeClawUpdateMsg:(id)arg1 isStreaming:(BOOL)arg2;
- (void)onWeClawStreamReceive:(long long)arg1 fragment:(id)arg2 username:(id)arg3 msgSvrId:(long long)arg4;
- (void)onWeClawStreamEnd:(long long)arg1 username:(id)arg2 msgSvrId:(long long)arg3;
- (void)setCellHeight:(double)arg1;
- (id)cacheKV;
- (id)markdownHeightCacheKey;
- (void)cacheMsgHeight;
- (CGSize)calculateMarkdownSize:(id)arg1;
- (id)markdownDelegate;
- (void)setMarkdownDelegate:(id)arg1;
- (double)cellHeight;
- (BOOL)isThinking;
- (BOOL)isThinkingExpanded;
- (BOOL)streamAutoFollowEnabled;
- (void)setStreamAutoFollowEnabled:(BOOL)arg1;
- (double)streamAutoScrollAccumulated;
- (void)setStreamAutoScrollAccumulated:(double)arg1;
- (BOOL)ignoreAutoStopFollow;
- (void)setIgnoreAutoStopFollow:(BOOL)arg1;
- (void)setOriginContentText:(id)arg1;
- (void)setOriginThinkingText:(id)arg1;
- (id)resultMDController;
- (void)setResultMDController:(id)arg1;
- (id)thinkingMDController;
- (void)setThinkingMDController:(id)arg1;
- (BOOL)streamCompleted;
- (void)setStreamCompleted:(BOOL)arg1;
- (id)streamingResultTextView;
- (void)setStreamingResultTextView:(id)arg1;
- (id)streamingThinkingTextView;
- (void)setStreamingThinkingTextView:(id)arg1;
- (double)m_labelWidth;
- (void)setM_labelWidth:(double)arg1;
- (void).cxx_destruct;
@end
