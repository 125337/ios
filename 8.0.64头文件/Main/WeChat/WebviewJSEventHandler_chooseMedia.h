@interface WebviewJSEventHandler_chooseMedia : WebviewJSEventHandlerBase <WCActionSheetDelegate, MMImagePickerManagerDelegate, IWebviewResourceManagerExt, NewLifeImagePickViewControllerDelegate>
{
    UINavigationController * m_oVideoPicker; // +0x8
    CaptureVideoInfo * m_oVideoInfo; // +0x10
    UIImage * m_oThumbImg; // +0x18
    NSString * m_nsThumbLocalId; // +0x20
    NSString * m_nsSourceType; // +0x28
    NSMutableArray * m_localIds; // +0x30
    NSMutableDictionary * m_livePhotoLocalIds; // +0x38
    long long m_livePhotoCount; // +0x40
    unsigned long long m_liveProcessStartTime; // +0x48
    BOOL m_livePhotoProcessAllDone; // +0x50
    long long m_totalCount; // +0x58
    BOOL m_userDidSelectOrCancel; // +0x60
    BOOL _isFromLiteApp; // +0x61
    vector<std::optional<MetaData>, std::allocator<std::optional<MetaData>>> _metaDatas; // +0x68
    BOOL _livePhotoMode; // +0x80
    BOOL _canSendGif; // +0x81
    BOOL _isFromPicker; // +0x82
    BOOL _isSwitch; // +0x83
    BOOL _isAutoConfirm; // +0x84
    unsigned int _mediaType; // +0x88
    unsigned int _maxDuration; // +0x8c
    long long _sourceType; // +0x90
    long long _sizeType; // +0x98
    long long _count; // +0xa0
    long long _cameraDirection; // +0xa8
    NSString * _appId; // +0xb0
    double _delayDuration; // +0xb8
    unsigned long long _initSelectTabIndex; // +0xc0
    NewLifeImagePickViewController * _imagePickViewController; // +0xc8
}
- (id)init;
- (void)dealloc;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onCancelSelectAssets:(id)arg1;
- (void)onFinishSelectAssets:(id)arg1 assets:(id)arg2;
- (void)showTimeline;
- (id)generateSightOptionObj;
- (id)generateTimelineOptionObj;
- (id)generateAlbumOptionObj;
- (void)showSightCamera;
- (void)showVideoPicker;
- (void)addSightCameraReadyObserver;
- (void)switchCamera;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)onSightCameraCancel:(id)arg1;
- (void)onSightCameraViewControllerStartEditing;
- (void)onSightCameraViewControllerEndEditing;
- (void)onSightCameraViewWillDisappear:(BOOL)arg1;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManagerDidPopOrDismiss:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingVideoWithInfo:(id)arg2;
- (void)onLocalImageSaveFinish:(id)arg1;
- (void)handleVideo:(id)arg1 ImagePicker:(id)arg2;
- (void)processVideoFromPicker:(id)arg1;
- (void)processVideo:(id)arg1;
- (void)handleImageByImage:(id)arg1;
- (void)tryResponse;
- (void)handleImageByLoacalIds:(id)arg1;
- (int)getVideoDuration:(id)arg1;
- (void)asyncHandleCancel;
- (void)didTakeVideo;
- (void)dismissPicker;
- (void)setVideoPreviewHidden:(BOOL)arg1 inPicker:(id)arg2;
- (void)processLivePhotos:(id)arg1;
- (void)processLivePhotosDidFinish:(id)arg1 index:(int)arg2;
- (void)MMSightCameraDidBePopedOrDismissed;
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
- (BOOL)livePhotoMode;
- (void)setLivePhotoMode:(BOOL)arg1;
- (BOOL)canSendGif;
- (void)setCanSendGif:(BOOL)arg1;
- (BOOL)isFromPicker;
- (void)setIsFromPicker:(BOOL)arg1;
- (BOOL)isSwitch;
- (void)setIsSwitch:(BOOL)arg1;
- (BOOL)isAutoConfirm;
- (void)setIsAutoConfirm:(BOOL)arg1;
- (double)delayDuration;
- (void)setDelayDuration:(double)arg1;
- (unsigned long long)initSelectTabIndex;
- (void)setInitSelectTabIndex:(unsigned long long)arg1;
- (id)imagePickViewController;
- (void)setImagePickViewController:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
