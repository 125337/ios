@interface WCFinderTemplateChooseView : MMUIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    id <WCFinderTemplateChooseViewDelegate> _delegate; // +0x8
    unsigned long long _currentIndex; // +0x10
    UICollectionView * _collectionView; // +0x18
}
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (void)setupSubViews;
- (double)viewH;
- (void)reloadData;
- (void)scrollToIndex:(unsigned long long)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)viewModel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)currentIndex;
- (void)setCurrentIndex:(unsigned long long)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (void).cxx_destruct;
@end

