@interface MMAnchoredMenuOverlayView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate>
{
    BOOL _reservesLeadingImageSpace; // +0x8
    BOOL _hasPresented; // +0x9
    BOOL _transitioning; // +0xa
    BOOL _dismissing; // +0xb
    MMAnchoredMenu * _rootMenu; // +0x10
    MMAnchoredMenu * _currentMenu; // +0x18
    NSArray * _items; // +0x20
    NSString * _menuTitle; // +0x28
    UIView * _anchorView; // +0x30
    double _leftMargin; // +0x38
    double _rightMargin; // +0x40
    double _headerArrowContainerLeftMargin; // +0x48
    double _headerTitleLeftMargin; // +0x50
    double _headerDividerLeftMargin; // +0x58
    id /* block */ _dismissHandler; // +0x60
    UIView * _menuBackdropView; // +0x68
    UIView * _menuShadowView; // +0x70
    UICollectionViewFlowLayout * _menuCollectionViewLayout; // +0x78
    UICollectionView * _menuCollectionView; // +0x80
    UIViewPropertyAnimator * _menuAnimator; // +0x88
    double _resolvedMenuWidth; // +0x90
    NSArray * _resolvedItemHeights; // +0x98
    NSMutableArray * _navigationStates; // +0xa0
    CGSize _presentationSize; // +0xa8
}
- (id)initWithMenu:(id)arg1 anchorView:(id)arg2 dismissHandler:(id /* block */)arg3;
- (void)applyMenuConfiguration:(id)arg1 displayTitle:(id)arg2;
- (BOOL)isDisplayingSubmenu;
- (double)currentHeaderHeight;
- (id)visibleMenuHeaderView;
- (double)minimumItemHeight;
- (double)rightIconLayoutWidthForItem:(id)arg1;
- (double)resolvedLeftMarginForMenu:(id)arg1 isSubmenu:(BOOL)arg2;
- (double)resolvedRightMarginForMenu:(id)arg1 isSubmenu:(BOOL)arg2;
- (double)resolvedHeaderLeftMarginForMenu:(id)arg1 isSubmenu:(BOOL)arg2;
- (BOOL)menuUsesLeadingImageLayout:(id)arg1;
- (double)naturalMenuWidthForMenu:(id)arg1 displayTitle:(id)arg2 isSubmenu:(BOOL)arg3 visitedMenus:(id)arg4;
- (double)menuWidthForAvailableWidth:(double)arg1;
- (id)itemHeightsForMenuWidth:(double)arg1;
- (void)layoutSubviews;
- (CGRect)visibleRectForAnchorView:(id)arg1 convertedRect:(CGRect)arg2;
- (BOOL)showAnimated;
- (void)hideAnimated:(BOOL)arg1 notifyDismissHandler:(BOOL)arg2;
- (id)animatorWithDuration:(double)arg1 animations:(id /* block */)arg2;
- (void)transitionToMenu:(id)arg1 fromItem:(id)arg2 cell:(id)arg3;
- (void)transitionBackToParentMenu;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)onOutsideTapped;
- (void)onOutsidePanned:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)rootMenu;
- (void)setRootMenu:(id)arg1;
- (id)currentMenu;
- (void)setCurrentMenu:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (id)menuTitle;
- (void)setMenuTitle:(id)arg1;
- (id)anchorView;
- (void)setAnchorView:(id)arg1;
- (double)leftMargin;
- (void)setLeftMargin:(double)arg1;
- (double)rightMargin;
- (void)setRightMargin:(double)arg1;
- (BOOL)reservesLeadingImageSpace;
- (void)setReservesLeadingImageSpace:(BOOL)arg1;
- (double)headerArrowContainerLeftMargin;
- (void)setHeaderArrowContainerLeftMargin:(double)arg1;
- (double)headerTitleLeftMargin;
- (void)setHeaderTitleLeftMargin:(double)arg1;
- (double)headerDividerLeftMargin;
- (void)setHeaderDividerLeftMargin:(double)arg1;
- (id /* block */)dismissHandler;
- (void)setDismissHandler:(id /* block */)arg1;
- (id)menuBackdropView;
- (void)setMenuBackdropView:(id)arg1;
- (id)menuShadowView;
- (void)setMenuShadowView:(id)arg1;
- (id)menuCollectionViewLayout;
- (void)setMenuCollectionViewLayout:(id)arg1;
- (id)menuCollectionView;
- (void)setMenuCollectionView:(id)arg1;
- (id)menuAnimator;
- (void)setMenuAnimator:(id)arg1;
- (CGSize)presentationSize;
- (void)setPresentationSize:(CGSize)arg1;
- (BOOL)hasPresented;
- (void)setHasPresented:(BOOL)arg1;
- (BOOL)isTransitioning;
- (void)setTransitioning:(BOOL)arg1;
- (BOOL)isDismissing;
- (void)setDismissing:(BOOL)arg1;
- (double)resolvedMenuWidth;
- (void)setResolvedMenuWidth:(double)arg1;
- (id)resolvedItemHeights;
- (void)setResolvedItemHeights:(id)arg1;
- (id)navigationStates;
- (void)setNavigationStates:(id)arg1;
- (void).cxx_destruct;
@end
