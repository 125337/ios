@interface WCFinderLiveCompleteLiveBannerContentView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    MMFinderLiveBannerView * _bannerView; // +0x8
    MMFinderLiveTask * _liveTask; // +0x10
    id /* block */ _onBannerClick; // +0x18
    UIView * _verticalLineView; // +0x20
    MMUILabel * _titleLabel; // +0x28
    UICollectionView * _collectionView; // +0x30
    NSArray * _bannerList; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)updateWithLiveInfo:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)didSelectWithBannerInfo:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)videoContainerViewPadding;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)itemMargin;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (id)bannerView;
- (id)titleLabel;
- (id)verticalLineView;
- (id)collectionView;
- (void)setBannerView:(id)arg1;
- (id)liveTask;
- (void)setLiveTask:(id)arg1;
- (id /* block */)onBannerClick;
- (void)setOnBannerClick:(id /* block */)arg1;
- (void)setVerticalLineView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (id)bannerList;
- (void)setBannerList:(id)arg1;
- (void).cxx_destruct;
@end
