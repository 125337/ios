@interface WebviewJSEventHandler_choosePassport : WebviewJSEventHandlerBase <WCActionSheetDelegate, MMImagePickerManagerDelegate, IWebviewResourceManagerExt, WCPayScanPassportViewControllerDelegate>
{
    unsigned long long _sourceType; // +0x8
    NSDictionary * _scanDetailMsgMap; // +0x10
}
- (id)init;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)asyncHandleCancel;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)report:(unsigned long long)arg1;
- (void)reportDetail:(unsigned long long)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)WCPayScanPassportViewController:(id)arg1 DidDetectImageArr:(id)arg2;
- (void)WCPayScanPassportViewControllerCancel:(id)arg1;
- (void)WCPayScanPassportViewControllerFail:(id)arg1;
- (void)onLocalImageSaveFinish:(id)arg1;
- (void)reportMode:(unsigned long long)arg1 action:(unsigned long long)arg2;
- (BOOL)isVerticalScreen;
- (unsigned long long)sourceType;
- (void)setSourceType:(unsigned long long)arg1;
- (id)scanDetailMsgMap;
- (void)setScanDetailMsgMap:(id)arg1;
- (void).cxx_destruct;
@end

