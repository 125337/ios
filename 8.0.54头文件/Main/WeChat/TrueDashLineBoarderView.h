@interface TrueDashLineBoarderView : UIView
{
    double _lineLength; // +0x8
    double _cornerRadius; // +0x10
    MMDynamicColor * _color; // +0x18
}
- (void)layoutSubviews;
- (void)drawDashLineBoarder;
- (double)lineLength;
- (void)setLineLength:(double)arg1;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (void).cxx_destruct;
@end

