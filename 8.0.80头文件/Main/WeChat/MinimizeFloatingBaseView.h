@interface MinimizeFloatingBaseView : MMUIView
{
    BOOL _isInvisible; // +0x8
}
- (BOOL)shouldChangeToInvisible:(BOOL)arg1;
- (double)getInvisibleAlpha;
- (void)resetInvisibleAndCheckCount;
- (void)__onFloatingBecomeActiveAndThenCount:(BOOL)arg1;
- (void)__makeFloatingInVisible;
- (void)setFloatingVisibleState:(BOOL)arg1;
- (BOOL)isInvisible;
- (void)setIsInvisible:(BOOL)arg1;
@end
