@interface MMFinderLiveShopShelfMainTableHeaderView : UIView
{
    MMFinderLiveShopShelfCoordinator * _coordinator; // +0x8
    UIView * _vipView; // +0x10
    UIView * _couponsView; // +0x18
    MMFinderLiveShopShelfMainPageHeaderVIPAdapter * _vipAdapter; // +0x20
    MMFinderLiveShopShelfMainPageHeaderCouponsAdapter * _couponsAdapter; // +0x28
    UIEdgeInsets _padding; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setCoordinator:(id)arg1;
- (void)updateWithCoordinator;
- (id)itemViews;
- (void)layoutSubviews;
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
- (void).cxx_destruct;
@end
