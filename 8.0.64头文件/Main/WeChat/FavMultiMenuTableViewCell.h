@interface FavMultiMenuTableViewCell : MMMultiMenuTableViewCell
{
    UIView * coverView; // +0x40
    BOOL m_selected; // +0x48
    BOOL _isPreparingToShowMenu; // +0x49
    BOOL _disableGesture; // +0x4a
    UIView * _m_bkgCardView; // +0x50
    id <FavMultiMenuTableViewCellDelegate> _delegate; // +0x58
}
+ (void)setFrameAnimationEnabled:(BOOL)arg1;
+ (BOOL)isFrameAnimationEnabled;
- (void)handlePan:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setCoverView:(BOOL)arg1;
- (id)indexPath;
- (void)tryToShowMenu;
- (void)showMenuItems;
- (void)menuItemHidden;
- (void)setMenuOptionsViewHidden:(BOOL)arg1 animated:(BOOL)arg2 completionHandler:(id /* block */)arg3;
- (void)forwardAction:(id)arg1;
- (void)deleteAction:(id)arg1;
- (void)showContentAction:(id)arg1;
- (void)moreAction:(id)arg1;
- (void)editTagAction:(id)arg1;
- (void)onMenuTransitionToConfirmState:(long long)arg1;
- (id)m_bkgCardView;
- (void)setM_bkgCardView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)disableGesture;
- (void)setDisableGesture:(BOOL)arg1;
- (void).cxx_destruct;
@end
