@interface TextStyle : BaseStyle
{
    UIFont * _oFont; // +0x30
    NSString * _nsContent; // +0x38
    UIColor * _oTextColor; // +0x40
    UIColor * _oDrawColor; // +0x48
    UIColor * _shadowColor; // +0x50
    CGSize _shadowOffset; // +0x58
    double _shadowBlurRadius; // +0x68
    BOOL _customShadow; // +0x70
    BOOL _bNewLine; // +0x71
    BOOL _bShowTruncatingTail; // +0x72
    TextStyleAttributeObj * _textAttributeObj; // +0x78
    UIColor * _oDrawHLColor; // +0x80
    long long _inlineVerticalAlign; // +0x88
    _NSRange _highlightRange; // +0x90
    CGRect _drawFrame; // +0xa0
}
- (id)init;
- (void)setFrame:(CGRect)arg1;
- (void)drawInContext:(CGContext *)arg1;
- (CGRect)drawFrame;
- (id)oFont;
- (void)setOFont:(id)arg1;
- (id)nsContent;
- (void)setNsContent:(id)arg1;
- (CGSize)shadowOffset;
- (void)setShadowOffset:(CGSize)arg1;
- (double)shadowBlurRadius;
- (void)setShadowBlurRadius:(double)arg1;
- (BOOL)customShadow;
- (void)setCustomShadow:(BOOL)arg1;
- (BOOL)bNewLine;
- (void)setBNewLine:(BOOL)arg1;
- (BOOL)bShowTruncatingTail;
- (void)setBShowTruncatingTail:(BOOL)arg1;
- (id)textAttributeObj;
- (void)setTextAttributeObj:(id)arg1;
- (id)oTextColor;
- (void)setOTextColor:(id)arg1;
- (id)oDrawColor;
- (void)setODrawColor:(id)arg1;
- (id)oDrawHLColor;
- (void)setODrawHLColor:(id)arg1;
- (id)shadowColor;
- (void)setShadowColor:(id)arg1;
- (long long)inlineVerticalAlign;
- (void)setInlineVerticalAlign:(long long)arg1;
- (_NSRange)highlightRange;
- (void)setHighlightRange:(_NSRange)arg1;
- (void)setDrawFrame:(CGRect)arg1;
- (void).cxx_destruct;
@end
