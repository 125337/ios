@interface CBTStreamMDParseLogic : NSObject <CBTStreamMDParserDelegateInterfaceBase>
{
    BOOL _streaming; // +0x8
    BOOL _isParseCompleted; // +0x9
    BOOL _hasNotifiedParseFinished; // +0xa
    BOOL _insideBlockquote; // +0xb
    BOOL _insideMathBlock; // +0xc
    unsigned int _scene; // +0x10
    CBTMDStyleConfig * _config; // +0x18
    NSString * _identifier; // +0x20
    id <CBTStreamMDParseLogicDelegate> _delegate; // +0x28
    CBTStreamMDCppParser * _mdParser; // +0x30
    CBTStreamMDParserDelegateInterfaceCallback * _mdParserCallback; // +0x38
    CBTMDTableDataController * _curActiveTableDataController; // +0x40
    NSMutableArray * _pendingTextWrapList; // +0x48
    unsigned long long _curTableSourceFullEnd; // +0x50
    CBTTextAttachment * _curActiveCodeBlockAttachment; // +0x58
    double _pbDeserializeDurationPerWrap; // +0x60
    CBTMDListBlockContext * _currentListBlockContext; // +0x68
    unsigned long long _nextListBlockContextId; // +0x70
    unsigned long long _pendingNewlineCount; // +0x78
    NSDictionary * _pendingNewLineAttribute; // +0x80
    unsigned long long _pendingNewlineQuoteLevel; // +0x88
    NSMutableString * _pendingMathBlockContent; // +0x90
    NSMutableArray * _pendingImageWrapList; // +0x98
    NSMutableArray * _pendingCardWrapList; // +0xa0
    NSString * _pendingCardGroupIdentifier; // +0xa8
    NSAttributedString * _pendingCardPrefix; // +0xb0
}
+ (id)colorFromMarkdownFontColorString:(id)arg1;
+ (id)ParagraphStyleWithStyle:(id)arg1;
+ (id)AttributeWithStyle:(id)arg1;
- (void)applyAutoLinkDetectionIfNeeded:(id)arg1 contentWrap:(id)arg2;
- (void)applyAutoLinkDetection:(id)arg1;
- (id)initWithDelegate:(id)arg1 config:(id)arg2;
- (void)destoryParser;
- (BOOL)isParserInited;
- (void)dealloc;
- (BOOL)isSceneSupportAllType;
- (void)updateTableAttachmentSourceRangeFullEnd:(unsigned long long)arg1;
- (id)sourceRangeValueFromWrap:(id)arg1;
- (id)style;
- (void)initParser;
- (void)appendContent:(id)arg1 isEnd:(BOOL)arg2;
- (BOOL)isInlineAttachment:(id)arg1;
- (id)buildAttributeString:(id)arg1;
- (BOOL)isListType:(id)arg1;
- (id)inlineCodeSpacerWithAttributes:(id)arg1 hasBackground:(BOOL)arg2;
- (id)buildAttribute:(id)arg1;
- (BOOL)isOnBlockStreamTask;
- (BOOL)hasCurActiveBlockReceiveAllChunk;
- (void)completeBlockStreamTask;
- (id)createTableConfig;
- (id)buildTableAttributeString:(id)arg1;
- (BOOL)isParseCompleted;
- (void)handleTextWrapList:(id)arg1;
- (void)flushPendingImages;
- (id)horizontalGroupIdentifierForCardWrap:(id)arg1;
- (void)flushPendingCards;
- (id)buildBusinessJumpAttributeStringWithCardWrap:(id)arg1 textWrap:(id)arg2;
- (id)businessJumpIconGapSpacerWithAttributes:(id)arg1;
- (id)businessJumpIconAttributedStringWithAttributes:(id)arg1;
- (void)updateListBlockContextForNodeType:(unsigned int)arg1 content:(id)arg2 attachmentInfo:(id)arg3;
- (void)finishCurrentListBlock;
- (id)flushPendingNewlines;
- (id)buildMergedNewlineAttributeString;
- (id)buildParagraphSpacingAttributedString:(id)arg1;
- (void)checkToCompleteParse;
- (void)backfillListBlockIndent:(id)arg1;
- (void)backfillListBlockIndentInAttrContent:(id)arg1 listBlockContext:(id)arg2;
- (void)backFillCodeBlockIndent:(id)arg1 listContext:(id)arg2 attrContent:(id)arg3 range:(_NSRange)arg4;
- (void)setCallback:(id)arg1;
- (void)onGeneratedContentAsync:(unsigned long long)arg1 contentList:(id)arg2;
- (void)onGeneratedFootnoteDefAsync:(unsigned long long)arg1 footnoteDefList:(id)arg2;
- (void)onParseCompletedAsync:(unsigned long long)arg1;
- (BOOL)streaming;
- (void)setStreaming:(BOOL)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)mdParser;
- (void)setMdParser:(id)arg1;
- (void)setIsParseCompleted:(BOOL)arg1;
- (BOOL)hasNotifiedParseFinished;
- (void)setHasNotifiedParseFinished:(BOOL)arg1;
- (id)mdParserCallback;
- (void)setMdParserCallback:(id)arg1;
- (id)curActiveTableDataController;
- (void)setCurActiveTableDataController:(id)arg1;
- (id)pendingTextWrapList;
- (void)setPendingTextWrapList:(id)arg1;
- (unsigned long long)curTableSourceFullEnd;
- (void)setCurTableSourceFullEnd:(unsigned long long)arg1;
- (id)curActiveCodeBlockAttachment;
- (void)setCurActiveCodeBlockAttachment:(id)arg1;
- (double)pbDeserializeDurationPerWrap;
- (void)setPbDeserializeDurationPerWrap:(double)arg1;
- (id)currentListBlockContext;
- (void)setCurrentListBlockContext:(id)arg1;
- (unsigned long long)nextListBlockContextId;
- (void)setNextListBlockContextId:(unsigned long long)arg1;
- (BOOL)insideBlockquote;
- (void)setInsideBlockquote:(BOOL)arg1;
- (unsigned long long)pendingNewlineCount;
- (void)setPendingNewlineCount:(unsigned long long)arg1;
- (id)pendingNewLineAttribute;
- (void)setPendingNewLineAttribute:(id)arg1;
- (unsigned long long)pendingNewlineQuoteLevel;
- (void)setPendingNewlineQuoteLevel:(unsigned long long)arg1;
- (BOOL)insideMathBlock;
- (void)setInsideMathBlock:(BOOL)arg1;
- (id)pendingMathBlockContent;
- (void)setPendingMathBlockContent:(id)arg1;
- (id)pendingImageWrapList;
- (void)setPendingImageWrapList:(id)arg1;
- (id)pendingCardWrapList;
- (void)setPendingCardWrapList:(id)arg1;
- (id)pendingCardGroupIdentifier;
- (void)setPendingCardGroupIdentifier:(id)arg1;
- (id)pendingCardPrefix;
- (void)setPendingCardPrefix:(id)arg1;
- (void).cxx_destruct;
@end
