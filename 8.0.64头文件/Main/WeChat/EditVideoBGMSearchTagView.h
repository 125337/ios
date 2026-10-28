@interface EditVideoBGMSearchTagView : MMUIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    id <EditVideoBGMSearchTagViewDelegate> _delegate; // +0x8
    NSArray * _tags; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setTags:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tags;
- (void).cxx_destruct;
@end
