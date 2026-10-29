@interface IntelligentCategoryDisplayView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    id <IntelligentCategoryDisplayViewDelegate> _delegate; // +0x8
    long long _selectedType; // +0x10
    UICollectionView * _collectionView; // +0x18
    UICollectionViewFlowLayout * _flowLayout; // +0x20
    NSArray * _categoryTitles; // +0x28
}
+ (double)totalHeightWithWidth:(double)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupCategoryTitles;
- (void)setupCollectionView;
- (void)layoutSubviews;
- (void)reloadData;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)selectedType;
- (void)setSelectedType:(long long)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)flowLayout;
- (void)setFlowLayout:(id)arg1;
- (id)categoryTitles;
- (void)setCategoryTitles:(id)arg1;
- (void).cxx_destruct;
@end
