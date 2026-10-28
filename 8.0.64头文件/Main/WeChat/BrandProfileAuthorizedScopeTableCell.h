@interface BrandProfileAuthorizedScopeTableCell : MMMultiMenuTableViewCell
{
    id <BrandProfileAuthorizedScopeTableCellDelegate> _delegate; // +0x40
    MMWebImageView * _appIconImageView; // +0x48
    MMUILabel * _titleLabel; // +0x50
    MMUILabel * _stateLabel; // +0x58
    UIView * _topSeperatorLine; // +0x60
    UIButton * _deleteButton; // +0x68
    BrandProfileAuthorizedScopeTableCellViewModel * _viewModel; // +0x70
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setupSubviews;
- (void)setupMenuItems;
- (void)layoutSubviews;
- (void)applyViewModel:(id)arg1;
- (id)wordingForState:(unsigned int)arg1;
- (void)onDeleteButtonClicked;
- (BOOL)contextMenuEnabled;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)appIconImageView;
- (void)setAppIconImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)stateLabel;
- (void)setStateLabel:(id)arg1;
- (id)topSeperatorLine;
- (void)setTopSeperatorLine:(id)arg1;
- (id)deleteButton;
- (void)setDeleteButton:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void).cxx_destruct;
@end
