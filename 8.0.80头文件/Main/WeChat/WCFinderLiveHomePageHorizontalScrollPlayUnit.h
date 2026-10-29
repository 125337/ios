@interface WCFinderLiveHomePageHorizontalScrollPlayUnit : WCFinderLiveHomePageAutoPlayUnit
{
    UICollectionView * _innerCollectionView; // +0x8
    WCFinderLiveHomePageBaseSectionView * _sectionView; // +0x10
    unsigned long long _maxPlayingCount; // +0x18
    NSMutableArray * __visibleIndexPaths; // +0x20
}
- (id)initWithSection:(unsigned long long)arg1 sectionVM:(id)arg2 sectionView:(id)arg3 maxPlayingCount:(unsigned long long)arg4;
- (id)visibleIndexPaths;
- (id)currentPlayingIndexPaths;
- (BOOL)containIndexPath:(id)arg1;
- (void)updateVisibleIndexPathsWithCollectionView:(id)arg1;
- (id)indexPathForX:(double)arg1;
- (void)removePlayingIndexPath:(id)arg1;
- (id)adjustAndReplenish;
- (id)adjustAndReplenishWithDeleteIndexPath:(id)arg1;
- (id)mutableVisibleIndexPaths;
- (id)description;
- (id)innerCollectionView;
- (void)setInnerCollectionView:(id)arg1;
- (id)sectionView;
- (void)setSectionView:(id)arg1;
- (unsigned long long)maxPlayingCount;
- (void)setMaxPlayingCount:(unsigned long long)arg1;
- (id)_visibleIndexPaths;
- (void)set_visibleIndexPaths:(id)arg1;
- (void).cxx_destruct;
@end
