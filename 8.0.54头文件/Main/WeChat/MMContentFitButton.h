@interface MMContentFitButton : MMUIButton
{
    BOOL _hideIfShrinked; // +0x8
    double _expandWidth; // +0x10
    double _expandHeight; // +0x18
    double _fHeight; // +0x20
}
- (CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (double)expandWidth;
- (void)setExpandWidth:(double)arg1;
- (double)expandHeight;
- (void)setExpandHeight:(double)arg1;
- (double)fHeight;
- (void)setFHeight:(double)arg1;
- (BOOL)hideIfShrinked;
- (void)setHideIfShrinked:(BOOL)arg1;
@end

