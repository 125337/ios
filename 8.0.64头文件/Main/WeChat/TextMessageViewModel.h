@interface TextMessageViewModel : CommonMessageViewModel <RichTextLayoutDelegate, ISolitaireMgrExt, ITranslateMsgMgrExt>
{
    NSMutableArray * m_subViewModels; // +0x70
    NSString * m_contentText; // +0x78
    CGSize m_contentTextSize; // +0x80
    NSMutableArray * m_contentTextStyles; // +0x90
    long long m_parserType; // +0x98
    double m_labelWidth; // +0xa0
    NSString * m_contentPatternText; // +0xa8
    double m_contentTextFontLineHeight; // +0xb0
    CGSize m_translatedTextSize; // +0xb8
    NSMutableArray * m_translateTextStyles; // +0xc8
    BOOL m_isSolitaire; // +0xd0
    BOOL m_isShouldLayout; // +0xd1
    UIColor * m_richTextBgColor; // +0xd8
    BOOL m_isLongSplitMsg; // +0xe0
    BOOL m_didCallIsLongSplitMessage; // +0xe1
    BOOL _foldText; // +0xe2
    BOOL _forbidLongSplit; // +0xe3
    BOOL _animateEmojiHasBeenPlayed; // +0xe4
    BOOL _didManuallyTranslateMsg; // +0xe5
    BOOL _isFirstAccess; // +0xe6
    int _customRotorElementIndex; // +0xe8
    NSMutableArray * _translateTextStyles; // +0xf0
    double _translatedLineY; // +0xf8
    double _contentMidY; // +0x100
    NSMutableArray * _originContentTextStyles; // +0x108
    double _contentHeight; // +0x110
    MessageInterceptReporter * _interceptReporter; // +0x118
    double _animateEmojiTimeOffset; // +0x120
    double _extraWidth; // +0x128
    long long _foldMaxLineNumber; // +0x130
    double _foldLastLineWidth; // +0x138
    NSString * _foldContentText; // +0x140
    NSArray * _customRotorElements; // +0x148
    NSArray * _originArrStyles; // +0x150
    CGSize _originalContentSize; // +0x158
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
+ (id)getMessageContent:(id)arg1;
- (BOOL)isLongSplitMessage;
- (BOOL)mm_isLongSplitMessage;
- (id)subViewModels;
- (void)setUpCustomRotorElementWithLinks:(id)arg1 withHandler:(id /* block */)arg2;
- (id)getCustomRotorItemResultWithPredicate:(id)arg1;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (id)cellViewClassName;
- (long long)numberOfRowsInSection;
- (id)cellDataForRow:(unsigned long long)arg1;
- (id)getTextMessageCellView;
- (void)updateChatContact:(id)arg1;
- (id)richTextBgColor;
- (void)setRichTextBgColor:(id)arg1;
- (void)resetLayoutCache;
- (BOOL)shouldShowSourceViewInContent;
- (BOOL)isShowSourceView;
- (BOOL)isSupportSourceViewBottomClick;
- (id)sourceTitle;
- (BOOL)shouldShowWeAppEntranceTail;
- (CGSize)calculateContentTextSize;
- (CGSize)calculateTranslatedTextSize;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (double)contentHeight;
- (id)additionalAccessibilityDescription;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)shouldLayoutIfNeeded;
- (BOOL)shouldShowRoomTodoView;
- (BOOL)foldText;
- (id)contentText;
- (id)originContentText;
- (BOOL)canShowPartialRefer;
- (double)contentTextFontLineHeight;
- (id)contentTextFont;
- (id)contentPatternText;
- (long long)parserType;
- (CGSize)contentTextSize;
- (CGSize)translatedTextSize;
- (id)contentTextStyles;
- (id)originContentTextStyles;
- (id)translateTextStyles;
- (void)setForbidLongSplit:(BOOL)arg1;
- (double)extraWidth;
- (long long)foldMaxLineNumber;
- (double)foldLastLineWidth;
- (BOOL)shouldFoldText;
- (id)getFoldContentText;
- (CGSize)originalContentSize;
- (void)expandSolitaire;
- (double)labelWidth;
- (BOOL)canShowRevokeMsgMenuItem;
- (BOOL)canShowTranslatedText;
- (BOOL)canShowTranslateView;
- (id)translateInfo;
- (_NSRange)getLinkRangeWithTargetLinkStyle:(id)arg1;
- (void)setLinkHighlighted:(BOOL)arg1 url:(id)arg2 frame:(CGRect)arg3;
- (CGRect)realFrameByCurFrame:(CGRect)arg1;
- (id)getMsgTableView;
- (void)setSelectContentType:(int)arg1;
- (CGRect)getInputToolViewFrame;
- (void)adjustTableOffset:(CGRect)arg1 delayForReloadTable:(BOOL)arg2;
- (id)contentTextColor;
- (id)linkTextColor;
- (id)interceptReporter;
- (CGRect)moreButtonFrameForFoldText;
- (_NSRange)selectRangeForFoldText;
- (void)setDidManuallyTranslateMsg:(BOOL)arg1;
- (void)notifyAutoTransButtonExpose;
- (BOOL)canShowAIReply;
- (id)getAIWording;
- (BOOL)canShowAutoTransButton;
- (BOOL)isAutoTransEnable;
- (void)setAutoTransEnable:(BOOL)arg1;
- (double)autoTransHeight;
- (double)sourceFromHeight;
- (BOOL)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (double)lineWidthAtY:(double)arg1 lineIndex:(long long)arg2 richTextView:(id)arg3;
- (BOOL)canShowReplyMessage;
- (BOOL)isShowingRevokedReplyMessage;
- (id)getReplyMsgContent;
- (void)onSolitaireActiveWithChatName:(id)arg1 LocalIds:(id)arg2;
- (void)onSolitaireDeactiveWithChatName:(id)arg1 LocalIds:(id)arg2;
- (void)onSolitaireFoldInfoChange:(id)arg1;
- (CGSize)sizeForContent:(id)arg1 layoutDelegate:(id)arg2 outArrStyles:(id *)arg3;
- (CGSize)sizeForContent:(id)arg1 layoutDelegate:(id)arg2 autoLineSpacing:(BOOL)arg3 outArrStyles:(id *)arg4;
- (id)getRichTextViewConfig;
- (void)onTranslateMessageFailed:(id)arg1 errTip:(id)arg2;
- (void)onTranslateMessageChanged:(id)arg1;
- (id)animateEmoji;
- (BOOL)playAnimatedEmojiWithTextView:(id)arg1 andAnimateEmojiBgView:(id)arg2;
- (void)triggerMagicEmojiAnimation:(id)arg1;
- (void)setContentTextSize:(CGSize)arg1;
- (void)setTranslatedTextSize:(CGSize)arg1;
- (void)setContentTextStyles:(id)arg1;
- (BOOL)bSolitaire;
- (void)setBSolitaire:(BOOL)arg1;
- (void)setOriginalContentSize:(CGSize)arg1;
- (void)setTranslateTextStyles:(id)arg1;
- (double)translatedLineY;
- (void)setTranslatedLineY:(double)arg1;
- (double)contentMidY;
- (void)setContentMidY:(double)arg1;
- (void)setOriginContentTextStyles:(id)arg1;
- (void)setContentHeight:(double)arg1;
- (void)setFoldText:(BOOL)arg1;
- (BOOL)forbidLongSplit;
- (void)setInterceptReporter:(id)arg1;
- (double)animateEmojiTimeOffset;
- (void)setAnimateEmojiTimeOffset:(double)arg1;
- (BOOL)animateEmojiHasBeenPlayed;
- (void)setAnimateEmojiHasBeenPlayed:(BOOL)arg1;
- (BOOL)didManuallyTranslateMsg;
- (void)setExtraWidth:(double)arg1;
- (void)setFoldMaxLineNumber:(long long)arg1;
- (void)setFoldLastLineWidth:(double)arg1;
- (id)foldContentText;
- (void)setFoldContentText:(id)arg1;
- (BOOL)isFirstAccess;
- (void)setIsFirstAccess:(BOOL)arg1;
- (int)customRotorElementIndex;
- (void)setCustomRotorElementIndex:(int)arg1;
- (id)customRotorElements;
- (void)setCustomRotorElements:(id)arg1;
- (id)originArrStyles;
- (void)setOriginArrStyles:(id)arg1;
- (void).cxx_destruct;
@end
