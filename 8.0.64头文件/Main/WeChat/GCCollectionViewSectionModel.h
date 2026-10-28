@interface GCCollectionViewSectionModel : NSObject
{
    NSMutableArray * _itemArray; // +0x8
    GCCollectionViewManager * _viewManager; // +0x10
}
- (void)addSpaceModel:(double)arg1;
- (id)init;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (Class)bindSupplyMentaryElementClassOfKind:(id)arg1;
- (id)supplyMentaryElementReuseIdentifier:(id)arg1;
- (void)appendModel:(id)arg1;
- (void)appendModelArray:(id)arg1;
- (void)reloadViewManager;
- (id)itemArray;
- (void)setItemArray:(id)arg1;
- (id)viewManager;
- (void)setViewManager:(id)arg1;
- (void).cxx_destruct;
@end
