@interface WCWebSearchBar : WCSearchBar
{
    BOOL _didExposedCancelButton; // +0x8
    BOOL _didExposedClearButton; // +0x9
    UIButton * _actionButton; // +0x10
    UIButton * _searchButton; // +0x18
    UIView * _seperatorView; // +0x20
}
- (id)initWithConfig:(CGRect)arg1 config:(id)arg2;
- (id)initWithConfig:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)assembleSearchButtonWith:(id /* block */)arg1;
- (void)assembleRightActionButton:(id)arg1;
- (void)assembleRightSeperator;
- (void)setActionButtonHidden:(BOOL)arg1;
- (void)setActionButtonHiddenImmediately:(BOOL)arg1;
- (void)showsCancelButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)assembleLargeInputSearchButton;
- (void)switchToLargeInputBox;
- (void)layoutSubviews;
- (id)newTextField;
- (void)showClearButtonSpace:(BOOL)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (id)searchButton;
- (void)setSearchButton:(id)arg1;
- (BOOL)didExposedCancelButton;
- (void)setDidExposedCancelButton:(BOOL)arg1;
- (BOOL)didExposedClearButton;
- (void)setDidExposedClearButton:(BOOL)arg1;
- (id)seperatorView;
- (void)setSeperatorView:(id)arg1;
- (void).cxx_destruct;
@end
