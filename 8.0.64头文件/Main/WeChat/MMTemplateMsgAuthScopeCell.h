@interface MMTemplateMsgAuthScopeCell : UITableViewCell
{
    MMTemplateMsgScopeItem * _scopeItem; // +0x8
    id <MMTemplateMsgAuthScopeCellDelegate> _delegate; // +0x10
    MMUIButton * _checkBoxButton; // +0x18
    UILabel * _titleLabel; // +0x20
    MMUIButton * _infoButton; // +0x28
}
+ (double)cellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initCheckBoxView;
- (void)initTitleLabel;
- (void)initInfoButton;
- (void)layoutSubviews;
- (void)updateScopeItem:(id)arg1;
- (void)onCheckBoxButtonClicked:(id)arg1;
- (void)onInfoButtonClicked:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)checkBoxButton;
- (void)setCheckBoxButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)infoButton;
- (void)setInfoButton:(id)arg1;
- (void).cxx_destruct;
@end
