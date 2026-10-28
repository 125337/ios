@interface WCFinderFeedFlowZoomAnimatorHelper : NSObject <WCFinderZoomAnimatorBehavior>
{
    UICollectionView * _collectionView; // +0x8
    id /* block */ _idxPathGetter; // +0x10
    UIView * _cacheSnapView; // +0x18
    UICollectionViewCell * _cacheCell; // +0x20
}
+ (id)helperWithCollectionView:(id)arg1 idxPathGetter:(id /* block */)arg2;
- (id)zoomAnimatorTransitionSnapView:(id)arg1 cornerRaidus:(double *)arg2;
- (void)onAnimatorWillBeginClosure:(id)arg1;
- (void)safeReloadCollectionViewItem:(id)arg1;
- (void)onAnimatorDidEndClosure:(id)arg1;
- (id)browserFeedIndexPathForTid:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id /* block */)idxPathGetter;
- (void)setIdxPathGetter:(id /* block */)arg1;
- (id)cacheSnapView;
- (void)setCacheSnapView:(id)arg1;
- (id)cacheCell;
- (void)setCacheCell:(id)arg1;
- (void).cxx_destruct;
@end
