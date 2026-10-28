@interface WCFinderCollectionViewDataSource : UICollectionViewDiffableDataSource
{
    NSDiffableDataSourceSnapshot * _currentSnapshot; // +0x8
}
- (void)applySnapshot:(id)arg1 animatingDifferences:(BOOL)arg2;
- (id)currentSnapshot;
- (void)setCurrentSnapshot:(id)arg1;
- (void).cxx_destruct;
@end
