@interface EcsFinderFeedPopupAngel : ZZFLEXAngel <UIScrollViewDelegate>
{
    EcsFinderFeedPopupViewModel * _dataVM; // +0x8
}
- (void)setDataVM:(id)arg1;
- (void)reloadData;
- (void)scrollToIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)resetCellsAlpha:(id)arg1;
- (id)dataVM;
- (void).cxx_destruct;
@end
