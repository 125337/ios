@interface SystemImagePickViewController : UIViewController <MMAssetPickerControllerDelegate, LiteAppAssetViewDelegate, MMAlbumAccessAuthViewDelegate, PHPhotoLibraryChangeObserver, MMAssetCellDelegate, MMImagePreviewBrowserControllerDelegate, UITableViewDataSource, UITableViewDelegate>
{
    NSMutableArray * _imageDictionaries; // +0x8
    NSMutableArray * _cacheDictionaries; // +0x10
    double _assetWidth; // +0x18
    double _realBottomBarHeight; // +0x20
    double lastScreenWidth; // +0x28
    BOOL _livePhoto; // +0x30
    BOOL _bPickerStyleForFile; // +0x31
    BOOL _hasRegisterChangeObserver; // +0x32
    BOOL _allAlbumsLoaded; // +0x33
    BOOL _typeChanged; // +0x34
    BOOL _isAccessLimited; // +0x35
    BOOL _showAllAsset; // +0x36
    BOOL _firstAlbumInit; // +0x37
    BOOL _m_livePhotoProcessDone; // +0x38
    BOOL _m_imageProcessDone; // +0x39
    BOOL _m_livePhotoClickProcessDone; // +0x3a
    BOOL _m_imageClickProcessDone; // +0x3b
    id <SystemImagePickViewControllerDelegate> _delegate; // +0x40
    NSMutableArray * _selectedAssetInfos; // +0x48
    double _heightsize; // +0x50
    double _widthsize; // +0x58
    NSString * _appId; // +0x60
    NSString * _albumid; // +0x68
    NSString * _type; // +0x70
    NSString * _mode; // +0x78
    NSString * _showType; // +0x80
    NSString * _preview; // +0x88
    unsigned long long _countLimit; // +0x90
    NSMutableArray * _deviceAlbums; // +0x98
    long long _colNum; // +0xa0
    MMTableView * _tableView; // +0xa8
    MMAlbum * _m_album; // +0xb0
    NSString * _currentAlbum; // +0xb8
    NSMutableSet * _limitAssetIds; // +0xc0
    MMAlbumAccessAuthView * _accessAuthView; // +0xc8
    UIView * _accessLimitTipView; // +0xd0
    NSObject<OS_dispatch_queue> * _queue; // +0xd8
    NSString * _currVideoPath; // +0xe0
    NSMutableArray * _mCurrentShowAssets; // +0xe8
    LiteAppAssetPickerControllerProxyObjectForAllAsset * _m_proxyPreviewObjectForAllAsset; // +0xf0
    LiteAppAssetPickerControlCenter * _controlCenter; // +0xf8
    EditImageLogicController * _editImageLogicController; // +0x100
    unsigned long long _m_liveProcessStartTime; // +0x108
    UIEdgeInsets _additionalTableViewInsets; // +0x110
}
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)updateDuoAlbumLayout;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)dealloc;
- (BOOL)shouldInteractiveDismiss;
- (void)initData;
- (void)initView;
- (void)setupConfig;
- (void)initTableView;
- (void)reloadPhotoViewWithAnimated:(BOOL)arg1 scrollToBottom:(BOOL)arg2;
- (void)updateTableViewContentInset;
- (UIEdgeInsets)getTableViewContentInset;
- (void)tryStartLoadAlbum;
- (void)startLoadAlbum;
- (void)getUserAlbums;
- (void)toEntryAlbum:(id /* block */)arg1;
- (void)loadAllAlbums:(BOOL)arg1;
- (void)selectAlbumFirst:(id)arg1;
- (void)selectAlbum:(id)arg1;
- (void)updateType:(id)arg1;
- (void)updateMode:(id)arg1;
- (void)updateCountLimit:(unsigned long long)arg1;
- (void)updateSelectedIds:(id)arg1;
- (void)updateNewSelectedItems;
- (void)updateShowType:(id)arg1;
- (void)updateSelectedAssetsIndex;
- (void)updateCurrentShowAssets;
- (BOOL)inShowType:(id)arg1;
- (int)isExsitInCache:(id)arg1;
- (void)updateLivePhoto:(BOOL)arg1;
- (void)onPickMorePhoto;
- (void)onOpenCamera;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (BOOL)canShowAddButton;
- (id)assetsForIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)cellHeight;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)scrollToBottom;
- (long long)indexInSelectedAssetInfosForAssetInfo:(id)arg1;
- (id)isInCacheLivePhoto:(id)arg1;
- (BOOL)cacheLivePhotoSelectState:(id)arg1;
- (void)clearSelectedItems;
- (unsigned long long)selectedImageInfosCount;
- (unsigned long long)selectedAssetInfosCount;
- (BOOL)hasSelectImageAsset;
- (BOOL)hasSelectVideoAsset;
- (BOOL)isAssetSelectable:(id)arg1;
- (void)viewStartLoadingNonBlock;
- (void)viewStopLoading;
- (void)onRemoveSelectedInfo:(id)arg1;
- (void)onInsertSelectedInfo:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)onLiveButtonClicked:(BOOL)arg1 assetInfo:(id)arg2;
- (void)previewImageWithAssetInfo:(id)arg1;
- (void)onClickEvent:(id)arg1;
- (void)tryPostOnClickEvent:(id)arg1;
- (void)postOnClickEvent:(id)arg1;
- (id)getFromLocalCache:(id)arg1;
- (id)getFromImageDict:(id)arg1;
- (id)assetCachePath;
- (id)getCacheFilePathWithName:(BOOL)arg1 fileName:(id)arg2;
- (id)getCacheFilePath:(BOOL)arg1;
- (id)saveCoverFile:(id)arg1 fileName:(id)arg2;
- (BOOL)isAssetHDR:(id)arg1;
- (void)convertHDRToStandard:(id)arg1 outputURL:(id)arg2 completion:(id /* block */)arg3;
- (void)postCompressAndSaveVideo:(id)arg1 assetInfo:(id)arg2 path:(id)arg3 needInsert:(BOOL)arg4;
- (void)compressAndSaveVideo:(id)arg1 needInsert:(BOOL)arg2;
- (id)createItemInfo:(int)arg1 height:(int)arg2 size:(unsigned int)arg3 duration:(int)arg4 framerate:(int)arg5 isGif:(BOOL)arg6;
- (void)getVideoInfo:(id)arg1 video:(id)arg2 filePath:(id)arg3;
- (void)getImageInfo:(id)arg1 image:(id)arg2 data:(id)arg3;
- (void)onChangeEvent:(BOOL)arg1 LiteAppAssetInfo:(id)arg2;
- (void)tryPostOnChangeEvent;
- (void)postOnChangeEvent;
- (void)onAlbumChangeEvent;
- (BOOL)isWechatAuthorized;
- (BOOL)isPhotoAuthorized;
- (void)tryInitAccessAuthView;
- (void)authorizeError;
- (void)onAccessAuthOpenSystemSetting;
- (void)openSystemSetting;
- (void)onAccessAuthShowLimitedPhotos;
- (void)onAccessAuthOpenWechatSetting;
- (void)requestWechatAuthAndLoadAlbum;
- (void)dispatchAction:(id /* block */)arg1;
- (void)registerChangeObserver;
- (void)unregisterChangeObserver;
- (void)onAlbumAssetsChange:(id)arg1;
- (void)backgroundUpdateAlbums:(id)arg1;
- (void)removeAssetsInChangeInfo:(id)arg1;
- (void)onRemoveSelectedInfoWithAssetId:(id)arg1;
- (void)onAlbumChanged:(id)arg1 changeInfo:(id)arg2;
- (void)onJumpToSystemSetting:(id)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (void)initBottomAccessLimitTipView;
- (id)createVideoLocalId:(id)arg1 videoSize:(unsigned int)arg2;
- (id)createVideoLocalIdOnlyWithPath:(id)arg1;
- (id)createImageLocalId:(id)arg1;
- (id)createCustomLocalIdOnlyWithPath:(id)arg1;
- (id)prepareImagePreviewControllerWithStartAssetInfo:(id)arg1;
- (void)onImagePreviewBrowserControllerCancelPreview;
- (void)sendImageFromScene:(long long)arg1;
- (void)saveAsset:(BOOL)arg1 complete:(id /* block */)arg2;
- (void)saveEditedImage:(BOOL)arg1 complete:(id /* block */)arg2;
- (void)onFinishEditAssetInfo:(id)arg1;
- (void)cancelSelectFromImagePreview;
- (BOOL)hasSelectBothImageAndVideoAsset;
- (BOOL)isSendButtonEnable;
- (void)onMoveSelectedInfo:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)onOriginImageCheckChanged;
- (void)onUpdateLivePhotoIconDisplayStatus:(id)arg1;
- (void)previewBrowserDidFinished:(id)arg1;
- (unsigned long long)selectedVideoAssetCount;
- (void)sendImageWithEditImageAttr:(id)arg1;
- (void)sendVideoWithDraft:(id)arg1;
- (void)onFinishEvent;
- (void)stopPreviewBrowserLoading;
- (void)popPreviewBrowserLoading;
- (void)processLivePhoto:(id)arg1 workingDictionary:(id)arg2 isClick:(BOOL)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)selectedAssetInfos;
- (void)setSelectedAssetInfos:(id)arg1;
- (double)heightsize;
- (void)setHeightsize:(double)arg1;
- (double)widthsize;
- (void)setWidthsize:(double)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)albumid;
- (void)setAlbumid:(id)arg1;
- (id)type;
- (void)setType:(id)arg1;
- (id)mode;
- (void)setMode:(id)arg1;
- (id)showType;
- (void)setShowType:(id)arg1;
- (id)preview;
- (void)setPreview:(id)arg1;
- (unsigned long long)countLimit;
- (void)setCountLimit:(unsigned long long)arg1;
- (BOOL)livePhoto;
- (void)setLivePhoto:(BOOL)arg1;
- (id)deviceAlbums;
- (void)setDeviceAlbums:(id)arg1;
- (long long)colNum;
- (void)setColNum:(long long)arg1;
- (BOOL)bPickerStyleForFile;
- (void)setBPickerStyleForFile:(BOOL)arg1;
- (UIEdgeInsets)additionalTableViewInsets;
- (void)setAdditionalTableViewInsets:(UIEdgeInsets)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)m_album;
- (void)setM_album:(id)arg1;
- (id)currentAlbum;
- (void)setCurrentAlbum:(id)arg1;
- (id)limitAssetIds;
- (void)setLimitAssetIds:(id)arg1;
- (id)accessAuthView;
- (void)setAccessAuthView:(id)arg1;
- (BOOL)hasRegisterChangeObserver;
- (void)setHasRegisterChangeObserver:(BOOL)arg1;
- (BOOL)allAlbumsLoaded;
- (void)setAllAlbumsLoaded:(BOOL)arg1;
- (BOOL)typeChanged;
- (void)setTypeChanged:(BOOL)arg1;
- (id)accessLimitTipView;
- (void)setAccessLimitTipView:(id)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (BOOL)isAccessLimited;
- (void)setIsAccessLimited:(BOOL)arg1;
- (BOOL)showAllAsset;
- (void)setShowAllAsset:(BOOL)arg1;
- (id)currVideoPath;
- (void)setCurrVideoPath:(id)arg1;
- (id)mCurrentShowAssets;
- (void)setMCurrentShowAssets:(id)arg1;
- (BOOL)firstAlbumInit;
- (void)setFirstAlbumInit:(BOOL)arg1;
- (id)m_proxyPreviewObjectForAllAsset;
- (void)setM_proxyPreviewObjectForAllAsset:(id)arg1;
- (id)controlCenter;
- (void)setControlCenter:(id)arg1;
- (id)editImageLogicController;
- (void)setEditImageLogicController:(id)arg1;
- (BOOL)m_livePhotoProcessDone;
- (void)setM_livePhotoProcessDone:(BOOL)arg1;
- (BOOL)m_imageProcessDone;
- (void)setM_imageProcessDone:(BOOL)arg1;
- (BOOL)m_livePhotoClickProcessDone;
- (void)setM_livePhotoClickProcessDone:(BOOL)arg1;
- (BOOL)m_imageClickProcessDone;
- (void)setM_imageClickProcessDone:(BOOL)arg1;
- (unsigned long long)m_liveProcessStartTime;
- (void)setM_liveProcessStartTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
