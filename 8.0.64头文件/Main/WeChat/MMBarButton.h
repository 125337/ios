@interface MMBarButton : MMUIButton
{
    unsigned long long eBarButtonStyle; // +0x8
    double _extendWidth; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)tintColorDidChange;
- (unsigned long long)eBarButtonStyle;
- (void)setEBarButtonStyle:(unsigned long long)arg1;
- (double)extendWidth;
- (void)setExtendWidth:(double)arg1;
@end
