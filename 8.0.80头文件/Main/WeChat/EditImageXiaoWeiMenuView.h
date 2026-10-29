@interface EditImageXiaoWeiMenuView : UIView
{
    BOOL _transitioning; // +0x8
    BOOL _dismissing; // +0x9
    id /* block */ _onSelectItem; // +0x10
    UIView * _backdropView; // +0x18
    UIView * _containerView; // +0x20
    UIScrollView * _scrollView; // +0x28
    EditImageXiaoWeiMenuHeaderView * _headerView; // +0x30
    EditImageXiaoWeiMenu * _rootMenu; // +0x38
    EditImageXiaoWeiMenu * _currentMenu; // +0x40
    UIView * _rootView; // +0x48
    double _menuWidth; // +0x50
    double _rootMenuWidth; // +0x58
    NSArray * _itemHeights; // +0x60
    UIViewPropertyAnimator * _menuAnimator; // +0x68
    long long _currentExpSource; // +0x70
    NSString * _parentMenuTitle; // +0x78
    NSMutableArray * _navigationStates; // +0x80
    NSMutableArray * _rowButtons; // +0x88
    CGRect _anchorFrame; // +0x90
}
- (id)initWithMenu:(id)arg1 anchorFrame:(CGRect)arg2 rootView:(id)arg3;
- (id)initWithItems:(id)arg1 anchorFrame:(CGRect)arg2 rootView:(id)arg3;
- (long long)currentMenuLevel;
- (void)reportCurrentMenuViewExpWithSource:(long long)arg1;
- (void)reportViewClkWithText:(id)arg1 jumpToXiaoWei:(BOOL)arg2;
- (double)effectiveLeftMargin;
- (double)submenuResolvedLeftMargin;
- (double)categoryRowTrailing;
- (double)menuWidthForAvailableWidth:(double)arg1;
- (id)itemHeightsForMenuWidth:(double)arg1;
- (double)headerHeight;
- (void)setupViews;
- (void)rebuildContent;
- (void)applyCornerMaskToContainer;
- (void)addRowAtIndex:(long long)arg1 y:(double)arg2 rowHeight:(double)arg3;
- (void)onRowTapped:(id)arg1;
- (void)onBackdropTapped;
- (void)navigateBackToParentMenu;
- (id)animatorWithDuration:(double)arg1;
- (void)show;
- (void)prepareContainerForSlideTransition;
- (void)restoreContainerAfterSlideTransition;
- (void)transitionToSubmenu:(id)arg1 parentTitle:(id)arg2 expSource:(long long)arg3;
- (void)transitionBackToParentMenu;
- (void)dismiss;
- (void)dismissWithCompletion:(id /* block */)arg1;
- (id /* block */)onSelectItem;
- (void)setOnSelectItem:(id /* block */)arg1;
- (id)backdropView;
- (void)setBackdropView:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)rootMenu;
- (void)setRootMenu:(id)arg1;
- (id)currentMenu;
- (void)setCurrentMenu:(id)arg1;
- (CGRect)anchorFrame;
- (void)setAnchorFrame:(CGRect)arg1;
- (id)rootView;
- (void)setRootView:(id)arg1;
- (double)menuWidth;
- (void)setMenuWidth:(double)arg1;
- (double)rootMenuWidth;
- (void)setRootMenuWidth:(double)arg1;
- (id)itemHeights;
- (void)setItemHeights:(id)arg1;
- (id)menuAnimator;
- (void)setMenuAnimator:(id)arg1;
- (BOOL)isTransitioning;
- (void)setTransitioning:(BOOL)arg1;
- (BOOL)isDismissing;
- (void)setDismissing:(BOOL)arg1;
- (long long)currentExpSource;
- (void)setCurrentExpSource:(long long)arg1;
- (id)parentMenuTitle;
- (void)setParentMenuTitle:(id)arg1;
- (id)navigationStates;
- (void)setNavigationStates:(id)arg1;
- (id)rowButtons;
- (void)setRowButtons:(id)arg1;
- (void).cxx_destruct;
@end
