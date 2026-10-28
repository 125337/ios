@interface WASMPageSheetListItemCell : UITableViewCell <ZZFlexibleLayoutViewProtocol>
{
    WASubscriptionMessagePageSheetMessageItem * _viewDataModel; // +0x8
    id /* block */ _viewEventAction; // +0x10
    WASMPageSheetCellSwitch * _switchView; // +0x18
    MMUILabel * _titleLabel; // +0x20
    WASMPageSheetBellringView * _bellingView; // +0x28
}
+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
- (void)setViewDataModel:(id)arg1;
- (void)onViewPositionUpdatedWithIndexPath:(id)arg1 sectionItemCount:(long long)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupUI;
- (id)viewDataModel;
- (id /* block */)viewEventAction;
- (void)setViewEventAction:(id /* block */)arg1;
- (id)switchView;
- (void)setSwitchView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)bellingView;
- (void)setBellingView:(id)arg1;
- (void).cxx_destruct;
@end
