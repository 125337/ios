@interface EcsFittingRoomMediaFlowCoordinator : NSObject <EcsFittingRoomAlbumSourceDelegate, EcsFittingRoomCameraSourceDelegate, EcsFittingRoomCropPresenterDelegate>
{
    BOOL _flowActive; // +0x8
    BOOL _flowSourceResultAccepted; // +0x9
    BOOL _flowSourceDismissed; // +0xa
    BOOL _flowCropOpening; // +0xb
    UIViewController * _viewController; // +0x10
    id <EcsFittingRoomMediaFlowCoordinatorDelegate> _delegate; // +0x18
    long long _flowId; // +0x20
    unsigned long long _flowSource; // +0x28
    EcsFittingRoomAlbumSource * _albumSource; // +0x30
    EcsFittingRoomCameraSource * _cameraSource; // +0x38
    EcsFittingRoomCropPresenter * _cropPresenter; // +0x40
    UIImage * _flowSourceImage; // +0x48
    long long _flowSourceAttemptId; // +0x50
    NSString * _flowSourcePath; // +0x58
    NSString * _flowOutputPath; // +0x60
}
- (void)startWithSource:(unsigned long long)arg1 minimumImageEdge:(long long)arg2 maximumImageAspectRatio:(double)arg3;
- (void)completePhotoProcessing;
- (void)resumePhotoCroppingWithHint:(unsigned long long)arg1 message:(id)arg2 failureDetail:(id)arg3;
- (void)abortWithoutCallback;
- (id)albumSource;
- (id)cameraSource;
- (id)cropPresenter;
- (BOOL)isActiveFlow:(long long)arg1;
- (BOOL)isActiveSourceAttempt:(long long)arg1 flowId:(long long)arg2;
- (void)prepareForSourcePresentation;
- (void)replaceFlowSourcePath:(id)arg1;
- (void)replaceFlowOutputPath:(id)arg1;
- (void)acceptSourcePath:(id)arg1 image:(id)arg2 sourceAttemptId:(long long)arg3 flowId:(long long)arg4;
- (void)markSourceDismissedForAttempt:(long long)arg1 flowId:(long long)arg2;
- (void)tryOpenCropForFlow:(long long)arg1;
- (void)clearFlowWithNotifyCancelled:(BOOL)arg1;
- (void)notifyFlowCancelled;
- (void)notifyFlowFailed:(unsigned long long)arg1;
- (void)albumSourceDidPickImage:(id)arg1 filePath:(id)arg2;
- (void)albumSourceDidCancel;
- (void)albumSourceDidFail:(unsigned long long)arg1;
- (void)albumSourceDidDismissAfterPicking;
- (void)cameraSourceDidCaptureImage:(id)arg1 filePath:(id)arg2;
- (void)cameraSourceDidDismissAfterCapture;
- (void)cameraSourceDidCancel;
- (void)cameraSourceDidFail:(unsigned long long)arg1;
- (void)cropPresenter:(id)arg1 didFinishCropping:(id)arg2 editor:(id)arg3 completion:(id /* block */)arg4;
- (void)cropPresenterDidCancel:(id)arg1;
- (void)cropPresenter:(id)arg1 didFail:(unsigned long long)arg2;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)flowActive;
- (void)setFlowActive:(BOOL)arg1;
- (long long)flowId;
- (void)setFlowId:(long long)arg1;
- (unsigned long long)flowSource;
- (void)setFlowSource:(unsigned long long)arg1;
- (void)setAlbumSource:(id)arg1;
- (void)setCameraSource:(id)arg1;
- (void)setCropPresenter:(id)arg1;
- (id)flowSourceImage;
- (void)setFlowSourceImage:(id)arg1;
- (long long)flowSourceAttemptId;
- (void)setFlowSourceAttemptId:(long long)arg1;
- (BOOL)flowSourceResultAccepted;
- (void)setFlowSourceResultAccepted:(BOOL)arg1;
- (BOOL)flowSourceDismissed;
- (void)setFlowSourceDismissed:(BOOL)arg1;
- (BOOL)flowCropOpening;
- (void)setFlowCropOpening:(BOOL)arg1;
- (id)flowSourcePath;
- (void)setFlowSourcePath:(id)arg1;
- (id)flowOutputPath;
- (void)setFlowOutputPath:(id)arg1;
- (void).cxx_destruct;
@end
