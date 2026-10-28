@interface WebviewJSEventHandler_chooseImage : WebviewJSEventHandlerBase <WCActionSheetDelegate, MMImagePickerManagerDelegate, IWebviewResourceManagerExt>
{
    unsigned int m_imgCnt; // +0x8
    long long m_sizeType; // +0x10
    long long m_sourceType; // +0x18
    BOOL m_livePhotoMode; // +0x20
    BOOL m_canSendGif; // +0x21
    NSMutableArray * _localIds; // +0x28
    long long _totalCount; // +0x30
    NSMutableDictionary * m_livePhotoLocalIds; // +0x38
    long long m_livePhotoCount; // +0x40
    unsigned long long m_liveProcessStartTime; // +0x48
    BOOL m_livePhotoProcessAllDone; // +0x50
    BOOL _userDidSelectOrCancel; // +0x51
    BOOL _isAutoConfirm; // +0x52
    double _delayDuration; // +0x58
}
- (id)init;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)asyncHandleCancel;
- (void)showImagePicker:(long long)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (long long)getImagePickerSizeType:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManagerDidPopOrDismiss:(id)arg1;
- (void)onLocalImageSaveFinish:(id)arg1;
- (void)delayNotifyWeb:(id)arg1;
- (void)tryResponse;
- (void)processLivePhotos:(id)arg1;
- (void)processLivePhotosDidFinish:(id)arg1 index:(int)arg2;
- (BOOL)isAutoConfirm;
- (void)setIsAutoConfirm:(BOOL)arg1;
- (double)delayDuration;
- (void)setDelayDuration:(double)arg1;
- (void).cxx_destruct;
@end
