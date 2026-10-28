@interface WAStarListViewController : MMUIViewController <WCActionSheetDelegate, WAAppItemManagerExtension, WAStarListViewModelDelegate, WAContactMgrExtension, WAMainFrameTaskbarOperationViewControllerDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, WAStarCollectionViewLayoutDataSource, WAStarCollectinViewViewLayoutDelegate>
{
    BOOL _isInEditMode; // +0x70
    WAMainFrameTaskBarDeleteActionWindow * _operationWindow; // +0x78
    WAStarListViewModel * _viewModel; // +0x80
    UICollectionView * _collectionView; // +0x88
    unsigned long long _scene; // +0x90
    WAStarCollectionViewLayout * _layout; // +0x98
    UIView * _tipsView; // +0xa0
    MMUILabel * _emptyLabel; // +0xa8
    double _collectionViewMargin; // +0xb0
}
- (id)init;
- (id)createViewModel;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)setScene:(unsigned long long)arg1;
- (void)showOperationWindow;
- (void)hideOperationWindow;
- (void)initOperationWindow;
- (void)initCustomUI;
- (void)initCollectionView;
- (void)updateViewAnimated:(BOOL)arg1;
- (void)initTipsView;
- (void)initEmptyView;
- (void)configureCell:(id)arg1;
- (unsigned long long)uiScene;
- (id)sceneNote:(long long)arg1;
- (void)viewDidLayoutSubviews;
- (void)onReturn;
- (void)onComplete;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 dragViewForItemAtIndexPath:(id)arg2;
- (CGPoint)collectionView:(id)arg1 dragViewFromPointForItemAtIndexPath:(id)arg2;
- (CGPoint)collectionView:(id)arg1 dragViewToPointForItemAtIndexPath:(id)arg2;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionViewDidTapBackgroundView:(id)arg1;
- (BOOL)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 canMoveToIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 willMoveToIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 didMoveToIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 layout:(id)arg2 onLongPress:(id)arg3 indexPath:(id)arg4;
- (BOOL)collectionView:(id)arg1 itemCenterIsInDeleteArea:(CGPoint)arg2;
- (long long)collectionView:(id)arg1 itemDidMoveInDeleteAreaAtIndexPath:(id)arg2 viewCenter:(CGPoint)arg3;
- (void)collectionView:(id)arg1 itemDidMoveOutDeleteAreaAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 itemDidCommitToDeleteAtIdexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 itemDidCommitToStarAtIdexPath:(id)arg2;
- (void)setIsInEditMode:(BOOL)arg1;
- (void)reloadData;
- (void)onModifyWeAppContact:(id)arg1;
- (id)operationWindow;
- (void)setOperationWindow:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (unsigned long long)scene;
- (id)layout;
- (void)setLayout:(id)arg1;
- (id)tipsView;
- (void)setTipsView:(id)arg1;
- (id)emptyLabel;
- (void)setEmptyLabel:(id)arg1;
- (BOOL)isInEditMode;
- (double)collectionViewMargin;
- (void)setCollectionViewMargin:(double)arg1;
- (void).cxx_destruct;
@end
