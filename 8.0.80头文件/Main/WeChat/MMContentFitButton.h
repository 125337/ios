@interface MMContentFitButton : MMUIButton
{
    double _expandWidth; // +0x8
    double _expandHeight; // +0x10
    double _fHeight; // +0x18
}
- (CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (double)expandWidth;
- (void)setExpandWidth:(double)arg1;
- (double)expandHeight;
- (void)setExpandHeight:(double)arg1;
- (double)fHeight;
- (void)setFHeight:(double)arg1;
@end
