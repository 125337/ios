@interface MainFrameTableView : MMMainTableView
{
    CADisplayLink * _displayLink; // +0x40
    double _animationPointsPerSecond; // +0x48
    double _finalContentOffset; // +0x50
    id /* block */ _completeBlock; // +0x58
    NSIndexPath * _selectedIndexPath; // +0x60
}
- (BOOL)tryDeleteRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (BOOL)tryInsertRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)forceScrollToOffset:(double)arg1 duration:(double)arg2 complete:(id /* block */)arg3;
- (void)endAnimation;
- (void)displayLinkTick;
- (void)handleSelectAtIndexPath:(id)arg1;
- (id)indexPathForSelectedRow;
- (void)selectRowAtIndexPath:(id)arg1 cell:(id)arg2 animated:(BOOL)arg3 scrollPosition:(long long)arg4;
- (void)selectRowAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(long long)arg3;
- (void)deselectRowAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (double)animationPointsPerSecond;
- (void)setAnimationPointsPerSecond:(double)arg1;
- (double)finalContentOffset;
- (void)setFinalContentOffset:(double)arg1;
- (id /* block */)completeBlock;
- (void)setCompleteBlock:(id /* block */)arg1;
- (id)selectedIndexPath;
- (void)setSelectedIndexPath:(id)arg1;
- (void).cxx_destruct;
@end

