@interface WCFinderRedDotButton : UIButton
{
    double _redDotRightMargin; // +0x8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setInfoCount:(unsigned long long)arg1;
- (void)moveToButton:(id)arg1 navigationBar:(id)arg2;
- (double)redDotRightMargin;
- (void)setRedDotRightMargin:(double)arg1;
@end
