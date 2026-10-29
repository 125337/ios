@interface MMFinderLiveShopGoodsSectionHeaderClassifyView : MMUIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    id <MMFinderLiveShopGoodsSectionHeaderClassifyViewDelegate> _delegate; // +0x8
    NSMutableArray * _classifyInfos; // +0x10
    FinderShopShelfLabelClassifyInfo * _selectedClassifyInfo; // +0x18
    UICollectionView * _classifyCollectionView; // +0x20
}
+ (double)preferHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setClassifyInfos:(id)arg1 selected:(id)arg2;
- (void)select:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)classifyInfos;
- (void)setClassifyInfos:(id)arg1;
- (id)selectedClassifyInfo;
- (void)setSelectedClassifyInfo:(id)arg1;
- (id)classifyCollectionView;
- (void)setClassifyCollectionView:(id)arg1;
- (void).cxx_destruct;
@end

