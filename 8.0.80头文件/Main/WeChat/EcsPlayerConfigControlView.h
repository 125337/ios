@interface EcsPlayerConfigControlView : WCPlayerConfigControlView
{
    BOOL _mbShowBottomTool; // +0x8
    double _ecsProgressBarLeftPadding; // +0x10
}
- (void)layoutSubviews;
- (double)ecsProgressBarLeftPadding;
- (void)setEcsProgressBarLeftPadding:(double)arg1;
- (BOOL)mbShowBottomTool;
- (void)setMbShowBottomTool:(BOOL)arg1;
@end
