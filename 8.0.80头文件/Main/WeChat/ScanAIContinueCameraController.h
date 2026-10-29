@interface ScanAIContinueCameraController : MMUIViewController <MMImagePickerManagerDelegate, SightCameraCaptureDelegate, ScanAIContinueCameraViewDelegate>
{
    BOOL _shouldRecreateCameraAfterPhotoFailure; // +0x70
    BOOL _shouldRestoreCameraPositionAfterRecreation; // +0x71
    BOOL _isCameraReady; // +0x72
    BOOL _isRequestingCameraAuthorization; // +0x73
    BOOL _hasReceivedCameraPreviewReady; // +0x74
    BOOL _isWaitingForCameraPauseCompletion; // +0x75
    BOOL _hasReportedAlbumImageReadFailure; // +0x76
    BOOL _isFlashEnabled; // +0x77
    BOOL _hasSavedNavigationBarState; // +0x78
    BOOL _navigationBarWasHidden; // +0x79
    BOOL _statusBarWasHidden; // +0x7a
    BOOL _shouldAnimateDismiss; // +0x7b
    BOOL _shouldFadeResultTransitionAfterDismiss; // +0x7c
    BOOL _isDismissalInProgress; // +0x7d
    BOOL _hasCameraPageBeenRemoved; // +0x7e
    NSString * _sourceId; // +0x80
    long long _sourceFrom; // +0x88
    unsigned long long _scanEntrance; // +0x90
    SightFacade * _cameraFacade; // +0x98
    SightCameraPreviewView * _cameraPreviewView; // +0xa0
    ScanAIContinueCameraView * _cameraControlView; // +0xa8
    double _pinchStartZoomFactor; // +0xb0
    double _selectedZoomFactor; // +0xb8
    unsigned long long _cameraStartState; // +0xc0
    unsigned long long _cameraStartAttempt; // +0xc8
    long long _cameraPositionBeforeRecreation; // +0xd0
    unsigned long long _albumState; // +0xd8
    unsigned long long _photoState; // +0xe0
    unsigned long long _finishState; // +0xe8
    ScanAIContinueCameraController * _dismissalRetainedController; // +0xf0
    unsigned long long _photoCaptureIdentifier; // +0xf8
    NSMutableSet * _reportedExposureViewIds; // +0x100
    long long _pendingImageSource; // +0x108
    UIImage * _pendingImage; // +0x110
    id /* block */ _completionBlock; // +0x118
    id /* block */ _pageDidAppearHandler; // +0x120
}
+ (unsigned long long)scanEntranceForSourceFrom:(long long)arg1;
- (id)initWithExportParams:(id)arg1 sourceFrom:(long long)arg2 pageDidAppear:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)reportCameraPageAppearIfNeeded;
- (void)viewDidLayoutSubviews;
- (BOOL)shouldInteractiveDismiss;
- (void)setupEdgeSwipeToCloseGesture;
- (void)handleEdgeSwipeToClose:(id)arg1;
- (void)dismissCameraWithLivePreview;
- (void)dismissCameraForApplicationResign;
- (BOOL)canDismissCamera;
- (void)applyFullscreenCameraChrome;
- (void)restoreCameraChrome;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)registerYReportSdk;
- (id)cameraReportBaseParams;
- (void)applyCameraReportPageInfoToController:(id)arg1;
- (void)reportCameraEvent:(id)arg1 viewId:(id)arg2 extraParams:(id)arg3;
- (void)reportCameraMediaError:(unsigned long long)arg1;
- (void)reportAlbumImageReadFailureIfNeeded;
- (void)reportCameraExposureIfNeededForViewId:(id)arg1;
- (void)reportCameraElementExposuresIfNeeded;
- (void)setupViews;
- (void)observeApplicationLifecycle;
- (void)requestCameraAccessAndStart;
- (void)showCameraAuthorizationAlert;
- (void)startCameraIfNeeded;
- (void)pauseCameraForAlbum;
- (void)resumeCameraAfterAlbum;
- (void)releaseCameraResources;
- (void)beginFinishWithImage:(id)arg1 source:(long long)arg2 animated:(BOOL)arg3;
- (void)cameraStartCompleted:(id)arg1;
- (void)cameraPreviewReady:(id)arg1;
- (void)cameraStopped:(id)arg1;
- (void)releaseStoppedCameraForRecreation;
- (void)pauseCameraAfterStartIfNeeded;
- (void)scheduleDismissCameraStopTimeoutIfNeeded;
- (void)applicationWillResignActive:(id)arg1;
- (void)restartCurrentCamera;
- (void)continueCameraViewDidTapClose:(id)arg1;
- (void)continueCameraViewDidTapSwitchCamera:(id)arg1;
- (void)continueCameraView:(id)arg1 didChangePinchScale:(double)arg2 state:(long long)arg3;
- (void)continueCameraViewDidTapFlash:(id)arg1;
- (void)continueCameraViewDidTapShutter:(id)arg1;
- (void)handleCapturedPhoto:(id)arg1 fromFrontCamera:(BOOL)arg2;
- (void)continueCameraViewDidTapAlbum:(id)arg1;
- (void)presentImagePicker;
- (id)assetPickerController:(id)arg1 didLoadPreviewForAsset:(id)arg2 withCurrentState:(id)arg3;
- (void)MMImagePickerManager:(id)arg1 didFailToPickAssets:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManagerDidPopOrDismiss:(id)arg1;
- (void)dismissPresentedPicker:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)playImageTransitionWithImage:(id)arg1 source:(long long)arg2;
- (void)playPreparedImageTransitionWithImage:(id)arg1 source:(long long)arg2;
- (void)prepareImageTransitionWithImage:(id)arg1;
- (void)completeDismissalCallback;
- (void)completeFinish;
- (void)completeFinishCleanupIfNeeded;
- (void)updateCameraFlashlightMode:(long long)arg1;
- (void)updateCameraTorchMode:(long long)arg1;
- (void)restoreCameraPositionAfterRecreationIfNeeded;
- (void)applySelectedCameraStateAfterRestart;
- (void)applySelectedZoomFactorToCamera;
- (BOOL)canOperateCamera;
- (void)updateControls;
- (BOOL)sightCameraIsVisible;
- (unsigned long long)sightCameraCaptureScene;
- (id)sourceId;
- (void)setSourceId:(id)arg1;
- (long long)sourceFrom;
- (void)setSourceFrom:(long long)arg1;
- (unsigned long long)scanEntrance;
- (void)setScanEntrance:(unsigned long long)arg1;
- (id)cameraFacade;
- (void)setCameraFacade:(id)arg1;
- (id)cameraPreviewView;
- (void)setCameraPreviewView:(id)arg1;
- (id)cameraControlView;
- (void)setCameraControlView:(id)arg1;
- (double)pinchStartZoomFactor;
- (void)setPinchStartZoomFactor:(double)arg1;
- (double)selectedZoomFactor;
- (void)setSelectedZoomFactor:(double)arg1;
- (unsigned long long)cameraStartState;
- (void)setCameraStartState:(unsigned long long)arg1;
- (unsigned long long)cameraStartAttempt;
- (void)setCameraStartAttempt:(unsigned long long)arg1;
- (BOOL)shouldRecreateCameraAfterPhotoFailure;
- (void)setShouldRecreateCameraAfterPhotoFailure:(BOOL)arg1;
- (long long)cameraPositionBeforeRecreation;
- (void)setCameraPositionBeforeRecreation:(long long)arg1;
- (BOOL)shouldRestoreCameraPositionAfterRecreation;
- (void)setShouldRestoreCameraPositionAfterRecreation:(BOOL)arg1;
- (BOOL)isCameraReady;
- (void)setIsCameraReady:(BOOL)arg1;
- (BOOL)isRequestingCameraAuthorization;
- (void)setIsRequestingCameraAuthorization:(BOOL)arg1;
- (BOOL)hasReceivedCameraPreviewReady;
- (void)setHasReceivedCameraPreviewReady:(BOOL)arg1;
- (BOOL)isWaitingForCameraPauseCompletion;
- (void)setIsWaitingForCameraPauseCompletion:(BOOL)arg1;
- (unsigned long long)albumState;
- (void)setAlbumState:(unsigned long long)arg1;
- (BOOL)hasReportedAlbumImageReadFailure;
- (void)setHasReportedAlbumImageReadFailure:(BOOL)arg1;
- (unsigned long long)photoState;
- (void)setPhotoState:(unsigned long long)arg1;
- (unsigned long long)finishState;
- (void)setFinishState:(unsigned long long)arg1;
- (BOOL)isFlashEnabled;
- (void)setIsFlashEnabled:(BOOL)arg1;
- (BOOL)hasSavedNavigationBarState;
- (void)setHasSavedNavigationBarState:(BOOL)arg1;
- (BOOL)navigationBarWasHidden;
- (void)setNavigationBarWasHidden:(BOOL)arg1;
- (BOOL)statusBarWasHidden;
- (void)setStatusBarWasHidden:(BOOL)arg1;
- (BOOL)shouldAnimateDismiss;
- (void)setShouldAnimateDismiss:(BOOL)arg1;
- (BOOL)shouldFadeResultTransitionAfterDismiss;
- (void)setShouldFadeResultTransitionAfterDismiss:(BOOL)arg1;
- (BOOL)isDismissalInProgress;
- (void)setIsDismissalInProgress:(BOOL)arg1;
- (BOOL)hasCameraPageBeenRemoved;
- (void)setHasCameraPageBeenRemoved:(BOOL)arg1;
- (id)dismissalRetainedController;
- (void)setDismissalRetainedController:(id)arg1;
- (unsigned long long)photoCaptureIdentifier;
- (void)setPhotoCaptureIdentifier:(unsigned long long)arg1;
- (id)reportedExposureViewIds;
- (void)setReportedExposureViewIds:(id)arg1;
- (long long)pendingImageSource;
- (void)setPendingImageSource:(long long)arg1;
- (id)pendingImage;
- (void)setPendingImage:(id)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (id /* block */)pageDidAppearHandler;
- (void)setPageDidAppearHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
