@interface MMECProductShowBoxItemsViewConfig : NSObject
{
    BOOL _multiLines; // +0x8
    NSArray * _validShowBoxItemTypes; // +0x10
    NSArray * _validShowBoxElementContextTypes; // +0x18
    NSArray * _invalidShowBoxElementContextTypes; // +0x20
    UIFont * _textFont; // +0x28
    double _lineHeight; // +0x30
    double _lineSpacing; // +0x38
    CGSize _borderImageLabelImageSize; // +0x40
    UIEdgeInsets _paddingLabelPadding; // +0x50
}
- (id)validShowBoxItemTypes;
- (void)setValidShowBoxItemTypes:(id)arg1;
- (id)validShowBoxElementContextTypes;
- (void)setValidShowBoxElementContextTypes:(id)arg1;
- (id)invalidShowBoxElementContextTypes;
- (void)setInvalidShowBoxElementContextTypes:(id)arg1;
- (id)textFont;
- (void)setTextFont:(id)arg1;
- (UIEdgeInsets)paddingLabelPadding;
- (void)setPaddingLabelPadding:(UIEdgeInsets)arg1;
- (CGSize)borderImageLabelImageSize;
- (void)setBorderImageLabelImageSize:(CGSize)arg1;
- (double)lineHeight;
- (void)setLineHeight:(double)arg1;
- (double)lineSpacing;
- (void)setLineSpacing:(double)arg1;
- (BOOL)multiLines;
- (void)setMultiLines:(BOOL)arg1;
- (void).cxx_destruct;
@end
