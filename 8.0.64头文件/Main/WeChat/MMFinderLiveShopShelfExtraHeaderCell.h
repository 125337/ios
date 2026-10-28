@interface MMFinderLiveShopShelfExtraHeaderCell : UIView
{
    MMFinderLiveShopShelfCoordinator * _coordinator; // +0x8
    MMFinderLiveShopGoodsManageSectionHeaderView * _manageHeaderView; // +0x10
    MMFinderLiveGoodsEmptyView * _emptyView; // +0x18
    MMFinderLiveShopShelfMainTableHeaderView * _tableHeaderView; // +0x20
    UIEdgeInsets _padding; // +0x28
}
- (id)initWithCoordinator:(id)arg1;
- (void)initSubViews;
- (void)layoutSubviews;
- (void)update;
- (BOOL)isEmpty;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)reportExpose;
- (id)coordinator;
- (void)setCoordinator:(id)arg1;
- (id)manageHeaderView;
- (void)setManageHeaderView:(id)arg1;
- (id)emptyView;
- (void)setEmptyView:(id)arg1;
- (UIEdgeInsets)padding;
- (void)setPadding:(UIEdgeInsets)arg1;
- (id)tableHeaderView;
- (void)setTableHeaderView:(id)arg1;
- (void).cxx_destruct;
@end
