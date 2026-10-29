@interface MMMusicPostVideoTabAlbumController : MMMusicPostVideoTabBaseController <MMAlbumDropPickerControllerDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, MMSightCameraViewControllerDelegate, PHPhotoLibraryChangeObserver, MMMusicPostVideoTabAlbumVideoCellDelegate, MMDropableTitleViewDelegate>
{
    MMAlbumDropPickerController * _dropController; // +0x8
    MMMusicPostVideoImagePickerControlCenter * _controlCenter; // +0x10
    MMAlbum * _album; // +0x18
    NSMutableArray * modelLists; // +0x20
    UICollectionView * _listView; // +0x28
    UICollectionViewFlowLayout * _flowLayout; // +0x30
    double _currEposideDuration; // +0x38
    BOOL _bResumeMusicAfterTakeVideo; // +0x40
    BOOL _canAlbumShowPhoto; // +0x41
    BOOL _canMultiSelect; // +0x42
    id <MMMusicPostVideoTabAlbumControllerDataSource> _dataSource; // +0x48
    id <MMMusicPostVideoTabAlbumControllerDelegate> _delegate; // +0x50
    MMDropableTitleView * _titleView; // +0x58
    MMAssetForPHAssetFramework * _sightCameraTakenAsset; // +0x60
    NSObject<OS_dispatch_queue> * _albumExecuteQueue; // +0x68
}
- (void)dealloc;
- (id)initWithViewController:(id)arg1 canAlbumShowPhoto:(BOOL)arg2 canMultiSelect:(BOOL)arg3;
- (id)arrPanGestures;
- (void)updateCanMultiSelect:(BOOL)arg1;
- (void)updateCanAlbumShowPhoto:(BOOL)arg1;
- (void)setCurrEposideDuration:(double)arg1;
- (void)updateCurrEposideDuration:(double)arg1;
- (void)updateDataSelectedStatus;
- (void)reloadVisibleCellSelectedStatus;
- (BOOL)updateDataSelectedStatusByUniqueId:(id)arg1;
- (void)reloadData;
- (void)layoutWithFrame:(CGRect)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)generateModelList;
- (unsigned long long)assetCount;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)isSelectedWithModel:(id)arg1;
- (void)showFinderCameraViewController;
- (void)startLoadingBlocked;
- (void)endLoading;
- (void)mmMusicPostVideoTabAlbumVideoCell:(id)arg1 onSelectedBtnClicked:(id)arg2;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)onShortVideoTakenHasSavedToLibrary:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)onShortVideoTakenFailedToSaveToLibrary:(id)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (void)generateModelListAndReloadDataWithCompletion:(id /* block */)arg1;
- (id)getAlbumTitleView;
- (void)albumDropPicker:(id)arg1 didSelectAtAlbum:(id)arg2 isDefault:(BOOL)arg3;
- (void)authorizeErrorWithAlbumDropPicker:(id)arg1;
- (void)readAlbumsErrorWithAlbumDropPicker:(id)arg1;
- (void)onClickDropableTitleView:(id)arg1;
- (id)generatePreviewDataSource;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)sightCameraTakenAsset;
- (void)setSightCameraTakenAsset:(id)arg1;
- (BOOL)canAlbumShowPhoto;
- (void)setCanAlbumShowPhoto:(BOOL)arg1;
- (BOOL)canMultiSelect;
- (void)setCanMultiSelect:(BOOL)arg1;
- (id)albumExecuteQueue;
- (void)setAlbumExecuteQueue:(id)arg1;
- (void).cxx_destruct;
@end

