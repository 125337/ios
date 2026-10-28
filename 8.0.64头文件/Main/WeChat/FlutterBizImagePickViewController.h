@interface FlutterBizImagePickViewController : MMUIViewController <MMAssetPickerControllerDelegate, MMImagePickerManagerDelegate, MMSightCameraViewControllerDelegate, WCAlbumPickViewControllerDelegate, MMAssetPickerControllerExt, MMUIViewControllerExt>
{
    BOOL _canSendOriginalImage; // +0x70
    id <FlutterBizImagePickViewControllerDelegate> _delegate; // +0x78
    unsigned long long _limitCount; // +0x80
    unsigned long long _initSelectTabIndex; // +0x88
    long long _livePhotoMode; // +0x90
    UIView * _tabView; // +0x98
    MMUIButton * _currentTabBtn; // +0xa0
    UIViewController * _currentTabVc; // +0xa8
    MMUIButton * _albumTabBtn; // +0xb0
    MMUIButton * _timelineBtn; // +0xb8
    MMUIButton * _sightTabBtn; // +0xc0
    MMImagePickerManagerOptionObj * _optionObj; // +0xc8
    UINavigationController * _albumViewController; // +0xd0
    MMAssetPickerController * _assetPickViewController; // +0xd8
    UINavigationController * _timelineViewController; // +0xe0
    WCAlbumPickViewController * _timelineAlbumViewController; // +0xe8
    MMSightCameraViewController * _sightViewController; // +0xf0
    unsigned long long _selectTimelinePhotoCount; // +0xf8
    unsigned long long _isEnterSubView; // +0x100
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
- (long long)picFromScene;
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
- (BOOL)canSendOriginalImage;
- (void)setCanSendOriginalImage:(BOOL)arg1;
- (long long)livePhotoMode;
- (void)setLivePhotoMode:(long long)arg1;
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
