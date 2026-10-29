@interface MJImageComposingThumbnailView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    BOOL _isDeletingButtonVisible; // +0x8
    MJImageComposingViewModel * _viewModel; // +0x10
    id <MJImageComposingThumbnailViewDelegate> _delegate; // +0x18
    UICollectionView * _collectionView; // +0x20
    UICollectionViewFlowLayout * _flowLayout; // +0x28
    UILongPressGestureRecognizer * _longPressGR; // +0x30
    NSIndexPath * _addingIndexPath; // +0x38
    NSIndexPath * _moveSourceIndexPath; // +0x40
    NSIndexPath * _moveDestinationIndexPath; // +0x48
    MJImageComposingDeletingButton * _deletingButton; // +0x50
    CGSize _lastLayoutSize; // +0x58
}
- (id)initWithViewModel:(id)arg1;
- (void)_bindViews;
- (void)_setupViews;
- (void)_layoutViews;
- (void)_updateLayoutIfNeeded;
- (void)layoutSubviews;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)reloadData;
- (void)_handleThumbnailDidUpdate:(id)arg1 forScene:(id)arg2;
- (void)_switchToSceneAtIndex:(unsigned long long)arg1;
- (void)_handleSceneDidSwitch:(id)arg1;
- (void)_handleSceneDidAdd;
- (void)_removeSceneAtIndex:(unsigned long long)arg1;
- (void)_handleSceneDidRemove;
- (void)_handleSelectAtIndexPath:(id)arg1;
- (void)_handleLongPressGesture:(id)arg1;
- (BOOL)_isPointOverDeletingButton:(CGPoint)arg1;
- (void)_showDeletingButtonAnimated:(BOOL)arg1;
- (void)_hideDeletingButtonAnimated:(BOOL)arg1;
- (long long)_itemCount;
- (void)_updateAddingIndexPath;
- (id)viewModel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (CGSize)lastLayoutSize;
- (void)setLastLayoutSize:(CGSize)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)flowLayout;
- (void)setFlowLayout:(id)arg1;
- (id)longPressGR;
- (void)setLongPressGR:(id)arg1;
- (id)addingIndexPath;
- (void)setAddingIndexPath:(id)arg1;
- (id)moveSourceIndexPath;
- (void)setMoveSourceIndexPath:(id)arg1;
- (id)moveDestinationIndexPath;
- (void)setMoveDestinationIndexPath:(id)arg1;
- (id)deletingButton;
- (void)setDeletingButton:(id)arg1;
- (BOOL)isDeletingButtonVisible;
- (void)setIsDeletingButtonVisible:(BOOL)arg1;
- (void).cxx_destruct;
@end
