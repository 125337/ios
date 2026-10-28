@interface MMMusicMVPreviewEpisodeSelectView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    id <MMMusicMVPreviewEpisodeSelectViewDelegate> _delegate; // +0x8
    UICollectionView * _collectionView; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (void).cxx_destruct;
@end
