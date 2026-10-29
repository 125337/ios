@interface WebviewJSEventHandler_recordVideo : WebviewJSEventHandlerBase <WCActionSheetDelegate, MMImagePickerManagerDelegate>
{
    UINavigationController * m_oVideoPicker; // +0x8
    CaptureVideoInfo * m_oVideoInfo; // +0x10
    UIImage * m_oThumbImg; // +0x18
    NSString * m_nsThumbLocalId; // +0x20
    unsigned int _maxDuration; // +0x28
    BOOL _isCameraMode; // +0x2c
    BOOL _isFrontCamera; // +0x2d
    BOOL _isFromPicker; // +0x2e
}
- (void)dealloc;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)addSightCameraReadyObserver;
- (void)switchCamera;
- (void)showSightCamera;
- (void)showVideoPickerCameraMode:(BOOL)arg1 isFrontCamera:(BOOL)arg2 maxDuration:(unsigned int)arg3;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)onSightCameraCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingVideoWithInfo:(id)arg2;
- (void)handleVideo:(id)arg1 ImagePicker:(id)arg2;
- (void)processVideoFromPicker:(id)arg1;
- (void)processVideo:(id)arg1;
- (void)processImage:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (int)getVideoDuration:(id)arg1;
- (void)asyncHandleCancel;
- (void)didTakeVideo;
- (id)getAppId:(id)arg1;
- (void)dismissPicker;
- (void)setVideoPreviewHidden:(BOOL)arg1 inPicker:(id)arg2;
- (void).cxx_destruct;
@end

