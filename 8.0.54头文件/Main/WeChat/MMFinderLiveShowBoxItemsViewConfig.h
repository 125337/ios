@interface MMFinderLiveShowBoxItemsViewConfig : NSObject
{
    BOOL _multiLines; // +0x8
    NSArray * _validShowBoxItemTypes; // +0x10
    UIFont * _textFont; // +0x18
    double _lineHeight; // +0x20
    double _lineSpacing; // +0x28
    double _bottomTouchInset; // +0x30
    CGSize _borderImageLabelImageSize; // +0x38
    CGSize _jumpArrowSize; // +0x48
    UIEdgeInsets _paddingLabelPadding; // +0x58
}
- (id)validShowBoxItemTypes;
- (void)setValidShowBoxItemTypes:(id)arg1;
- (id)textFont;
- (void)setTextFont:(id)arg1;
- (UIEdgeInsets)paddingLabelPadding;
- (void)setPaddingLabelPadding:(UIEdgeInsets)arg1;
- (CGSize)borderImageLabelImageSize;
- (void)setBorderImageLabelImageSize:(CGSize)arg1;
- (CGSize)jumpArrowSize;
- (void)setJumpArrowSize:(CGSize)arg1;
- (double)lineHeight;
- (void)setLineHeight:(double)arg1;
- (double)lineSpacing;
- (void)setLineSpacing:(double)arg1;
- (BOOL)multiLines;
- (void)setMultiLines:(BOOL)arg1;
- (double)bottomTouchInset;
- (void)setBottomTouchInset:(double)arg1;
- (void).cxx_destruct;
@end

