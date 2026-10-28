@interface MJMovieTextSuggestionView : MMUIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    id <MJMovieTextSuggestionViewDelegate> _delegate; // +0x8
    MMUILabel * _titleLabel; // +0x10
    UICollectionView * _collectionView; // +0x18
    NSArray * _collectionViewCellItems; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupViews;
- (void)reloadWithSuggestions:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)collectionViewCellItems;
- (void)setCollectionViewCellItems:(id)arg1;
- (void).cxx_destruct;
@end
