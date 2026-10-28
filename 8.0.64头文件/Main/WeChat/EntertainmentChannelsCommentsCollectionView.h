@interface EntertainmentChannelsCommentsCollectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    UICollectionView * _collectionView; // +0x8
    UIViewPropertyAnimator * _animator; // +0x10
    NSArray * _bulletList; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateBulletList:(id)arg1;
- (void)layoutSubviews;
- (void)randInitialOffset:(double)arg1;
- (void)tickScroll;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)animator;
- (void)setAnimator:(id)arg1;
- (id)bulletList;
- (void)setBulletList:(id)arg1;
- (void).cxx_destruct;
@end
