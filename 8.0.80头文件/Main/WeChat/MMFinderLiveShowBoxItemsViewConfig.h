@interface MMFinderLiveShowBoxItemsViewConfig : NSObject
{
    NSArray * _validShowBoxItemTypes; // +0x8
    NSArray * _invalidShowBoxItemTypes; // +0x10
    UIFont * _textFont; // +0x18
    double _bottomTouchInset; // +0x20
    CGSize _borderImageLabelImageSize; // +0x28
    CGSize _jumpArrowSize; // +0x38
    UIEdgeInsets _paddingLabelPadding; // +0x48
}
- (id)validShowBoxItemTypes;
- (void)setValidShowBoxItemTypes:(id)arg1;
- (id)invalidShowBoxItemTypes;
- (void)setInvalidShowBoxItemTypes:(id)arg1;
- (id)textFont;
- (void)setTextFont:(id)arg1;
- (UIEdgeInsets)paddingLabelPadding;
- (void)setPaddingLabelPadding:(UIEdgeInsets)arg1;
- (CGSize)borderImageLabelImageSize;
- (void)setBorderImageLabelImageSize:(CGSize)arg1;
- (CGSize)jumpArrowSize;
- (void)setJumpArrowSize:(CGSize)arg1;
- (double)bottomTouchInset;
- (void)setBottomTouchInset:(double)arg1;
- (void).cxx_destruct;
@end
