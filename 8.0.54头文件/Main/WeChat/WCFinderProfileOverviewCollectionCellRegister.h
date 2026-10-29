@interface WCFinderProfileOverviewCollectionCellRegister : NSObject
{
    UICollectionView * _collectionView; // +0x8
}
+ (id)newWithCollectionView:(id)arg1;
- (void)registerCell:(Class)arg1;
- (void)registerFooter:(Class)arg1 identifier:(id)arg2;
- (void)registerHeader:(Class)arg1 identifier:(id)arg2;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (void).cxx_destruct;
@end

