@interface MJStickerPickerViewController : UIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, MJMovieTextActionProtocol>
{
    BOOL _isAppearing; // +0x8
    id <MJStickerPickerViewControllerDelegate> _delegate; // +0x10
    MJStickerPickerViewModel * _viewModel; // +0x18
    MJMaterialLoadingStatusCoordinator * _coordinator; // +0x20
    NSIndexPath * _selectedIndexPath; // +0x28
    UICollectionView * _contentView; // +0x30
    MJInspectorToolBar * _toolBar; // +0x38
}
- (id)initWithViewModel:(id)arg1;
- (void)viewDidLoad;
- (void)setupViews;
- (void)addToolBarIfNeeded;
- (void)setIsAppearing:(BOOL)arg1;
- (void)reloadData:(id)arg1;
- (void)resetPreview;
- (void)updateOnSkimTimeDidChange:(struct)arg1;
- (void)updateOnPlaybackTimeDidChange:(struct)arg1;
- (void)updateOnIsPlayingDidChange:(BOOL)arg1;
- (void)fetchDatas;
- (void)setSelectedIndexPath:(id)arg1;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)updateSelect:(BOOL)arg1 withCell:(id)arg2;
- (id)contentView;
- (BOOL)isReplacing;
- (BOOL)isAppearing;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)coordinator;
- (void)setCoordinator:(id)arg1;
- (id)selectedIndexPath;
- (void)setContentView:(id)arg1;
- (id)toolBar;
- (void)setToolBar:(id)arg1;
- (void).cxx_destruct;
@end

