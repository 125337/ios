@interface FavMultiMenuTableViewCell : MMMultiMenuTableViewCell
{
    UIView * coverView; // +0x40
    BOOL m_selected; // +0x48
    BOOL _isPreparingToShowMenu; // +0x49
    BOOL _disableGesture; // +0x4a
    UIView * _m_bkgCardView; // +0x50
    UIColor * _bkgCardBackgroundColor; // +0x58
    id <FavMultiMenuTableViewCellDelegate> _delegate; // +0x60
    UILongPressGestureRecognizer * _longPressGesture; // +0x68
}
+ (void)setFrameAnimationEnabled:(BOOL)arg1;
+ (BOOL)isFrameAnimationEnabled;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initLongPress;
- (void)handleLongPress:(id)arg1;
- (void)handlePan:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setCoverView:(BOOL)arg1;
- (id)indexPath;
- (void)showMenuItems;
- (void)showRedesignMenuItems;
- (void)presentMenuItems:(id)arg1 itemRows:(id)arg2;
- (void)menuItemHidden;
- (void)setMenuOptionsViewHidden:(BOOL)arg1 animated:(BOOL)arg2 completionHandler:(id /* block */)arg3;
- (void)forwardAction:(id)arg1;
- (void)convertToNoteAction:(id)arg1;
- (void)pinTopAction:(id)arg1;
- (void)unpinTopAction:(id)arg1;
- (void)deleteAction:(id)arg1;
- (void)showContentAction:(id)arg1;
- (void)moreAction:(id)arg1;
- (void)editTagAction:(id)arg1;
- (void)starAction:(id)arg1;
- (void)unstarAction:(id)arg1;
- (void)onMenuTransitionToConfirmState:(long long)arg1;
- (id)m_bkgCardView;
- (void)setM_bkgCardView:(id)arg1;
- (id)bkgCardBackgroundColor;
- (void)setBkgCardBackgroundColor:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)disableGesture;
- (void)setDisableGesture:(BOOL)arg1;
- (id)longPressGesture;
- (void)setLongPressGesture:(id)arg1;
- (void).cxx_destruct;
@end
