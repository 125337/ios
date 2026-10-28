@interface QIndicatorLayer : CALayer
{
    BOOL _isDarkStyle; // +0x8
    BOOL _showUpIndicator; // +0x9
    BOOL _showDownIndicator; // +0xa
}
- (void)setDarkMode:(BOOL)arg1;
- (void)drawInContext:(CGContext *)arg1;
- (void)DrawTopIndicator:(CGContext *)arg1 withCenter:(CGPoint)arg2;
- (void)DrawBottomIndicator:(CGContext *)arg1 withCenter:(CGPoint)arg2;
- (BOOL)isDarkStyle;
- (void)setIsDarkStyle:(BOOL)arg1;
- (BOOL)showUpIndicator;
- (void)setShowUpIndicator:(BOOL)arg1;
- (BOOL)showDownIndicator;
- (void)setShowDownIndicator:(BOOL)arg1;
@end
