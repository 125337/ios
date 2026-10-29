@interface MMAlbumDropPickerController : NSObject <UITableViewDelegate, UITableViewDataSource, PHPhotoLibraryChangeObserver>
{
    BOOL _isQuit; // +0x8
    BOOL _isShowAlbumList; // +0x9
    BOOL _directToFirstAlbum; // +0xa
    BOOL _allAlbumsLoaded; // +0xb
    BOOL _isFirstAlbum; // +0xc
    BOOL _hasRegisterChangeObserver; // +0xd
    id <MMAlbumDropPickerControllerDelegate> _delegate; // +0x10
    NSArray * _deviceAlbums; // +0x18
    NSString * _currentAlbum; // +0x20
    id <MMImagePickerControlCenter> _controlCenter; // +0x28
    NSString * _waitingEntryAlbumId; // +0x30
    MMUIViewController * _attachViewController; // +0x38
    MMUIView * _bgView; // +0x40
    UIView * _tableContainerView; // +0x48
    MMTableView * _tableView; // +0x50
    MMUIView * _blurView; // +0x58
    ColorGradientView * _shadowImageView; // +0x60
    MMUIActivityIndicatorView * _loadingIndicator; // +0x68
    MMUIView * _dimmingView; // +0x70
    NSObject<OS_dispatch_queue> * _queue; // +0x78
}
- (id)initWithViewController:(id)arg1 delegate:(id)arg2 controlCenter:(id)arg3 toFirstAlbum:(BOOL)arg4;
- (void)dealloc;
- (id)titleView;
- (void)startLoadAlbum;
- (id)defaultAlbum;
- (void)showWithAnimated:(BOOL)arg1;
- (void)dismissWithAnimated:(BOOL)arg1;
- (void)dismiss;
- (void)reloadTableView;
- (void)initUI;
- (void)initAccessLimitTips;
- (void)readAlbums;
- (void)toEntryAlbum:(id /* block */)arg1;
- (void)loadAllAlbums:(BOOL)arg1;
- (void)selectAlbum:(id)arg1;
- (void)handleSwitchShowStatus;
- (void)hideIfNeeded;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateShadowImageViewVisibility;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)photoLibraryDidChange:(id)arg1;
- (void)registerChangeObserver;
- (void)unregisterChangeObserver;
- (void)onAlbumAssetsChange:(id)arg1;
- (void)backgroundUpdateAlbums:(id)arg1;
- (void)startLoadingBlocked:(BOOL)arg1;
- (void)stopLoading;
- (void)safeCallOnMainThread:(id /* block */)arg1;
- (void)dispatchAction:(id /* block */)arg1;
- (long long)getCacheOption;
- (id)getAlbumName:(id)arg1 isFirstAlbum:(BOOL)arg2;
- (BOOL)isInPageSheetMode;
- (BOOL)isC2CScene;
- (BOOL)isQuit;
- (void)setIsQuit:(BOOL)arg1;
- (BOOL)isShowAlbumList;
- (void)setIsShowAlbumList:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)deviceAlbums;
- (void)setDeviceAlbums:(id)arg1;
- (id)currentAlbum;
- (void)setCurrentAlbum:(id)arg1;
- (id)controlCenter;
- (void)setControlCenter:(id)arg1;
- (BOOL)directToFirstAlbum;
- (void)setDirectToFirstAlbum:(BOOL)arg1;
- (BOOL)allAlbumsLoaded;
- (void)setAllAlbumsLoaded:(BOOL)arg1;
- (BOOL)isFirstAlbum;
- (void)setIsFirstAlbum:(BOOL)arg1;
- (id)waitingEntryAlbumId;
- (void)setWaitingEntryAlbumId:(id)arg1;
- (id)attachViewController;
- (void)setAttachViewController:(id)arg1;
- (id)bgView;
- (void)setBgView:(id)arg1;
- (id)tableContainerView;
- (void)setTableContainerView:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (id)shadowImageView;
- (void)setShadowImageView:(id)arg1;
- (id)loadingIndicator;
- (void)setLoadingIndicator:(id)arg1;
- (id)dimmingView;
- (void)setDimmingView:(id)arg1;
- (BOOL)hasRegisterChangeObserver;
- (void)setHasRegisterChangeObserver:(BOOL)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (void).cxx_destruct;
@end
