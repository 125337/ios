@interface CBTTextAttachment : NSTextAttachment
{
    BOOL _streaming; // +0x8
    BOOL _codeBlockCompleted; // +0x9
    BOOL _isLoadingDot; // +0xa
    unsigned int _type; // +0xc
    CBTStreamTextAttachmentInfo * _info; // +0x10
    CBTMDStyleConfig * _config; // +0x18
    double _orderListPrefixWidth; // +0x20
    double _listIndent; // +0x28
    id <CBTAttachmentStreamHeightObserver> _streamHeightObserver; // +0x30
    CBTStreamMDFeeder * _tableMainFeeder; // +0x38
    CBTMDTableDataController * _tableDataController; // +0x40
    NSString * _codeBlockLanguage; // +0x48
    NSString * _codeBlockContent; // +0x50
    CBTStreamMDFeeder * _codeBlockSubFeeder; // +0x58
    id /* block */ _codeBlockStreamTaskCompleteHandle; // +0x60
    NSString * _latexString; // +0x68
    double _maxAvailableWidth; // +0x70
    NSArray * _footnoteDefinitions; // +0x78
    NSArray * _imageUrls; // +0x80
    CBTAsstCardWrap * _asstCardWrap; // +0x88
    NSArray * _asstCardWraps; // +0x90
    NSDictionary * _loadingDotAttributes; // +0x98
    CGRect _attachmentFrame; // +0xa0
}
+ (id)emptyImage;
+ (id)attributedStringForCode:(id)arg1 style:(id)arg2;
- (id)initWithType:(unsigned int)arg1 info:(id)arg2 config:(id)arg3;
- (id)effectiveFont;
- (double)lineSpacing;
- (void)configFrameWithWidth:(double)arg1;
- (CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (double)verticalOffsetForLineHeight:(double)arg1;
- (CGRect)getLayoutFrameForGlyphRect:(CGRect)arg1 atPoint:(CGPoint)arg2 baselineY:(double)arg3;
- (double)calculateCodeBlockHeightForWidth:(double)arg1;
- (id)cachedSingleImage;
- (double)calculateSingleImageHeightWithImage:(id)arg1 containerWidth:(double)arg2;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (CGRect)attachmentFrame;
- (void)setAttachmentFrame:(CGRect)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (double)orderListPrefixWidth;
- (void)setOrderListPrefixWidth:(double)arg1;
- (double)listIndent;
- (void)setListIndent:(double)arg1;
- (BOOL)streaming;
- (void)setStreaming:(BOOL)arg1;
- (id)streamHeightObserver;
- (void)setStreamHeightObserver:(id)arg1;
- (id)tableMainFeeder;
- (void)setTableMainFeeder:(id)arg1;
- (id)tableDataController;
- (void)setTableDataController:(id)arg1;
- (id)codeBlockLanguage;
- (void)setCodeBlockLanguage:(id)arg1;
- (id)codeBlockContent;
- (void)setCodeBlockContent:(id)arg1;
- (BOOL)codeBlockCompleted;
- (void)setCodeBlockCompleted:(BOOL)arg1;
- (id)codeBlockSubFeeder;
- (void)setCodeBlockSubFeeder:(id)arg1;
- (id /* block */)codeBlockStreamTaskCompleteHandle;
- (void)setCodeBlockStreamTaskCompleteHandle:(id /* block */)arg1;
- (id)latexString;
- (void)setLatexString:(id)arg1;
- (double)maxAvailableWidth;
- (void)setMaxAvailableWidth:(double)arg1;
- (id)footnoteDefinitions;
- (void)setFootnoteDefinitions:(id)arg1;
- (id)imageUrls;
- (void)setImageUrls:(id)arg1;
- (id)asstCardWrap;
- (void)setAsstCardWrap:(id)arg1;
- (id)asstCardWraps;
- (void)setAsstCardWraps:(id)arg1;
- (BOOL)isLoadingDot;
- (void)setIsLoadingDot:(BOOL)arg1;
- (id)loadingDotAttributes;
- (void)setLoadingDotAttributes:(id)arg1;
- (void).cxx_destruct;
@end
