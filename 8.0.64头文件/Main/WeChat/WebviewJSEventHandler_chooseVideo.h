@interface WebviewJSEventHandler_chooseVideo : WebviewJSEventHandlerBase <WCActionSheetDelegate>
{
    UINavigationController * m_oVideoPicker; // +0x8
    CaptureVideoInfo * m_oVideoInfo; // +0x10
    MMLoadingView * m_loadingView; // +0x18
    BOOL _isFromPicker; // +0x20
    unsigned int _maxDuration; // +0x24
    BOOL _isCameraMode; // +0x28
    BOOL _isFrontCamera; // +0x29
}
- (id)init;
- (void)dealloc;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)showVideoPickerCameraMode:(BOOL)arg1 isFrontCamera:(BOOL)arg2 maxDuration:(unsigned int)arg3;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingVideoWithInfo:(id)arg2;
- (void)handleVideo:(id)arg1 ImagePicker:(id)arg2;
- (void)initLoadingView;
- (void)processVideoFromPicker:(id)arg1;
- (void)processVideo:(id)arg1;
- (int)getVideoDuration:(id)arg1;
- (void)didTakeVideo;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)asyncHandleCancel;
- (void).cxx_destruct;
@end
