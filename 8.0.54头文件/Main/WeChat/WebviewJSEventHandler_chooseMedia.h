@interface WebviewJSEventHandler_chooseMedia : WebviewJSEventHandlerBase <WCActionSheetDelegate, MMImagePickerManagerDelegate, IWebviewResourceManagerExt>
{
    UINavigationController * m_oVideoPicker; // +0x8
    CaptureVideoInfo * m_oVideoInfo; // +0x10
    UIImage * m_oThumbImg; // +0x18
    NSString * m_nsThumbLocalId; // +0x20
    NSMutableArray * m_localIds; // +0x28
    long long m_totalCount; // +0x30
    BOOL m_userDidSelectOrCancel; // +0x38
    BOOL _isFromPicker; // +0x39
    BOOL _isSwitch; // +0x3a
    unsigned int _mediaType; // +0x3c
    unsigned int _maxDuration; // +0x40
    long long _sourceType; // +0x48
    long long _sizeType; // +0x50
    long long _count; // +0x58
    long long _cameraDirection; // +0x60
    NSString * _appId; // +0x68
}
- (id)init;
- (void)dealloc;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showSightCamera;
- (void)showVideoPicker;
- (void)addSightCameraReadyObserver;
- (void)switchCamera;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)onSightCameraCancel:(id)arg1;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManagerDidPopOrDismiss:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingVideoWithInfo:(id)arg2;
- (void)onLocalImageSaveFinish:(id)arg1;
- (void)handleVideo:(id)arg1 ImagePicker:(id)arg2;
- (void)processVideoFromPicker:(id)arg1;
- (void)processVideo:(id)arg1;
- (void)handleImageByImage:(id)arg1;
- (void)handleImageByLoacalIds:(id)arg1;
- (int)getVideoDuration:(id)arg1;
- (void)asyncHandleCancel;
- (void)didTakeVideo;
- (void)dismissPicker;
- (void)setVideoPreviewHidden:(BOOL)arg1 inPicker:(id)arg2;
- (unsigned int)mediaType;
- (void)setMediaType:(unsigned int)arg1;
- (long long)sourceType;
- (void)setSourceType:(long long)arg1;
- (unsigned int)maxDuration;
- (void)setMaxDuration:(unsigned int)arg1;
- (long long)sizeType;
- (void)setSizeType:(long long)arg1;
- (long long)count;
- (void)setCount:(long long)arg1;
- (long long)cameraDirection;
- (void)setCameraDirection:(long long)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (BOOL)isFromPicker;
- (void)setIsFromPicker:(BOOL)arg1;
- (BOOL)isSwitch;
- (void)setIsSwitch:(BOOL)arg1;
- (void).cxx_destruct;
@end

