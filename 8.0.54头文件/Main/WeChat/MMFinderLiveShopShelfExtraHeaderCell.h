@interface MMFinderLiveShopShelfExtraHeaderCell : UIView
{
    MMFinderLiveTaskId * _taskId; // +0x8
    MMFinderLiveShopShelfCoordinator * _coordinator; // +0x10
    id <MMFinderLiveShopShelfExtraHeaderCellDelegate> _delegate; // +0x18
    MMFinderLiveShopGoodsManageSectionHeaderView * _manageHeaderView; // +0x20
    MMFinderLiveGoodsEmptyView * _emptyView; // +0x28
    MMFinderLiveShopShelfExtraHeaderInfos * _extraHeaderInfos; // +0x30
    MMFinderLiveShopShelfMainTableHeaderView * _tableHeaderView; // +0x38
    UIEdgeInsets _padding; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubViews;
- (void)setCoordinator:(id)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateWithCoordinatorAndExtraHeaderInfos:(id)arg1;
- (BOOL)isEmpty;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)reportExpose;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)coordinator;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)manageHeaderView;
- (void)setManageHeaderView:(id)arg1;
- (id)emptyView;
- (void)setEmptyView:(id)arg1;
- (UIEdgeInsets)padding;
- (void)setPadding:(UIEdgeInsets)arg1;
- (id)extraHeaderInfos;
- (void)setExtraHeaderInfos:(id)arg1;
- (id)tableHeaderView;
- (void)setTableHeaderView:(id)arg1;
- (void).cxx_destruct;
@end

