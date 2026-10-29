@interface MJTextLabel : MMTextView
{
    long long _numberOfLines; // +0x38
    long long _lineBreakMode; // +0x40
    double _x; // +0x48
    double _y; // +0x50
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)commonInit;
- (void)setNumberOfLines:(long long)arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setX:(double)arg1;
- (void)setY:(double)arg1;
- (void)layoutSubviews;
- (void)updateTextContainerInset;
- (void)sizeToFitWidth:(double)arg1 lineBreakMode:(long long)arg2;
- (long long)numberOfLines;
- (long long)lineBreakMode;
- (double)x;
- (double)y;
@end
