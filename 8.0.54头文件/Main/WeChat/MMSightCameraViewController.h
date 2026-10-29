@interface MMSightCameraViewController : MMUIViewController <ShortVideoBarDelegate>
{
    BOOL _needMaasEffect; // +0x68
    BOOL _isLandscapeEnabled; // +0x69
    BOOL _isForbiddenShortVideoToolBarAnimation; // +0x6a
    BOOL _isDismissByOutside; // +0x6b
    BOOL _isEditing; // +0x6c
    BOOL _isVCFrameUpdated; // +0x6d
    id <MMSightCameraViewControllerDelegate> _delegate; // +0x70
    ShortVideoToolbar * _shortVideoToolbar; // +0x78
    id /* block */ _startEditingAction; // +0x80
    id /* block */ _endEditingAction; // +0x88
    id /* block */ _customCameraCloseBlock; // +0x90
    unsigned long long _shortVideoToolbarUIStyle; // +0x98
    unsigned long long _scene; // +0xa0
    NSString * _finishButtonWording; // +0xa8
    RecommendedMusicInfo * _patMusicInfo; // +0xb0
    FinderVideoTemplateInfo * _templateInfo; // +0xb8
    unsigned long long _finderEventId; // +0xc0
    NSString * _shortURLForPreviewingTemplate; // +0xc8
    NSMutableArray * _wxToMaasMusicIds; // +0xd0
    unsigned long long _authScene; // +0xd8
    double _contentBottomPadding; // +0xe0
    unsigned long long _cameraMode; // +0xe8
    MMShortVideoParamModel * _reportModel; // +0xf0
}
- (id)init;
- (id)initWithCameraMode:(unsigned long long)arg1 scene:(int)arg2;
- (void)didEnterBackground;
- (void)onCameraStop:(id)arg1;
- (BOOL)hidesStatusBar;
- (BOOL)useTransparentNavibar;
- (void)viewDidLoad;
- (BOOL)enableVideo;
- (BOOL)shouldInteractiveDismiss;
- (void)viewDidLayoutSubviews;
- (void)tryActiveCamera;
- (void)requestAuthForCamera:(unsigned long long)arg1 statusForCamera:(unsigned int)arg2 statusForMicrophone:(unsigned int)arg3;
- (void)requestAuthForMicrophone:(unsigned long long)arg1 statusForCamera:(unsigned int)arg2 statusForMicrophone:(unsigned int)arg3;
- (void)activeCamera;
- (void)handleDefaultCameraFrontBackDevice;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)closeAfterTakenVideo;
- (void)close;
- (void)deActiveCamera;
- (void)closeAfterDone;
- (unsigned long long)getUsedAuthScene;
- (void)didFinishPickingAssetWithDataItem:(id)arg1;
- (id)currentViewController;
- (void)onShortVideoToolBtnClick:(unsigned long long)arg1;
- (void)showImagePicker;
- (id /* block */)onShortVideoWillTaken;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)handleShortVideoWithPath:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (id /* block */)onSightPictureWillTaken;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)onCameraResign;
- (BOOL)isShowingCameraGuide;
- (id)chatUserNameForSightStatistics;
- (void)onStartRecord;
- (void)onStartEditing;
- (void)onEndEditing;
- (void)onCancelEditing;
- (void)onStartExportingWithAssetId:(id)arg1;
- (void)onEndExportingWithAssetId:(id)arg1 error:(id)arg2;
- (void)onShortVideoShootBtnClicked:(BOOL)arg1;
- (void)onCreateCameraPreviewView;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)sightCameraViewControllerDidRotate:(id)arg1;
- (void)_initRotation;
- (long long)_safeGetCurrentDeviceOrientation;
- (void)_rotateToOrientation:(long long)arg1 withAnimationDuration:(long long)arg2;
- (CGSize)_getSizeForShortVideoToolbar;
- (void)_relayoutShortVideoToolbar;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (void)reportCameraActionsLog;
- (id)toolbarBtnOrder;
- (void)viewWillBePresented:(BOOL)arg1;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)onImagePreviewBrowserClickPostFinderLongVideoWithPostSession:(id)arg1;
- (void)onWCEditVideoViewControllerDraftWithPostSession:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)shortVideoToolbar;
- (void)setShortVideoToolbar:(id)arg1;
- (id /* block */)startEditingAction;
- (void)setStartEditingAction:(id /* block */)arg1;
- (id /* block */)endEditingAction;
- (void)setEndEditingAction:(id /* block */)arg1;
- (id /* block */)customCameraCloseBlock;
- (void)setCustomCameraCloseBlock:(id /* block */)arg1;
- (unsigned long long)shortVideoToolbarUIStyle;
- (void)setShortVideoToolbarUIStyle:(unsigned long long)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)finishButtonWording;
- (void)setFinishButtonWording:(id)arg1;
- (id)patMusicInfo;
- (void)setPatMusicInfo:(id)arg1;
- (id)templateInfo;
- (void)setTemplateInfo:(id)arg1;
- (unsigned long long)finderEventId;
- (void)setFinderEventId:(unsigned long long)arg1;
- (BOOL)needMaasEffect;
- (void)setNeedMaasEffect:(BOOL)arg1;
- (id)shortURLForPreviewingTemplate;
- (void)setShortURLForPreviewingTemplate:(id)arg1;
- (id)wxToMaasMusicIds;
- (void)setWxToMaasMusicIds:(id)arg1;
- (unsigned long long)authScene;
- (void)setAuthScene:(unsigned long long)arg1;
- (BOOL)isLandscapeEnabled;
- (void)setIsLandscapeEnabled:(BOOL)arg1;
- (BOOL)isForbiddenShortVideoToolBarAnimation;
- (void)setIsForbiddenShortVideoToolBarAnimation:(BOOL)arg1;
- (BOOL)isDismissByOutside;
- (void)setIsDismissByOutside:(BOOL)arg1;
- (double)contentBottomPadding;
- (void)setContentBottomPadding:(double)arg1;
- (unsigned long long)cameraMode;
- (void)setCameraMode:(unsigned long long)arg1;
- (BOOL)isEditing;
- (void)setIsEditing:(BOOL)arg1;
- (id)reportModel;
- (void)setReportModel:(id)arg1;
- (BOOL)isVCFrameUpdated;
- (void)setIsVCFrameUpdated:(BOOL)arg1;
- (void).cxx_destruct;
@end

