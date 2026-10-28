@interface WCFinderSelectPanelView : MMUIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    id <WCFinderSelectPanelViewDelegate> _delegate; // +0x8
    UICollectionView * _collectionView; // +0x10
    NSArray * _gridModelArray; // +0x18
    CGRect _lastCellRect; // +0x20
}
- (id)initWithFrame:(CGRect)arg1 backgroundColor:(id)arg2;
- (void)setUpCollectionView;
- (void)reloadWithGridModels:(id)arg1;
- (id)genSelectedGridModels;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)reloadDataWrap;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)gridModelArray;
- (void)setGridModelArray:(id)arg1;
- (CGRect)lastCellRect;
- (void)setLastCellRect:(CGRect)arg1;
- (void).cxx_destruct;
@end
