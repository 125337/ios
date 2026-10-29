@interface WCStoryTableView : WCTableView
{
    BOOL _hasTransparentHeaderArea; // +0x39
}
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)hasTransparentHeaderArea;
- (void)setHasTransparentHeaderArea:(BOOL)arg1;
@end

