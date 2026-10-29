@interface MMFinderLiveConnectMicSelectConnectModeCell : MMTableViewCell
{
    UILabel * _titleLabel; // +0x8
    UIView * _separatorLine; // +0x10
    UIImageView * _selectedIconView; // +0x18
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)configAllSubviews;
- (void)layoutSubviews;
- (void)updateWithTitle:(id)arg1;
- (void)updateSelectedIconHidden:(BOOL)arg1;
- (void)setSeparatorHidden:(BOOL)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)separatorLine;
- (void)setSeparatorLine:(id)arg1;
- (id)selectedIconView;
- (void)setSelectedIconView:(id)arg1;
- (void).cxx_destruct;
@end
