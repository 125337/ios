@interface MMBaseMultiMenuTableViewCell : MMTableViewCell <CAAnimationDelegate>
{
    UIView * _menuContentView; // +0x8
    UIView * _actualContentView; // +0x10
    UIGestureRecognizer * _panGestureRecognizer; // +0x18
    BOOL _shouldDisplayContextMenuView; // +0x20
    BOOL _contextMenuHidden; // +0x21
    UIImageView * _copyedBackgroundView; // +0x28
    BOOL m_bIsNeedUpdateMenu; // +0x30
    double _initialTouchPositionX; // +0x38
    double _lastTouchPositionX; // +0x40
    double _initialContentViewX; // +0x48
    BOOL bNotAddDeleteBtn; // +0x50
    NSArray * _currentMenuItems; // +0x58
    BOOL _inHideAnimation; // +0x60
    BOOL _panGestureHasBegin; // +0x61
    int _animationCounter; // +0x64
    double _menuContentLeftMargin; // +0x68
    BOOL _contextMenuEnabled; // +0x70
    BOOL _disablePanOnHideAnimated; // +0x71
    BOOL _bNeedCopyBackgroundView; // +0x72
    BOOL _keepSwipeStateOnResue; // +0x73
    BOOL _forbidDisplayMenuWithGestures; // +0x74
    BOOL _releaseToTriggerCurrItem; // +0x75
    NSIndexPath * _indexPath; // +0x78
    NSMutableArray * _arrMenuItems; // +0x80
    UIColor * _menuBackgroundColor; // +0x88
    double _fCardRightMargin; // +0x90
    UIView * _rootContentView; // +0x98
    CAMediaTimingFunction * _menuAnimateTimingFunction; // +0xa0
    double _menuAnimateDuration; // +0xa8
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (BOOL)isPointInMenu:(CGPoint)arg1;
- (BOOL)isMenuHidden;
- (void)setFrame:(CGRect)arg1;
- (void)checkAndAddDeleteItem;
- (void)setArrMenuItems:(id)arg1;
- (void)setMenuItemsWithNoDeleteBtn:(id)arg1;
- (void)setMenuItemsWithDefaultDeleteBtn:(id)arg1;
- (void)setContextMenuEnabled:(BOOL)arg1;
- (void)updateAction;
- (id)FindTableView:(id)arg1;
- (void)updateMenuView;
- (void)updateMenuView:(BOOL)arg1;
- (void)updateMenuViewForConfirm:(id)arg1 originItem:(id)arg2;
- (void)updateCopyedBackgroundView;
- (void)showMenuText:(id)arg1 menuItem:(id)arg2;
- (BOOL)onActionOperated:(id)arg1;
- (void)onButtonClicked:(id)arg1;
- (void)onMenuOperated:(id)arg1;
- (void)onCommitEditingWithStyle:(long long)arg1 tableView:(id)arg2;
- (void)layoutSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)forceHideMenuOptionsAnimated:(BOOL)arg1;
- (void)forceHideMenuOptionsAnimated:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (void)hideMenuOptionsAnimated:(BOOL)arg1;
- (id)contentView;
- (id)rootContentView;
- (void)onClearBackgroundView;
- (long long)getButtonTitleLabelNumberOfLines;
- (long long)getButtonTitleLabelTextAlignment;
- (void)setMenuOptionsViewHidden:(BOOL)arg1 animated:(BOOL)arg2 completionHandler:(id /* block */)arg3;
- (double)getCurrentWidth;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (void)onMenuTransitionToConfirmState:(long long)arg1;
- (void)onMultiMenuAppear;
- (void)handlePan:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)swipeToTriggerItem;
- (id)findMenuButtonWithItem:(id)arg1;
- (void)onMenuOffsetChange:(double)arg1 menuWidth:(double)arg2;
- (void)checkTableViewEditingStyle;
- (id)indexPath;
- (void)setIndexPath:(id)arg1;
- (id)arrMenuItems;
- (BOOL)contextMenuEnabled;
- (BOOL)disablePanOnHideAnimated;
- (void)setDisablePanOnHideAnimated:(BOOL)arg1;
- (id)menuBackgroundColor;
- (void)setMenuBackgroundColor:(id)arg1;
- (BOOL)bNeedCopyBackgroundView;
- (void)setBNeedCopyBackgroundView:(BOOL)arg1;
- (double)fCardRightMargin;
- (void)setFCardRightMargin:(double)arg1;
- (BOOL)keepSwipeStateOnResue;
- (void)setKeepSwipeStateOnResue:(BOOL)arg1;
- (void)setRootContentView:(id)arg1;
- (BOOL)forbidDisplayMenuWithGestures;
- (void)setForbidDisplayMenuWithGestures:(BOOL)arg1;
- (id)menuAnimateTimingFunction;
- (void)setMenuAnimateTimingFunction:(id)arg1;
- (double)menuAnimateDuration;
- (void)setMenuAnimateDuration:(double)arg1;
- (BOOL)releaseToTriggerCurrItem;
- (void)setReleaseToTriggerCurrItem:(BOOL)arg1;
- (void).cxx_destruct;
@end
