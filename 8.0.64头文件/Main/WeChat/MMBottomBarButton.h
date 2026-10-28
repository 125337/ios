@interface MMBottomBarButton : UIButton
{
    BOOL _extendTouchArea; // +0x8
    unsigned long long _barButtonStyle; // +0x10
}
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)extendTouchArea;
- (void)setExtendTouchArea:(BOOL)arg1;
- (unsigned long long)barButtonStyle;
- (void)setBarButtonStyle:(unsigned long long)arg1;
@end
