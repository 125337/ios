@interface WCFinderLiveCompleteShoppingView : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UIGestureRecognizerDelegate>
{
    id /* block */ _onJumpToShopPage; // +0x8
    id /* block */ _onJumpToDetailPage; // +0x10
    FinderGetWindowProductProfileCardInfoResponse * _productInfo; // +0x18
    UICollectionView * _collectionView; // +0x20
    UILabel * _titleLabel; // +0x28
    MMUIButton * _shopButton; // +0x30
    UILabel * _shopNameLabel; // +0x38
    MMWebImageView * _shopTagIcon; // +0x40
    UILabel * _reputationTitleLabel; // +0x48
    UILabel * _reputationValueLabel; // +0x50
    UILabel * _reputationLevelLabel; // +0x58
    UIView * _seperator; // +0x60
    UILabel * _saleLabel; // +0x68
    UIButton * _internalClickButton; // +0x70
    MMWebImageView * _productImageView; // +0x78
    MMUIImageView * _arrowImageView; // +0x80
}
+ (BOOL)shouldShowShoppingViewWithProductInfo:(id)arg1;
- (BOOL)useNewStyle;
- (BOOL)cannotClickCell;
- (id)init;
- (void)updateWithProductInfo:(id)arg1;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)initViewsIfNeeded;
- (void)reloadContents;
- (double)calculateCollectionViewCellLen;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)onShoppingButtonTapped;
- (id /* block */)onJumpToShopPage;
- (void)setOnJumpToShopPage:(id /* block */)arg1;
- (id /* block */)onJumpToDetailPage;
- (void)setOnJumpToDetailPage:(id /* block */)arg1;
- (id)productInfo;
- (void)setProductInfo:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)shopButton;
- (void)setShopButton:(id)arg1;
- (id)shopNameLabel;
- (void)setShopNameLabel:(id)arg1;
- (id)shopTagIcon;
- (void)setShopTagIcon:(id)arg1;
- (id)reputationTitleLabel;
- (void)setReputationTitleLabel:(id)arg1;
- (id)reputationValueLabel;
- (void)setReputationValueLabel:(id)arg1;
- (id)reputationLevelLabel;
- (void)setReputationLevelLabel:(id)arg1;
- (id)seperator;
- (void)setSeperator:(id)arg1;
- (id)saleLabel;
- (void)setSaleLabel:(id)arg1;
- (id)internalClickButton;
- (void)setInternalClickButton:(id)arg1;
- (id)productImageView;
- (void)setProductImageView:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (void).cxx_destruct;
@end
