@interface MMLiveGameRecentlyPalyedView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    id <MMLiveGameRecentlyPalyedViewDelegate> _delegate; // +0x8
    MMLiveTaskId * _liveTaskId; // +0x10
    UIView * _gameListView; // +0x18
    UILabel * _titleLabel; // +0x20
    UICollectionView * _recentlyPalyedGameCollectionView; // +0x28
    NSArray * _gameUserInfoList; // +0x30
}
- (id)initWithFrame:(CGRect)arg1 andTaskId:(id)arg2;
- (void)layoutSubviews;
- (void)updateGameListView;
- (void)showView;
- (void)updateGameUserInfoList:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)gameListView;
- (void)setGameListView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)recentlyPalyedGameCollectionView;
- (void)setRecentlyPalyedGameCollectionView:(id)arg1;
- (id)gameUserInfoList;
- (void)setGameUserInfoList:(id)arg1;
- (void).cxx_destruct;
@end
