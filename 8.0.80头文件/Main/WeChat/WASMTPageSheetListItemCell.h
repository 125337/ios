@interface WASMTPageSheetListItemCell : UITableViewCell <ZZFlexibleLayoutViewProtocol>
{
    UILabel * _nameLabel; // +0x8
    UILabel * _valueLabel; // +0x10
}
+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
- (void)setViewDataModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupUI;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)valueLabel;
- (void)setValueLabel:(id)arg1;
- (void).cxx_destruct;
@end
