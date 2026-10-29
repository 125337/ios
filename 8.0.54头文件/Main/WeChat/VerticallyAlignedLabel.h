@interface VerticallyAlignedLabel : UILabel
{
    int verticalAlignment_; // +0x8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setVerticalAlignment:(int)arg1;
- (CGRect)textRectForBounds:(CGRect)arg1 limitedToNumberOfLines:(long long)arg2;
- (void)drawTextInRect:(CGRect)arg1;
- (int)verticalAlignment;
@end

