@interface FlutterBizImagePickViewController : MMUIViewController <MMAssetPickerControllerDelegate, MMImagePickerManagerDelegate, MMSightCameraViewControllerDelegate, WCAlbumPickViewControllerDelegate, MMAssetPickerControllerExt, MMUIViewControllerExt, BizTextCoverControllerDelegate>
{
    BOOL _canSendOriginalImage; // +0x70
    BOOL _allowTextCover; // +0x71
    BOOL _useNewImageEditLayout; // +0x72
    BOOL _didEnterSightImageEditor; // +0x73
    id <FlutterBizImagePickViewControllerDelegate> _delegate; // +0x78
    unsigned long long _limitCount; // +0x80
    unsigned long long _initSelectTabIndex; // +0x88
    long long _textCoverEditScene; // +0x90
    long long _livePhotoMode; // +0x98
    UIView * _tabView; // +0xa0
    UIStackView * _tabStackView; // +0xa8
    MMUIButton * _currentTabBtn; // +0xb0
    UIViewController * _currentTabVc; // +0xb8
    MMUIButton * _albumTabBtn; // +0xc0
    MMUIButton * _timelineBtn; // +0xc8
    MMUIButton * _sightTabBtn; // +0xd0
    MMImagePickerManagerOptionObj * _optionObj; // +0xd8
    UINavigationController * _albumViewController; // +0xe0
    MMAssetPickerController * _assetPickViewController; // +0xe8
    UINavigationController * _timelineViewController; // +0xf0
    WCAlbumPickViewController * _timelineAlbumViewController; // +0xf8
    MMSightCameraViewController * _sightViewController; // +0x100
    MMUIButton * _textCoverBtn; // +0x108
    BizTextCoverFlutterViewController * _textCoverController; // +0x110
    unsigned long long _selectTimelinePhotoCount; // +0x118
    unsigned long long _isEnterSubView; // +0x120
}
- (void)viewDidLoad;
- (void)initSelectFirstTab;
- (void)viewWillAppear:(BOOL)arg1;
- (id)childViewControllerForStatusBarHidden;
- (void)dealloc;
- (void)updateLayout;
- (void)viewIsAppearing:(BOOL)arg1;
- (BOOL)isSingleSelection;
- (void)MMUIViewControllerWillPushOrPresent:(id)arg1;
- (void)MMUIViewControllerWillPopOrDismiss:(id)arg1;
- (id)tabView;
- (id)albumTabBtn;
- (id)timelineBtn;
- (id)sightTabBtn;
- (id)textCoverBtn;
- (id)albumViewController;
- (id)timelineViewController;
- (id)sightViewController;
- (id)textCoverController;
- (void)onTapAlbumTabBtn;
- (void)onTapTimelineBtn;
- (void)onTapSightTabBtn;
- (void)onTapTextCoverBtn;
- (void)setCurrentTabBtn:(id)arg1;
- (void)setCurrentTabVc:(id)arg1;
- (long long)picFromScene;
- (void)jumpToEditorWithAssets:(id)arg1;
- (void)jumpToEditorWithLocalPaths:(id)arg1;
- (BOOL)shouldCheckOriginTraffic;
- (void)confirmOriginTrafficIfNeededWithAssets:(id)arg1 localPaths:(id)arg2 proceed:(id /* block */)arg3;
- (id)formatTrafficSize:(unsigned long long)arg1;
- (void)calcTotalOriginSizeWithAssets:(id)arg1 localPaths:(id)arg2 completion:(id /* block */)arg3;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)onSelectionItemNumberChanged:(unsigned long long)arg1;
- (void)onJumpCustomEditViewController:(id)arg1;
- (void)onAssetPickerControllerChangeSelectInfo:(id)arg1 index:(long long)arg2;
- (void)onAssetPickerControllerStartEditing;
- (void)onAssetPickerControllerFinishEditAssetInfo:(id)arg1;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)onSightCameraViewControllerStartEditing;
- (void)onSightCameraViewControllerCancelEditing;
- (void)onSightCameraViewControllerEndEditing;
- (void)didFinishCreateTextCover:(BOOL)arg1 info:(id)arg2;
- (void)updateTabBar;
- (void)reportEnterPicker;
- (void)reportTextCoverTabExposed;
- (void)reportTextCoverTabClicked;
- (void)onRequestNativeBottomOverlayVisible:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)limitCount;
- (void)setLimitCount:(unsigned long long)arg1;
- (unsigned long long)initSelectTabIndex;
- (void)setInitSelectTabIndex:(unsigned long long)arg1;
- (BOOL)canSendOriginalImage;
- (void)setCanSendOriginalImage:(BOOL)arg1;
- (BOOL)allowTextCover;
- (void)setAllowTextCover:(BOOL)arg1;
- (long long)textCoverEditScene;
- (void)setTextCoverEditScene:(long long)arg1;
- (BOOL)useNewImageEditLayout;
- (void)setUseNewImageEditLayout:(BOOL)arg1;
- (long long)livePhotoMode;
- (void)setLivePhotoMode:(long long)arg1;
- (void)setTabView:(id)arg1;
- (id)tabStackView;
- (void)setTabStackView:(id)arg1;
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
- (void)setTextCoverBtn:(id)arg1;
- (void)setTextCoverController:(id)arg1;
- (unsigned long long)selectTimelinePhotoCount;
- (void)setSelectTimelinePhotoCount:(unsigned long long)arg1;
- (unsigned long long)isEnterSubView;
- (void)setIsEnterSubView:(unsigned long long)arg1;
- (BOOL)didEnterSightImageEditor;
- (void)setDidEnterSightImageEditor:(BOOL)arg1;
- (void).cxx_destruct;
@end
