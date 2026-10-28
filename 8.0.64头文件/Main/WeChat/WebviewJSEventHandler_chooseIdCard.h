@interface WebviewJSEventHandler_chooseIdCard : WebviewJSEventHandlerBase <WCActionSheetDelegate, MMImagePickerManagerDelegate, IWebviewResourceManagerExt, MMDetectIDCardViewControllerDelegate>
{
    unsigned long long _sourceType; // +0x8
}
- (id)init;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)asyncHandleCancel;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMDetectIDCardViewController:(id)arg1 DidDetectIDCard:(id)arg2;
- (void)onLocalImageSaveFinish:(id)arg1;
- (void)reportMode:(unsigned long long)arg1 action:(unsigned long long)arg2;
- (unsigned long long)sourceType;
- (void)setSourceType:(unsigned long long)arg1;
@end
