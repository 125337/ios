@interface SystemImagePickViewController : UIViewController <MMAssetPickerControllerDelegate, LiteAppAssetViewDelegate, MMAlbumAccessAuthViewDelegate, PHPhotoLibraryChangeObserver, MMAssetCellDelegate, UITableViewDataSource, UITableViewDelegate, LiteAppAssetPickerControlCenter>
{
    NSMutableArray * _imageDictionaries; // +0x8
    NSMutableArray * _cacheDictionaries; // +0x10
    double _assetWidth; // +0x18
    double _realBottomBarHeight; // +0x20
    BOOL canHybridSendAsset; // +0x28
    BOOL canSendGif; // +0x29
    BOOL canSendMultiImage; // +0x2a
    BOOL canSendMultiVideo; // +0x2b
    BOOL canSendOriginImage; // +0x2c
    BOOL forceSendOriginImage; // +0x2d
    BOOL isOriginalImage; // +0x2e
    BOOL videoDirectToEdit; // +0x2f
    BOOL disableVideoSelection; // +0x30
    BOOL isOpenSendOriginVideo; // +0x31
    BOOL _bPickerStyleForFile; // +0x32
    BOOL _hasRegisterChangeObserver; // +0x33
    BOOL _allAlbumsLoaded; // +0x34
    BOOL _typeChanged; // +0x35
    BOOL _isAccessLimited; // +0x36
    int getPickerScene; // +0x38
    int previewEditScene; // +0x3c
    NSString * finishWording; // +0x40
    unsigned long long maxGifDataSize; // +0x48
    unsigned long long maxCount; // +0x50
    long long livePhotoMode; // +0x58
    id /* block */ assetSelectedBlock; // +0x60
    unsigned long long authScene; // +0x68
    id <SystemImagePickViewControllerDelegate> _delegate; // +0x70
    NSMutableArray * _selectedAssetInfos; // +0x78
    double _heightsize; // +0x80
    double _widthsize; // +0x88
    NSString * _appId; // +0x90
    NSString * _albumid; // +0x98
    NSString * _type; // +0xa0
    NSString * _mode; // +0xa8
    unsigned long long _countLimit; // +0xb0
    NSArray * _deviceAlbums; // +0xb8
    long long _colNum; // +0xc0
    MMTableView * _tableView; // +0xc8
    MMAlbum * _m_album; // +0xd0
    NSString * _currentAlbum; // +0xd8
    NSMutableSet * _limitAssetIds; // +0xe0
    MMAlbumAccessAuthView * _accessAuthView; // +0xe8
    UIView * _accessLimitTipView; // +0xf0
    NSObject<OS_dispatch_queue> * _queue; // +0xf8
    NSString * _currVideoPath; // +0x100
    UIEdgeInsets _additionalTableViewInsets; // +0x108
}
- (void)viewDidLoad;
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
- (void)selectAlbum:(id)arg1;
- (void)updateType:(id)arg1;
- (void)updateMode:(id)arg1;
- (void)updateCountLimit:(unsigned long long)arg1;
- (void)updateSelectedIds:(id)arg1;
- (void)updateNewSelectedItems;
- (int)isExsitInCache:(id)arg1;
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
- (void)onClickEvent:(id)arg1;
- (void)postOnClickEvent:(id)arg1;
- (id)getFromLocalCache:(id)arg1;
- (id)assetCachePath;
- (id)getCacheFilePathWithName:(BOOL)arg1 fileName:(id)arg2;
- (id)getCacheFilePath:(BOOL)arg1;
- (id)saveCoverFile:(id)arg1 fileName:(id)arg2;
- (BOOL)isAssetHDR:(id)arg1;
- (void)convertHDRToStandard:(id)arg1 outputURL:(id)arg2 completion:(id /* block */)arg3;
- (void)postCompressAndSaveVideo:(id)arg1 assetInfo:(id)arg2 path:(id)arg3 needInsert:(BOOL)arg4;
- (void)compressAndSaveVideo:(id)arg1 needInsert:(BOOL)arg2;
- (id)createItemInfo:(int)arg1 height:(int)arg2 size:(unsigned int)arg3 duration:(int)arg4 framerate:(int)arg5;
- (void)getVideoInfo:(id)arg1 video:(id)arg2 filePath:(id)arg3;
- (void)getImageInfo:(id)arg1 image:(id)arg2 data:(id)arg3;
- (void)onChangeEvent:(BOOL)arg1 LiteAppAssetInfo:(id)arg2;
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
- (id)createImageLocalId:(id)arg1;
- (BOOL)canHybridSendAsset;
- (void)setCanHybridSendAsset:(BOOL)arg1;
- (BOOL)canSendGif;
- (void)setCanSendGif:(BOOL)arg1;
- (BOOL)canSendMultiImage;
- (void)setCanSendMultiImage:(BOOL)arg1;
- (BOOL)canSendMultiVideo;
- (void)setCanSendMultiVideo:(BOOL)arg1;
- (BOOL)canSendOriginImage;
- (void)setCanSendOriginImage:(BOOL)arg1;
- (id)finishWording;
- (void)setFinishWording:(id)arg1;
- (BOOL)forceSendOriginImage;
- (void)setForceSendOriginImage:(BOOL)arg1;
- (int)getPickerScene;
- (void)setGetPickerScene:(int)arg1;
- (BOOL)isOriginalImage;
- (void)setIsOriginalImage:(BOOL)arg1;
- (unsigned long long)maxGifDataSize;
- (void)setMaxGifDataSize:(unsigned long long)arg1;
- (unsigned long long)maxCount;
- (void)setMaxCount:(unsigned long long)arg1;
- (int)previewEditScene;
- (void)setPreviewEditScene:(int)arg1;
- (BOOL)videoDirectToEdit;
- (void)setVideoDirectToEdit:(BOOL)arg1;
- (long long)livePhotoMode;
- (void)setLivePhotoMode:(long long)arg1;
- (BOOL)disableVideoSelection;
- (void)setDisableVideoSelection:(BOOL)arg1;
- (id /* block */)assetSelectedBlock;
- (void)setAssetSelectedBlock:(id /* block */)arg1;
- (BOOL)isOpenSendOriginVideo;
- (void)setIsOpenSendOriginVideo:(BOOL)arg1;
- (unsigned long long)authScene;
- (void)setAuthScene:(unsigned long long)arg1;
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
- (unsigned long long)countLimit;
- (void)setCountLimit:(unsigned long long)arg1;
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
- (id)currVideoPath;
- (void)setCurrVideoPath:(id)arg1;
- (void).cxx_destruct;
@end

