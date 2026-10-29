@interface MMBorderView : UIView
{
    double _borderWidth; // +0x8
    UIColor * _borderColor; // +0x10
    NSArray * _borderPattern; // +0x18
    unsigned long long _borders; // +0x20
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)setDefaultValues;
- (void)layoutSubviews;
- (void)drawRect:(CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (double)borderWidth;
- (void)setBorderWidth:(double)arg1;
- (id)borderColor;
- (void)setBorderColor:(id)arg1;
- (id)borderPattern;
- (void)setBorderPattern:(id)arg1;
- (unsigned long long)borders;
- (void)setBorders:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
