@interface GCCollectionViewManagerConfig : NSObject
{
    BOOL _supportLongPress; // +0x8
    UICollectionView * _collectionView; // +0x10
    id /* block */ _refreshBlock; // +0x18
    double _customPageSize; // +0x20
}
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id /* block */)refreshBlock;
- (void)setRefreshBlock:(id /* block */)arg1;
- (BOOL)supportLongPress;
- (void)setSupportLongPress:(BOOL)arg1;
- (double)customPageSize;
- (void)setCustomPageSize:(double)arg1;
- (void).cxx_destruct;
@end
