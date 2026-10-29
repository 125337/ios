@interface DotLabelView : UIView
{
    UIView * _dotView; // +0x8
    UILabel * _label; // +0x10
    double _dotCornerRadius; // +0x18
    UIFont * _font; // +0x20
    long long _numberOfLines; // +0x28
    CGSize _dotSize; // +0x30
}
- (void)updateWithText:(id)arg1 color:(id)arg2;
- (CGSize)dotSize;
- (void)setDotSize:(CGSize)arg1;
- (double)dotCornerRadius;
- (void)setDotCornerRadius:(double)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (long long)numberOfLines;
- (void)setNumberOfLines:(long long)arg1;
- (void).cxx_destruct;
@end
