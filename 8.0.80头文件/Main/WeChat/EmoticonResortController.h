@interface EmoticonResortController : MMUIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    BOOL _hasReordered; // +0x70
    BOOL _shouldHandleMoveGesture; // +0x71
    id /* block */ _onCancelBlock; // +0x78
    id /* block */ _onCompleteBlock; // +0x80
    EmoticonCustomManageDataLogic * _dataLogic; // +0x88
    NSArray * _selectedMd5List; // +0x90
    unsigned long long _type; // +0x98
    UIView * _containerView; // +0xa0
    UIView * _maskView; // +0xa8
    UIView * _navBarView; // +0xb0
    UIButton * _cancelButton; // +0xb8
    UIButton * _doneButton; // +0xc0
    UILabel * _titleLabel; // +0xc8
    UICollectionView * _collectionView; // +0xd0
    EmoticonCustomManageCollectionLayout * _collectionLayout; // +0xd8
    EmoticonCustomSortInsertBrickView * _insertBrickView; // +0xe0
    EmoticonCustomSortInsertBrickView * _insertBrickPlaceHolderView; // +0xe8
    UILabel * _bottomLabel; // +0xf0
    UIView * _bottomCoverView; // +0xf8
    CAGradientLayer * _coverGradientLayer; // +0x100
    UIView * _moveBGView; // +0x108
    NSArray * _recentlyMovedMd5List; // +0x110
    UIPanGestureRecognizer * _moveGesture; // +0x118
    double _gridViewWidth; // +0x120
}
- (id)initWithDataLogic:(id)arg1 selectedMd5List:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)updateBottomLabelFrame;
- (void)initView;
- (void)initNavBar;
- (void)initCollectionView;
- (void)initMoveViews;
- (double)BottomBarHeight;
- (void)genGridViewWidth;
- (CGPoint)getDefaultBrickCenter;
- (void)enterMoveMode;
- (void)addMoveGesture;
- (BOOL)isPointInInsertBrickView:(CGPoint)arg1;
- (void)onCancelClicked:(id)arg1;
- (void)onDoneClicked:(id)arg1;
- (void)onMaskTapped:(id)arg1;
- (void)dismissPage;
- (id)getMovedMd5List;
- (id)getInsertPositionMd5;
- (void)onMoveGesture:(id)arg1;
- (void)checkCollectionInsertPlaceHolder:(CGPoint)arg1;
- (BOOL)checkCollectionInsert;
- (void)onMoveGestureFailed;
- (void)onMoveGestureSucceed;
- (void)cleanInsert;
- (BOOL)checkCollectionAutoScrollForMove:(double)arg1;
- (void)doTaptic:(long long)arg1;
- (double)getSafeBottomInset;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (void)animateMovedEmoticons;
- (void)forceRefreshVisibleCells;
- (id /* block */)onCancelBlock;
- (void)setOnCancelBlock:(id /* block */)arg1;
- (id /* block */)onCompleteBlock;
- (void)setOnCompleteBlock:(id /* block */)arg1;
- (id)dataLogic;
- (void)setDataLogic:(id)arg1;
- (id)selectedMd5List;
- (void)setSelectedMd5List:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)maskView;
- (void)setMaskView:(id)arg1;
- (id)navBarView;
- (void)setNavBarView:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)doneButton;
- (void)setDoneButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)collectionLayout;
- (void)setCollectionLayout:(id)arg1;
- (id)insertBrickView;
- (void)setInsertBrickView:(id)arg1;
- (id)insertBrickPlaceHolderView;
- (void)setInsertBrickPlaceHolderView:(id)arg1;
- (id)bottomLabel;
- (void)setBottomLabel:(id)arg1;
- (id)bottomCoverView;
- (void)setBottomCoverView:(id)arg1;
- (id)coverGradientLayer;
- (void)setCoverGradientLayer:(id)arg1;
- (id)moveBGView;
- (void)setMoveBGView:(id)arg1;
- (BOOL)hasReordered;
- (void)setHasReordered:(BOOL)arg1;
- (id)recentlyMovedMd5List;
- (void)setRecentlyMovedMd5List:(id)arg1;
- (id)moveGesture;
- (void)setMoveGesture:(id)arg1;
- (double)gridViewWidth;
- (void)setGridViewWidth:(double)arg1;
- (BOOL)shouldHandleMoveGesture;
- (void)setShouldHandleMoveGesture:(BOOL)arg1;
- (void).cxx_destruct;
@end
