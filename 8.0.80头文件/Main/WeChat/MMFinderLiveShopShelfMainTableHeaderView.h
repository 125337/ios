@interface MMFinderLiveShopShelfMainTableHeaderView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    MMFinderLiveShopShelfCoordinator * _coordinator; // +0x8
    MMFinderLiveShopShelfMainTableHeaderItemView * _vipView; // +0x10
    MMFinderLiveShopShelfMainTableHeaderItemView * _couponsView; // +0x18
    MMFinderLiveShopShelfMainPageHeaderVIPAdapter * _vipAdapter; // +0x20
    MMFinderLiveShopShelfMainPageHeaderCouponsAdapter * _couponsAdapter; // +0x28
    UICollectionViewFlowLayout * _benefitListLayout; // +0x30
    UICollectionView * _benefitListCollectionView; // +0x38
    NSArray * _benefitItemViews; // +0x40
    NSArray * _orderedItemViews; // +0x48
    UIEdgeInsets _padding; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setCoordinator:(id)arg1;
- (void)updateWithCoordinator;
- (id)supportedBenefitItems;
- (id)buildBenefitItemView:(id)arg1;
- (id)benefitOpenContextWithRefreshOnExit;
- (void)invalidateBenefitListLayout;
- (long long)benefitItemCount;
- (id)benefitItemViewAtIndex:(long long)arg1;
- (void)layoutSubviews;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)reportExpose;
- (void)reportCouponsViewExpose;
- (void)reportVIPViewExpose;
- (UIEdgeInsets)padding;
- (void)setPadding:(UIEdgeInsets)arg1;
- (id)coordinator;
- (id)vipView;
- (void)setVipView:(id)arg1;
- (id)couponsView;
- (void)setCouponsView:(id)arg1;
- (id)vipAdapter;
- (void)setVipAdapter:(id)arg1;
- (id)couponsAdapter;
- (void)setCouponsAdapter:(id)arg1;
- (id)benefitListLayout;
- (void)setBenefitListLayout:(id)arg1;
- (id)benefitListCollectionView;
- (void)setBenefitListCollectionView:(id)arg1;
- (id)benefitItemViews;
- (void)setBenefitItemViews:(id)arg1;
- (id)orderedItemViews;
- (void)setOrderedItemViews:(id)arg1;
- (void).cxx_destruct;
@end
