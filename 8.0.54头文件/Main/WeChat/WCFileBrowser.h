@interface WCFileBrowser : MMUIViewController <FBFilesViewControllerDelegate, MMAssetPickerControllerDelegate, MMAssetPickerControllerExt, WCFileBrowserToolBarDelegate, UIDocumentPickerDelegate>
{
    BOOL _loadAlbumFinish; // +0x68
    unsigned int _maxFileCount; // +0x6c
    unsigned int _currentIndex; // +0x70
    id <WCFileBrowseDelegate> _delegate; // +0x78
    id /* block */ _assetSelectedBlock; // +0x80
    MMUnderlineTabsView * _underlineTabView; // +0x88
    FBFilesViewController * _chatFilesViewController; // +0x90
    FBFilesViewController * _favFilesViewController; // +0x98
    UINavigationController * _albumControlCenter; // +0xa0
    MMAssetPickerController * _albumViewController; // +0xa8
    UIDocumentPickerViewController * _iCloudViewController; // +0xb0
    FBDocumentViewController * _documentViewController; // +0xb8
    unsigned long long _currentDataType; // +0xc0
    MMUIViewController * _currentVC; // +0xc8
    WCFileBrowserToolBar * _toolBar; // +0xd0
    WCFileBrowserToolBarViewModel * _toolBarViewModel; // +0xd8
    id /* block */ _GetFileInfosFromAlbum; // +0xe0
    unsigned long long _type; // +0xe8
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
- (void)reportFileSize;
- (unsigned int)maxFileCount;
- (void)setMaxFileCount:(unsigned int)arg1;
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
- (void).cxx_destruct;
@end

