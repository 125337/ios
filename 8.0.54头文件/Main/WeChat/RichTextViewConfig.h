@interface RichTextViewConfig : NSObject
{
    BOOL _useRedesignLinespacing; // +0x8
    BOOL _lineBreakByClipping; // +0x9
    unsigned int _linkTextVisiableLength; // +0xc
    NSString * _prefixContent; // +0x10
    NSString * _content; // +0x18
    NSString * _parserString; // +0x20
    NSString * _suffixContent; // +0x28
    UIFont * _font; // +0x30
    double _fWidth; // +0x38
    double _lineSpacing; // +0x40
    unsigned long long _lineNumber; // +0x48
    unsigned long long _parserType; // +0x50
    id <RichTextLayoutDelegate> _layoutDelegate; // +0x58
    double _originX; // +0x60
    UIColor * _linkColor; // +0x68
    UIColor * _linkHighlightColor; // +0x70
    double _rightIconPadding; // +0x78
    NSString * _truncatedTrailingLinkText; // +0x80
    NSString * _truncatedTrailingLinkUrl; // +0x88
    UIColor * _truncatedTrailingLinkColor; // +0x90
}
- (id)prefixContent;
- (void)setPrefixContent:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (id)parserString;
- (void)setParserString:(id)arg1;
- (id)suffixContent;
- (void)setSuffixContent:(id)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (double)fWidth;
- (void)setFWidth:(double)arg1;
- (double)lineSpacing;
- (void)setLineSpacing:(double)arg1;
- (unsigned long long)lineNumber;
- (void)setLineNumber:(unsigned long long)arg1;
- (unsigned int)linkTextVisiableLength;
- (void)setLinkTextVisiableLength:(unsigned int)arg1;
- (unsigned long long)parserType;
- (void)setParserType:(unsigned long long)arg1;
- (id)layoutDelegate;
- (void)setLayoutDelegate:(id)arg1;
- (double)originX;
- (void)setOriginX:(double)arg1;
- (id)linkColor;
- (void)setLinkColor:(id)arg1;
- (id)linkHighlightColor;
- (void)setLinkHighlightColor:(id)arg1;
- (double)rightIconPadding;
- (void)setRightIconPadding:(double)arg1;
- (BOOL)useRedesignLinespacing;
- (void)setUseRedesignLinespacing:(BOOL)arg1;
- (BOOL)lineBreakByClipping;
- (void)setLineBreakByClipping:(BOOL)arg1;
- (id)truncatedTrailingLinkText;
- (void)setTruncatedTrailingLinkText:(id)arg1;
- (id)truncatedTrailingLinkUrl;
- (void)setTruncatedTrailingLinkUrl:(id)arg1;
- (id)truncatedTrailingLinkColor;
- (void)setTruncatedTrailingLinkColor:(id)arg1;
- (void).cxx_destruct;
@end

