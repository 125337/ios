@interface WAMainFrameTaskBarSectionWeAppView : WAMainFrameTaskBarSectionBaseView <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, WAStarCollectionViewLayoutDataSource, WAMainFrameTaskbarOperationViewControllerDelegate, WAStarCollectinViewViewLayoutDelegate>
{
    WAStarCollectionViewLayout * _layout; // +0x8
    UIView * _line; // +0x10
    UIView * _bottomArea; // +0x18
    UIButton * _bottomClickArea; // +0x20
    UIView * _emptyContainer; // +0x28
    UILabel * _emptyLabel; // +0x30
    UIView * _emptySearchContainer; // +0x38
    UIImageView * _emptySearchIcon; // +0x40
    UILabel * _emptySearchLabel; // +0x48
    BOOL _inAddStarArea; // +0x50
    BOOL _isDraging; // +0x51
    BOOL _isInEditMode; // +0x52
    WAMainFrameTaskBarDeleteActionWindow * _operationWindow; // +0x58
    WAMainFrameTaskBarSectionWeAppViewModel * _viewModel; // +0x60
    id <WAMainFrameTaskBarSectionWeAppViewDelegate> _delegate; // +0x68
    UICollectionView * _collectionView; // +0x70
    NSIndexPath * _selectedIndexPath; // +0x78
    UIView * _searchArea; // +0x80
    UIView * _topRightArea; // +0x88
    UILabel * _moreLabel; // +0x90
    UIView * _moreContainer; // +0x98
    UIImageView * _moreIcon; // +0xa0
}
+ (id)titleFont;
+ (int)contentHeight:(id)arg1 maxShowCount:(long long)arg2;
+ (BOOL)isIpadNotSplit;
+ (double)totalCellHeight:(id)arg1 maxShowCount:(long long)arg2;
- (id)title;
- (void)initView;
- (void)initEmptyView;
- (void)initOperationWindow;
- (void)initCollectionView;
- (void)layoutSubviews;
- (void)showOperationWindow;
- (void)hideOperationWindow;
- (void)setIsInEditMode:(BOOL)arg1;
- (void)prepareForReuse;
- (float)gapSize;
- (void)reload;
- (void)reloadCommonUsedItemIfNeeded;
- (void)updateTitle;
- (void)updateMoreView;
- (void)handleEmptyState:(BOOL)arg1;
- (void)onItemTapd:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)onClickMore;
- (void)onItemClick:(id)arg1 position:(long long)arg2;
- (BOOL)isMyWeApp;
- (BOOL)isCommonUseWeApp;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (BOOL)isLimitMode;
- (BOOL)collectionView:(id)arg1 shouldDoCustomDeleteAnimation:(id)arg2;
- (id)collectionView:(id)arg1 dragViewForItemAtIndexPath:(id)arg2;
- (CGPoint)collectionView:(id)arg1 dragViewFromPointForItemAtIndexPath:(id)arg2;
- (CGPoint)collectionView:(id)arg1 dragViewToPointForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 dragingView:(id)arg2 didDragToPosition:(CGPoint)arg3;
- (id)collectionView:(id)arg1 itemAnimateBackToPostion:(id)arg2;
- (void)collectionView:(id)arg1 layout:(id)arg2 didEndAnimateToPos:(id)arg3;
- (void)collectionView:(id)arg1 layout:(id)arg2 willEndDraggingItemAtIndexPath:(id)arg3;
- (BOOL)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 canMoveToIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 willMoveToIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 didMoveToIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 layout:(id)arg2 didEndDraggingItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 layout:(id)arg2 onLongPress:(id)arg3 indexPath:(id)arg4;
- (BOOL)collectionView:(id)arg1 itemCenterIsInDeleteArea:(CGPoint)arg2;
- (long long)collectionView:(id)arg1 itemDidMoveInDeleteAreaAtIndexPath:(id)arg2 viewCenter:(CGPoint)arg3;
- (void)collectionView:(id)arg1 itemDidMoveOutDeleteAreaAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 itemDidCommitToDeleteAtIdexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 itemDidCommitToStarAtIdexPath:(id)arg2;
- (BOOL)commonStarItem:(id)arg1 position:(int)arg2;
- (void)onLongPress:(id)arg1;
- (void)handleLongPress:(id)arg1;
- (BOOL)isInStarList:(id)arg1;
- (void)animateRemoveItem:(long long)arg1;
- (void)deleteToSection;
- (void)showTipsViewController:(id)arg1;
- (void)handleClickStar;
- (void)handleClickSearch;
- (id)operationWindow;
- (void)setOperationWindow:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)selectedIndexPath;
- (void)setSelectedIndexPath:(id)arg1;
- (id)searchArea;
- (void)setSearchArea:(id)arg1;
- (id)topRightArea;
- (void)setTopRightArea:(id)arg1;
- (BOOL)isInEditMode;
- (id)moreLabel;
- (void)setMoreLabel:(id)arg1;
- (id)moreContainer;
- (void)setMoreContainer:(id)arg1;
- (id)moreIcon;
- (void)setMoreIcon:(id)arg1;
- (void).cxx_destruct;
@end
