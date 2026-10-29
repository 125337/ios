@interface WebviewJSEventHandler_chooseImage : WebviewJSEventHandlerBase <WCActionSheetDelegate, MMImagePickerManagerDelegate, IWebviewResourceManagerExt>
{
    unsigned int m_imgCnt; // +0x8
    long long m_sizeType; // +0x10
    long long m_sourceType; // +0x18
    NSMutableArray * _localIds; // +0x20
    long long _totalCount; // +0x28
    BOOL _userDidSelectOrCancel; // +0x30
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
- (void).cxx_destruct;
@end

