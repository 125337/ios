@interface MMLiveConnectMicHitTestAdjustView : UIView
{
    BOOL _shouldAdjustHitTest; // +0x8
}
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)shouldAdjustHitTest;
- (void)setShouldAdjustHitTest:(BOOL)arg1;
@end
