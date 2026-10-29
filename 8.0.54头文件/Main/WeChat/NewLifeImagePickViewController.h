@interface NewLifeImagePickViewController : MMUIViewController <MMAssetPickerControllerDelegate, MMImagePickerManagerDelegate, MMSightCameraViewControllerDelegate, WCAlbumPickViewControllerDelegate, MMAssetPickerControllerExt, MMUIViewControllerExt>
{
    id <NewLifeImagePickViewControllerDelegate> _delegate; // +0x68
    unsigned long long _limitCount; // +0x70
    unsigned long long _initSelectTabIndex; // +0x78
    UIView * _tabView; // +0x80
    MMUIButton * _currentTabBtn; // +0x88
    UIViewController * _currentTabVc; // +0x90
    MMUIButton * _albumTabBtn; // +0x98
    MMUIButton * _timelineBtn; // +0xa0
    MMUIButton * _sightTabBtn; // +0xa8
    MMImagePickerManagerOptionObj * _optionObj; // +0xb0
    UINavigationController * _albumViewController; // +0xb8
    MMAssetPickerController * _assetPickViewController; // +0xc0
    UINavigationController * _timelineViewController; // +0xc8
    WCAlbumPickViewController * _timelineAlbumViewController; // +0xd0
    MMSightCameraViewController * _sightViewController; // +0xd8
    unsigned long long _selectTimelinePhotoCount; // +0xe0
    unsigned long long _isEnterSubView; // +0xe8
}
- (void)viewDidLoad;
- (void)initSelectFirstTab;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;
- (void)updateLayout;
- (BOOL)isSingleSelection;
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
- (void)onSelectionItemNumberChanged:(unsigned long long)arg1;
- (void)onJumpCustomEditViewController:(id)arg1;
- (void)onAssetPickerControllerChangeSelectInfo:(id)arg1 index:(long long)arg2;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)onSightCameraViewControllerStartEditing;
- (void)onSightCameraViewControllerEndEditing;
- (void)updateTabBar;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)limitCount;
- (void)setLimitCount:(unsigned long long)arg1;
- (unsigned long long)initSelectTabIndex;
- (void)setInitSelectTabIndex:(unsigned long long)arg1;
- (void)setTabView:(id)arg1;
- (id)currentTabBtn;
- (id)currentTabVc;
- (void)setAlbumTabBtn:(id)arg1;
- (void)setTimelineBtn:(id)arg1;
- (void)setSightTabBtn:(id)arg1;
- (id)optionObj;
- (void)setOptionObj:(id)arg1;
- (void)setAlbumViewController:(id)arg1;
- (id)assetPickViewController;
- (void)setAssetPickViewController:(id)arg1;
- (void)setTimelineViewController:(id)arg1;
- (id)timelineAlbumViewController;
- (void)setTimelineAlbumViewController:(id)arg1;
- (void)setSightViewController:(id)arg1;
- (unsigned long long)selectTimelinePhotoCount;
- (void)setSelectTimelinePhotoCount:(unsigned long long)arg1;
- (unsigned long long)isEnterSubView;
- (void)setIsEnterSubView:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

