@interface WCCardMultiMenuCollectionViewCell : UICollectionViewCell <UIGestureRecognizerDelegate, CAAnimationDelegate>
{
    UIView * _menuContentView; // +0x8
    UIView * _actualContentView; // +0x10
    UIGestureRecognizer * _panGestureRecognizer; // +0x18
    double _initialTouchPositionX; // +0x20
    BOOL _shouldDisplayContextMenuView; // +0x28
    BOOL _contextMenuHidden; // +0x29
    BOOL _shouldDisplayRightSwipeTips; // +0x2a
    UIImageView * _copyedBackgroundView; // +0x30
    BOOL _bIsNeedUpdateMenu; // +0x38
    BOOL _contextMenuEnabled; // +0x39
    NSIndexPath * _indexPath; // +0x40
    NSMutableArray * _arrMenuItems; // +0x48
    UIColor * _menuBackgroundColor; // +0x50
    id /* block */ _editAction; // +0x58
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)forceHideMenuOptionsAnimated:(BOOL)arg1;
- (void)hideMenuOptionsAnimated:(BOOL)arg1;
- (BOOL)isPointInMenu:(CGPoint)arg1;
- (BOOL)isMenuHidden;
- (void)setArrMenuItems:(id)arg1;
- (void)handlePan:(id)arg1;
- (void)onGiftButtonClicked:(id)arg1;
- (void)onDeleteButtonClicked:(id)arg1;
- (void)updateMenuView;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (id)contentView;
- (void)onClearBackgroundView;
- (void)setMenuOptionsViewHidden:(BOOL)arg1 animated:(BOOL)arg2 completionHandler:(id /* block */)arg3;
- (void)resetActionContentView;
- (id)animation;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)showRightSwipeTips;
- (double)getCurrentWidth;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)indexPath;
- (void)setIndexPath:(id)arg1;
- (id)arrMenuItems;
- (BOOL)contextMenuEnabled;
- (void)setContextMenuEnabled:(BOOL)arg1;
- (id)menuBackgroundColor;
- (void)setMenuBackgroundColor:(id)arg1;
- (id /* block */)editAction;
- (void)setEditAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end
