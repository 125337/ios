@interface TextStatePublishOfficialIconCollectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    id <TextStatePublishOfficialIconCollectionViewDelegate> _delegate; // +0x8
    TextStatePublishIconList * _iconList; // +0x10
    UICollectionView * _collectionView; // +0x18
    TextStatePublishOfficialIconCollectionLayout * _collectionViewLayout; // +0x20
    long long _itemCountPerRow; // +0x28
    unsigned long long _resourceTraceFitCount; // +0x30
    NSMutableDictionary * _iconIdToItem; // +0x38
    NSMutableDictionary * _indexPathToItemHeight; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)setFrame:(CGRect)arg1;
- (void)setIconList:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)refresh;
- (void)updateItemCountPerRow;
- (long long)rowIndexForIndexPath:(id)arg1;
- (double)itemHeightForIndexPath:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)iconList;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)collectionViewLayout;
- (void)setCollectionViewLayout:(id)arg1;
- (long long)itemCountPerRow;
- (void)setItemCountPerRow:(long long)arg1;
- (unsigned long long)resourceTraceFitCount;
- (void)setResourceTraceFitCount:(unsigned long long)arg1;
- (id)iconIdToItem;
- (void)setIconIdToItem:(id)arg1;
- (id)indexPathToItemHeight;
- (void)setIndexPathToItemHeight:(id)arg1;
- (void).cxx_destruct;
@end
