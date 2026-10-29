@interface WCFileBrowser : MMUIViewController <FBFilesViewControllerDelegate, MMAssetPickerControllerDelegate, MMAssetPickerControllerExt, WCFileBrowserToolBarDelegate, UIDocumentPickerDelegate>
{
    BOOL _loadAlbumFinish; // +0x70
    unsigned int _maxFileCount; // +0x74
    unsigned int _currentIndex; // +0x78
    unsigned long long _singleFileSizeLimit; // +0x80
    NSString * _confirmBtnText; // +0x88
    NSArray * _allowFileExtension; // +0x90
    id <WCFileBrowseDelegate> _delegate; // +0x98
    id /* block */ _assetSelectedBlock; // +0xa0
    MMUnderlineTabsView * _underlineTabView; // +0xa8
    FBFilesViewController * _chatFilesViewController; // +0xb0
    FBFilesViewController * _favFilesViewController; // +0xb8
    UINavigationController * _albumControlCenter; // +0xc0
    MMAssetPickerController * _albumViewController; // +0xc8
    UIDocumentPickerViewController * _iCloudViewController; // +0xd0
    FBDocumentViewController * _documentViewController; // +0xd8
    unsigned long long _currentDataType; // +0xe0
    MMUIViewController * _currentVC; // +0xe8
    WCFileBrowserToolBar * _toolBar; // +0xf0
    WCFileBrowserToolBarViewModel * _toolBarViewModel; // +0xf8
    id /* block */ _GetFileInfosFromAlbum; // +0x100
    unsigned long long _type; // +0x108
    NSArray * _customTabItems; // +0x110
}
- (id)initWithType:(unsigned long long)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)chatFilesViewController;
- (id)favFilesViewController;
- (UIEdgeInsets)childAdditionalInset;
- (id)albumViewController;
- (id)albumOptions;
- (void)initAlbumViewController;
- (id)iCloudViewController;
- (id)documentViewController;
- (void)setTabBarItems:(id)arg1;
- (id)tabItemArrayWithType:(unsigned long long)arg1;
- (id)tabViewForTabItemWithText:(id)arg1;
- (id)tabItemWithTabView:(id)arg1;
- (id)tabItemForChatLog;
- (id)tabItemForFav;
- (id)tabItemForAlbum;
- (id)tabItemFor_iCloud;
- (void)initViews;
- (void)displayLastVC;
- (BOOL)shouldInteractiveDismiss;
- (void)onInteractiveDismissComplete;
- (id)navigationBarBackgroundColor;
- (BOOL)showNavigationBarSepLine;
- (void)onBack;
- (void)onTabsViewValueChanged:(id)arg1;
- (void)replaceController:(id)arg1 newController:(id)arg2;
- (void)onOpeniCloud;
- (void)checkAlbumVCLoadingState;
- (void)FBFilesViewController:(id)arg1 DidSelectFiles:(id)arg2;
- (BOOL)onFileBrowseWillSelectFile:(id)arg1 selectedFiles:(id)arg2;
- (void)onAssetPickerController:(id)arg1 clickAssetInfo:(id)arg2;
- (void)onAssetPickerLoadAlbumFinish:(BOOL)arg1;
- (void)onAssetPickerControllerChangeSelectInfo:(id)arg1 index:(long long)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)onToolBarRemoveFile:(id)arg1 dataType:(unsigned long long)arg2;
- (void)onToolBarSendButtonClicked;
- (void)sendMultiSelectFiles:(id)arg1;
- (void)reportLargeFileFinishButton;
- (void)reportFileSize;
- (unsigned int)maxFileCount;
- (void)setMaxFileCount:(unsigned int)arg1;
- (unsigned long long)singleFileSizeLimit;
- (void)setSingleFileSizeLimit:(unsigned long long)arg1;
- (id)confirmBtnText;
- (void)setConfirmBtnText:(id)arg1;
- (id)allowFileExtension;
- (void)setAllowFileExtension:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)assetSelectedBlock;
- (void)setAssetSelectedBlock:(id /* block */)arg1;
- (id)underlineTabView;
- (void)setUnderlineTabView:(id)arg1;
- (void)setChatFilesViewController:(id)arg1;
- (void)setFavFilesViewController:(id)arg1;
- (id)albumControlCenter;
- (void)setAlbumControlCenter:(id)arg1;
- (void)setAlbumViewController:(id)arg1;
- (void)setICloudViewController:(id)arg1;
- (void)setDocumentViewController:(id)arg1;
- (unsigned long long)currentDataType;
- (void)setCurrentDataType:(unsigned long long)arg1;
- (id)currentVC;
- (void)setCurrentVC:(id)arg1;
- (unsigned int)currentIndex;
- (void)setCurrentIndex:(unsigned int)arg1;
- (id)toolBar;
- (void)setToolBar:(id)arg1;
- (id)toolBarViewModel;
- (void)setToolBarViewModel:(id)arg1;
- (BOOL)loadAlbumFinish;
- (void)setLoadAlbumFinish:(BOOL)arg1;
- (id /* block */)GetFileInfosFromAlbum;
- (void)setGetFileInfosFromAlbum:(id /* block */)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)customTabItems;
- (void)setCustomTabItems:(id)arg1;
- (void).cxx_destruct;
@end
