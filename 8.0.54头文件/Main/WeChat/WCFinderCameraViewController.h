@interface WCFinderCameraViewController : MMSightCameraViewController <ShortVideoBarDelegate, MMImagePickerManagerDelegate>
{
    WCFinderCameraViewModel * _viewModel; // +0x68
    id <WCFinderCameraViewControllerDelegate> _cameraDelegate; // +0x70
    MMImagePickerManagerOptionObj * _optionObj; // +0x78
    unsigned long long _enterTime; // +0x80
    NSString * _traceId; // +0x88
}
- (void)viewDidLoad;
- (void)handleDefaultCameraFrontBackDevice;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (id)getReportExtInfoDismissState:(BOOL)arg1 eventCode:(long long)arg2;
- (void)viewDidPush:(BOOL)arg1;
- (void)viewDidPresent:(BOOL)arg1;
- (void)viewWillPresentQuickReplySession:(id)arg1;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (BOOL)hidesStatusBar;
- (void)showImagePicker;
- (BOOL)useTransparentNavibar;
- (void)changeCameraCaptureSessionToRun:(BOOL)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)close;
- (id)shortVideoToolBarGetMusicSongId;
- (void)onShortVideoShootBtnClicked:(BOOL)arg1;
- (unsigned long long)getFinderPostEnterScene;
- (id)shortVideoToolBarGetTemplateFollowFeedId;
- (void)onShortVideoToolBtnClick:(unsigned long long)arg1;
- (void)onTemplateStartPress;
- (void)onCameraBtnPress;
- (void)reportFinderExtStatsReportByAction:(id)arg1;
- (void)registerYReportSdk;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)cameraDelegate;
- (void)setCameraDelegate:(id)arg1;
- (id)optionObj;
- (void)setOptionObj:(id)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (id)traceId;
- (void)setTraceId:(id)arg1;
- (void).cxx_destruct;
@end

