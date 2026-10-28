@interface MMMultiMenuAndMemuTableViewCell : MMMultiMenuTableViewCell
{
    UIView * coverView; // +0x40
    BOOL m_selected; // +0x48
    id <MMMultiMenuAndMemuTableViewCellDelegate> _delegate; // +0x50
    long long _buttonTitleLabelNumberOfLines; // +0x58
    UIView * _m_bkgCardView; // +0x60
}
- (void)setFrame:(CGRect)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setCoverView:(BOOL)arg1;
- (void)setMenuOptionsViewHidden:(BOOL)arg1 animated:(BOOL)arg2 completionHandler:(id /* block */)arg3;
- (id)getArrMemuItemForRowAtIndexPath:(id)arg1;
- (void)onMenuTransitionToConfirmState:(long long)arg1;
- (void)deleteAction:(id)arg1;
- (long long)getButtonTitleLabelNumberOfLines;
- (long long)getButtonTitleLabelTextAlignment;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)buttonTitleLabelNumberOfLines;
- (void)setButtonTitleLabelNumberOfLines:(long long)arg1;
- (id)m_bkgCardView;
- (void)setM_bkgCardView:(id)arg1;
- (void).cxx_destruct;
@end
