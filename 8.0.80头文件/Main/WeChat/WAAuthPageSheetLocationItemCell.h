@interface WAAuthPageSheetLocationItemCell : MMTableViewCell <ZZFlexibleLayoutViewProtocol>
{
    MMUILabel * _titleLabel; // +0x8
    UIButton * _selectedView; // +0x10
}
+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
- (void)setViewDataModel:(id)arg1;
- (void)onViewPositionUpdatedWithIndexPath:(id)arg1 sectionItemCount:(long long)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupUI;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)selectedView;
- (void)setSelectedView:(id)arg1;
- (void).cxx_destruct;
@end
