@interface BottomCardLayoutResult : NSObject
{
    double _contentHeight; // +0x8
    double _cardHeight; // +0x10
    CGSize _titleSize; // +0x18
    CGSize _subSize; // +0x28
}
- (CGSize)titleSize;
- (void)setTitleSize:(CGSize)arg1;
- (CGSize)subSize;
- (void)setSubSize:(CGSize)arg1;
- (double)contentHeight;
- (void)setContentHeight:(double)arg1;
- (double)cardHeight;
- (void)setCardHeight:(double)arg1;
@end
