@interface WCFinderScrollActionGridView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    NSMutableArray * _sections; // +0x8
    id <MMScrollActionSheetItemViewDelegate> _itemDelegate; // +0x10
    id <WCFinderScrollActionGridViewDelegate> _delegate; // +0x18
    UICollectionView * _collectionView; // +0x20
    long long _columnCount; // +0x28
    double _cachedWidth; // +0x30
    NSMutableDictionary * _heightCache; // +0x38
}
+ (long long)calculateColumntCount:(double)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)contentView;
- (void)layoutSubviews;
- (void)updateLayoutForWidthIfNeeded;
- (long long)columnCount;
- (double)displayTotalHeight;
- (double)heightForItem:(id)arg1 section:(id)arg2;
- (void)setSections:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (double)calculateItemPadding;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (id)sections;
- (id)itemDelegate;
- (void)setItemDelegate:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (void)setColumnCount:(long long)arg1;
- (double)cachedWidth;
- (void)setCachedWidth:(double)arg1;
- (id)heightCache;
- (void)setHeightCache:(id)arg1;
- (void).cxx_destruct;
@end
