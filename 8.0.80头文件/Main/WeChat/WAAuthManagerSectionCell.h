@interface WAAuthManagerSectionCell : UICollectionViewCell <WCActionSheetDelegate, ZZFlexibleLayoutViewProtocol>
{
    WAAuthManagerSectionViewModel * _viewDataModel; // +0x8
    MMTableView * _tableView; // +0x10
    ZZFLEXAngel * _angel; // +0x18
    WAAuthManagerItemViewModel * _prepareDeleteViewModel; // +0x20
}
+ (double)viewHeightByDataModel:(id)arg1;
- (void)setViewDataModel:(id)arg1;
- (void)onViewPositionUpdatedWithIndexPath:(id)arg1 sectionItemCount:(long long)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)deleteUserInfoItem:(id)arg1;
- (void)actionSheet:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (id)viewDataModel;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)angel;
- (void)setAngel:(id)arg1;
- (id)prepareDeleteViewModel;
- (void)setPrepareDeleteViewModel:(id)arg1;
- (void).cxx_destruct;
@end
