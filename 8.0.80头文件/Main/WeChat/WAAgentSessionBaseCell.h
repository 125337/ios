@interface WAAgentSessionBaseCell : UITableViewCell
{
    BOOL _darkModeEnabled; // +0x8
    WAAgentSessionCellViewModel * _viewModel; // +0x10
}
+ (double)cellHeightWithViewModel:(id)arg1 width:(double)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)configureWithViewModel:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (BOOL)darkModeEnabled;
- (void)setDarkModeEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end
