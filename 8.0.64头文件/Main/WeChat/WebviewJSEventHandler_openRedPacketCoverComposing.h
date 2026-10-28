@interface WebviewJSEventHandler_openRedPacketCoverComposing : WebviewJSEventHandlerBase <MJShootComposingViewControllerDelegate>
{
    int _enterScene; // +0x8
    MJPublisher * _mjPublisher; // +0x10
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)handleJSEventOnAuthorized:(id)arg1;
- (void)handleJSEventForNewPublisher:(id)arg1;
- (void)_handleOpenShootComposingAction;
- (void)_handlePreloadAction;
- (void)_handleSDKVersionCheckAction;
- (void)_handleQRCodePreviewAction;
- (void)onSightCameraCancel:(id)arg1;
- (void)shootComposingViewController:(id)arg1 didFinishUploadRedPacketCDNWithResponseInfo:(id)arg2;
- (id)mjPublisher;
- (id)getFromVC;
- (void)setMjPublisher:(id)arg1;
- (int)enterScene;
- (void)setEnterScene:(int)arg1;
- (void).cxx_destruct;
@end
