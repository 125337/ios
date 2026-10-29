@interface WCFinderSlideMenuCell : UICollectionViewCell <UIGestureRecognizerDelegate>
{
    BOOL _menuOpened; // +0x8
    BOOL _closedOtherMenu; // +0x9
    UIView * _menuView; // +0x10
    NSArray * _menuInfos; // +0x18
    UIPanGestureRecognizer * _panGesture; // +0x20
    CGPoint _gestureOrigin; // +0x28
}
- (id)displayContentView;
- (void)prepareForReuse;
- (void)setMenuItems:(id)arg1;
- (id)menuItems;
- (void)setupGesture:(BOOL)arg1;
- (void)createMenuInfo;
- (void)onPan:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)tryOpenMenu:(double)arg1;
- (void)tryCloseMenu:(double)arg1;
- (void)exposeMenuOpened;
- (void)closeMenu;
- (void)_cleanMenuViews;
- (void)_closeOtherCellMenu;
- (id)findCollectionView;
- (id)recardMenuIdentify;
- (void)recardMeuOpened;
- (void)removeSelfRecardMenuOpened;
- (id)menuIdentify;
- (void)ensureMenuView;
- (void)layoutMenuViewsWthenExpand;
- (void)resetMenuViewLayout;
- (void)layoutEachMenuSubviews:(id)arg1;
- (double)totalWidth;
- (void)updateMenuPosition;
- (void)onTap:(id)arg1;
- (void)invokeTarget:(id)arg1 action:(SEL)arg2 menu:(id)arg3;
- (id)menuView;
- (void)setMenuView:(id)arg1;
- (id)menuInfos;
- (void)setMenuInfos:(id)arg1;
- (id)panGesture;
- (void)setPanGesture:(id)arg1;
- (CGPoint)gestureOrigin;
- (void)setGestureOrigin:(CGPoint)arg1;
- (BOOL)menuOpened;
- (void)setMenuOpened:(BOOL)arg1;
- (BOOL)closedOtherMenu;
- (void)setClosedOtherMenu:(BOOL)arg1;
- (void).cxx_destruct;
@end
