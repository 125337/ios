@interface GCBaseCellModel : NSObject
{
    BOOL _hasCallLayoutBefore; // +0x8
    BOOL _reported; // +0x9
    UICollectionViewCell * _gcBindCell; // +0x10
    id <GCBaseCellModelDelegate> _cellModelDelegate; // +0x18
    NSIndexPath * _indexPath; // +0x20
    id /* block */ _didSelectBlock; // +0x28
    id /* block */ _willDisplayBlock; // +0x30
}
- (void)setBindReport:(id)arg1;
- (id)bindReport;
- (void)setBindExplosureReport:(id)arg1;
- (id)bindExplosureReport;
- (void)setExplosureDataReportWithKey:(id)arg1 uniqueId:(id)arg2 configBlock:(id /* block */)arg3;
- (void)setDataReportWithKey:(id)arg1 uniqueId:(id)arg2 configBlock:(id /* block */)arg3;
- (void)configureReportModel:(id)arg1;
- (void)onGetBindReport:(id)arg1;
- (void)setDidSelectBlock:(id /* block */)arg1;
- (void)setWillDisplayBlock:(id /* block */)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)callCellConfigIfBaseCell;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)cellReuseIdentifier;
- (Class)bindCellClass;
- (void)calculateLayoutIfNeed;
- (double)fitCollectionViewWidth:(id)arg1;
- (CGSize)cellSizeForCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)reconfigCell;
- (void)reconfigCellWithoutInvalidateLayout;
- (void)clearCachedLayoutInfo;
- (void)handleLongPress:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)gcBindCell;
- (void)setGcBindCell:(id)arg1;
- (id)cellModelDelegate;
- (void)setCellModelDelegate:(id)arg1;
- (BOOL)hasCallLayoutBefore;
- (void)setHasCallLayoutBefore:(BOOL)arg1;
- (BOOL)reported;
- (void)setReported:(BOOL)arg1;
- (id)indexPath;
- (void)setIndexPath:(id)arg1;
- (id /* block */)didSelectBlock;
- (id /* block */)willDisplayBlock;
- (void).cxx_destruct;
@end
