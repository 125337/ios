@interface NewLifeImagePickViewController : MMUIViewController <MMAssetPickerControllerDelegate, MMImagePickerManagerDelegate, MMSightCameraViewControllerDelegate, WCAlbumPickViewControllerDelegate, MMAssetPickerControllerExt, MMUIViewControllerExt>
{
    BOOL _fullSelection; // +0x70
    unsigned int _mode; // +0x74
    id <NewLifeImagePickViewControllerDelegate> _delegate; // +0x78
    unsigned long long _limitCount; // +0x80
    unsigned long long _initSelectTabIndex; // +0x88
    long long _enterScene; // +0x90
    NSString * _postSessionId; // +0x98
    MMImagePickerManagerOptionObj * _albumOptionObj; // +0xa0
    MMImagePickerManagerOptionObj * _timelineOptionObj; // +0xa8
    MMImagePickerManagerOptionObj * _sightOptionObj; // +0xb0
    UIView * _tabView; // +0xb8
    MMUIButton * _currentTabBtn; // +0xc0
    UIViewController * _currentTabVc; // +0xc8
    MMUIButton * _albumTabBtn; // +0xd0
    MMUIButton * _timelineBtn; // +0xd8
    MMUIButton * _sightTabBtn; // +0xe0
    UINavigationController * _albumViewController; // +0xe8
    MMAssetPickerController * _assetPickViewController; // +0xf0
    UINavigationController * _timelineViewController; // +0xf8
    WCAlbumPickViewController * _timelineAlbumViewController; // +0x100
    UINavigationController * _sightViewController; // +0x108
    MMSightCameraViewController * _sightPickViewController; // +0x110
    unsigned long long _selectTimelinePhotoCount; // +0x118
    unsigned long long _isEnterSubView; // +0x120
}
- (void)viewDidLoad;
- (void)initSelectFirstTab;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;
- (void)updateLayout;
- (BOOL)isSingleSelection;
- (unsigned long long)limitCount;
- (void)MMUIViewControllerWillPushOrPresent:(id)arg1;
- (void)MMUIViewControllerWillPopOrDismiss:(id)arg1;
- (id)tabView;
- (id)albumTabBtn;
- (id)timelineBtn;
- (id)sightTabBtn;
- (id)albumViewController;
- (id)timelineViewController;
- (id)sightViewController;
- (void)onTapAlbumTabBtn;
- (void)onTapTimelineBtn;
- (void)onTapSightTabBtn;
- (void)setCurrentTabBtn:(id)arg1;
- (void)setCurrentTabVc:(id)arg1;
- (void)jumpToEditorWithAssets:(id)arg1;
- (void)jumpToEditorWithLocalPaths:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)onQuit;
- (void)onSelectionItemNumberChanged:(unsigned long long)arg1;
- (void)onJumpCustomEditViewController:(id)arg1;
- (void)onAssetPickerControllerChangeSelectInfo:(id)arg1 index:(long long)arg2;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)onSightCameraViewControllerStartEditing;
- (void)onSightCameraViewControllerEndEditing;
- (void)enterSubView:(BOOL)arg1;
- (void)updateTabBar;
- (void)registerYReportSdk;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)fullSelection;
- (void)setFullSelection:(BOOL)arg1;
- (void)setLimitCount:(unsigned long long)arg1;
- (unsigned long long)initSelectTabIndex;
- (void)setInitSelectTabIndex:(unsigned long long)arg1;
- (long long)enterScene;
- (void)setEnterScene:(long long)arg1;
- (id)postSessionId;
- (void)setPostSessionId:(id)arg1;
- (unsigned int)mode;
- (void)setMode:(unsigned int)arg1;
- (id)albumOptionObj;
- (void)setAlbumOptionObj:(id)arg1;
- (id)timelineOptionObj;
- (void)setTimelineOptionObj:(id)arg1;
- (id)sightOptionObj;
- (void)setSightOptionObj:(id)arg1;
- (void)setTabView:(id)arg1;
- (id)currentTabBtn;
- (id)currentTabVc;
- (void)setAlbumTabBtn:(id)arg1;
- (void)setTimelineBtn:(id)arg1;
- (void)setSightTabBtn:(id)arg1;
- (void)setAlbumViewController:(id)arg1;
- (id)assetPickViewController;
- (void)setAssetPickViewController:(id)arg1;
- (void)setTimelineViewController:(id)arg1;
- (id)timelineAlbumViewController;
- (void)setTimelineAlbumViewController:(id)arg1;
- (void)setSightViewController:(id)arg1;
- (id)sightPickViewController;
- (void)setSightPickViewController:(id)arg1;
- (unsigned long long)selectTimelinePhotoCount;
- (void)setSelectTimelinePhotoCount:(unsigned long long)arg1;
- (unsigned long long)isEnterSubView;
- (void)setIsEnterSubView:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
