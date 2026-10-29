@interface MMMainTableView : MMTableView
{
    BOOL _enableDeselection; // +0x39
    id <MainTableDelegate> _m_mainTableDelegate; // +0x40
}
- (void)setFrame:(CGRect)arg1;
- (void)setScrollIndicatorInsets:(UIEdgeInsets)arg1;
- (void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2;
- (void)setContentOffset:(CGPoint)arg1;
- (void)setContentInset:(UIEdgeInsets)arg1;
- (void)ensureHierarchy;
- (void)deselectRowAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (void)forceDeselectRowAtIndexPath:(id)arg1;
- (void)forceDeselectRowAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (UIEdgeInsets)adjustedContentInset;
- (BOOL)touchesShouldBegin:(id)arg1 withEvent:(id)arg2 inContentView:(id)arg3;
- (BOOL)touchesShouldCancelInContentView:(id)arg1;
- (id)m_mainTableDelegate;
- (void)setM_mainTableDelegate:(id)arg1;
- (BOOL)enableDeselection;
- (void)setEnableDeselection:(BOOL)arg1;
- (void).cxx_destruct;
@end

